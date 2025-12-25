#include "pch.h"
#include "Form2.h"

#include "Studentas.h"
#include <msclr/marshal_cppstd.h>
#include <sstream>

using namespace CppCLRWinFormsProject;
using namespace msclr::interop;

System::Void Form2::buttonSubmit_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string name = marshal_as<std::string>(textBoxName->Text);
    std::string surname = marshal_as<std::string>(textBoxSurname->Text);
    std::string marksStr = marshal_as<std::string>(textBoxMark->Text);
    std::string egzStr = marshal_as<std::string>(textBoxEgzam->Text);

    std::vector<int> nd;
    std::istringstream iss(marksStr);
    int markVal;
    while (iss >> markVal) {
        nd.push_back(markVal);
        if (iss.peek() == ',' ) iss.ignore();
    }

    if (name.empty() || surname.empty()) {
        MessageBox::Show("Vardas ir pavarde negali buti tusti.", "Klaida", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }
    if (nd.empty()) {
        MessageBox::Show("Iveskite bent viena namu darbu pazymi (atidarykite per tarpus arba kablelius).", "Klaida", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    int egz = 0;
    try {
        egz = std::stoi(egzStr);
    }
    catch (...) {
        MessageBox::Show("Netinkamas egzamino pazymys.", "Klaida", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    Studentas s(name, surname, nd, egz);
    std::ostringstream out;
	s.skaiciuotiGalutinis();
    if(radioButtonVidurkis->Checked){  
        out << left << setw(15) << s.getVardas() << setw(15) << s.getPavarde() << setw(18) << std::fixed << std::setprecision(2) << s.getGalutinisVidurkis();
    }
    else if(radioButtonMediana->Checked){
        out << left << setw(15) << s.getVardas() << setw(15) << s.getPavarde() << setw(18) << std::fixed << std::setprecision(2) << s.getGalutinisMediana();
	}

    this->CombinedText = gcnew System::String(out.str().c_str());

    this->DialogResult = System::Windows::Forms::DialogResult::OK;
    this->Close();
}

System::Void Form2::buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
}