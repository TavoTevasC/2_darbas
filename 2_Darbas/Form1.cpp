#include "pch.h"
#include "Form1.h"

#include "Studentas.h"

vector<Studentas> grupe;
vector<Studentas> nuskriaustukai;
vector<Studentas> galvociai;

// Generuoti N studentų duomenis į konteinerį
template <typename Container>
Container generateStudents(size_t N, int ndCount = 5) {
    Container c;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 10);
    for (size_t i = 1; i <= N; ++i) {
        string vard = "Vardas" + to_string(i);
        string pav = "Pavarde" + to_string(i);
        vector<int> nd;
        nd.reserve(ndCount);
        for (int j = 0; j < ndCount; ++j) nd.push_back(dist(gen));
        int egz = dist(gen);
        c.push_back(Studentas(vard, pav, nd, egz));
    }
    return c;
}

// 1 Strategija: Skaidymas į du to paties tipo kontienerius
template <typename Container>
std::string run_strategy1(const Container& orig, const string& name) {
    std::ostringstream out;
    ::Timer t;
    size_t memBefore = getProcessMemoryKB();
    t.reset();
    Container vargsiukai;
    Container galvociai;
    for (const auto& s : orig) {
        if (s.getGalutinisVidurkis() < 5.0)
            vargsiukai.push_back(s);
        else
            galvociai.push_back(s);
    }
    double elapsed = t.elapsed();
    size_t memAfter = getProcessMemoryKB();

    out << "[1 Strategija] Konteineris: " << name << "\n";
    out << "  Laikas: " << elapsed << " s, Papildomos atminties poreikis: " << (memAfter >= memBefore ? memAfter - memBefore : 0) << " KB\n";
    return out.str();
}

// 2 Strategija: Naudojam tik vieną konteinerį, perkeliam elementus
template <typename Container>
std::string run_strategy2(Container orig, const string& name) {
    std::ostringstream out;
    ::Timer t;
    size_t memBefore = getProcessMemoryKB();
    t.reset();
    Container vargsiukai;

    if constexpr (is_same<Container, list<Studentas>>::value) {
        for (auto it = orig.begin(); it != orig.end(); ) {
            if (it->getGalutinisVidurkis() < 5.0) {
                auto cur = it++;
                vargsiukai.splice(vargsiukai.end(), orig, cur);
            }
            else {
                ++it;
            }
        }
    }
    else {
        auto predGalvociai = [](const Studentas& s) { return s.getGalutinisVidurkis() >= 5.0; };
        auto it = stable_partition(orig.begin(), orig.end(), predGalvociai);
        // Perkelia vargsiukus i nauja konteineri
        vargsiukai.insert(vargsiukai.end(), make_move_iterator(it), make_move_iterator(orig.end()));
        orig.erase(it, orig.end());
    }

    double elapsed = t.elapsed();
    size_t memAfter = getProcessMemoryKB();

    out << "[2 Strategija] Konteineris: " << name << "\n";
    out << "  Laikas: " << elapsed << " s, Papildomos atminties poreikis: " << (memAfter >= memBefore ? memAfter - memBefore : 0) << " KB\n";
    return out.str();
}

using namespace CppCLRWinFormsProject;



System::Void Form1::GenerateTxtToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Generavimas gali uzimt kelias minutes.", "Informacija", MessageBoxButtons::OK, MessageBoxIcon::Information);
	Generatorius::generuotiVisus();
	MessageBox::Show("Failai sekmingai sugeneruoti. Nuskaitymas is failu...", "Informacija", MessageBoxButtons::OK, MessageBoxIcon::Information);
    
    
    grupe.clear();
    nuskriaustukai.clear();
    galvociai.clear();

    
    std::vector<std::string> files = {
        "studentai_1000.txt",
        "studentai_10000.txt",
        "studentai_100000.txt",
        "studentai_1000000.txt",
        "studentai_10000000.txt"
        
    };

    for (const auto& fname : files) {
        try {
            auto tmp = Studentas::nuskaitytiIsFailo(fname);
            
            grupe.insert(grupe.end(), tmp.begin(), tmp.end());
        }
        catch (const std::exception& ex) {
            std::string msg = "Klaida skaitant " + fname + ": " + ex.what();
            MessageBox::Show(gcnew System::String(msg.c_str()), "Klaida", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

    
    if (grupe.empty()) {
        MessageBox::Show("Nėra duomenų nuskaityti iš failų.", "Įspėjimas", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }

    for (auto& s : grupe) {
        
        s.skaiciuotiGalutinis();
        if (s.getGalutinisVidurkis() < 5.0)
            nuskriaustukai.push_back(s);
        else
            galvociai.push_back(s);
    }

    if (!nuskriaustukai.empty()) isvestiIFaila(nuskriaustukai, "nuskriaustukai.txt");
    if (!galvociai.empty()) isvestiIFaila(galvociai, "galvociai.txt");
    MessageBox::Show("Rezultatu failai sekmingai sukurti.", "Informacija", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

System::Void Form1::GenerateStudentsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{

    Studentas gen;

    std::string tekstas = gen.generuotiDuomenis();

    richTextBox1->Text = gcnew System::String(tekstas.c_str()); 
}

System::Void Form1::SpeedTestToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("Spartos testavimas gali uzimt kelias minutes.", "Informacija", MessageBoxButtons::OK, MessageBoxIcon::Information);
    vector<size_t> sizes = { 1000, 10000, 100000, 1000000, 10000000 };
    std::ostringstream totalOut;
    for (size_t n : sizes) {
        totalOut << "=== Spartos testavimas: n = " << n << " ===\r\n";
        // Vector
        auto vec = generateStudents<vector<Studentas>>(n);
        totalOut << run_strategy1(vec, "vector");
        totalOut << run_strategy2(vec, "vector");

        // Deque
        auto deq = generateStudents<deque<Studentas>>(n);
        totalOut << run_strategy1(deq, "deque");
        totalOut << run_strategy2(deq, "deque");

        // List
        auto lst = generateStudents<list<Studentas>>(n);
        totalOut << run_strategy1(lst, "list");
        totalOut << run_strategy2(lst, "list");
    }

    
    richTextBox1->Text = gcnew System::String(totalOut.str().c_str());
    MessageBox::Show("Spartos testavimas sekmingai atliktas.", "Informacija", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

System::Void Form1::buttonOpenFile_Click(System::Object^ sender, System::EventArgs^ e)
{
    openFileDialog1->InitialDirectory = ".\\";
    openFileDialog1->Filter = "txt files (*.txt) | *.txt";
    if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(openFileDialog1->FileName);
        richTextBox1->Text = (sr->ReadToEnd());
        sr->Close();
        failo_vardas = openFileDialog1->FileName;
        Form1::Text = "TXT failu redaktorius\t|\t" + failo_vardas;
    }
}

System::Void Form1::buttonSaveFile_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ z;
    if (richTextBox1->Text == "") z = " ";
    else z = richTextBox1->Text;
    if (failo_vardas != "")
    {
        System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(failo_vardas);
        sw->Write(z);
        sw->Close();
        MessageBox::Show("The file has been successfully\nrewritten",
            "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
    else MessageBox::Show("You forgot to open file", "File open Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

System::Void Form1::buttonSaveAs_Click(System::Object^ sender, System::EventArgs^ e)
{
    SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
    saveFileDialog1->InitialDirectory = ".\\";
    saveFileDialog1->Filter = "txt files (*.txt) | *.txt";
    String^ z = richTextBox1->Text;
    if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(saveFileDialog1->FileName);
        sw->Write(z);
        sw->Close();
        failo_vardas = saveFileDialog1->FileName;
        Form1::Text = "TXT failu redaktorius\t|\t" + failo_vardas;
    }
    else MessageBox::Show("Error on file input", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

System::Void Form1::buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
    Form1::Close();
}

System::Void Form1::CinToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Form2^ form2 = gcnew Form2();
    if (form2->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
        String^ combined = form2->CombinedText;
        if (!String::IsNullOrEmpty(combined)) {
            richTextBox1->AppendText(combined + "\r\n");
        }
    }
}

System::Void Form1::ExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
    buttonExit_Click(sender, e);
}

System::Void Form1::OpenFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    buttonOpenFile_Click(sender, e);
}

System::Void Form1::SaveToFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    buttonSaveFile_Click(sender, e);
}

System::Void Form1::SaveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
    buttonSaveAs_Click(sender, e);
}

System::Void Form1::AboutProgramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("Programa sukurta pagal SD1 uzduoti.\nAutorius: Dominik Zabelskij", "Apie", MessageBoxButtons::OK, MessageBoxIcon::Information);
}


