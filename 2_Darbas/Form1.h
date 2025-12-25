#pragma once
#include "Form2.h";

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fukcijosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ CinToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ GenerateStudentsToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ GenerateTxtToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ SpeedTestToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ExitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ failasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ SaveToFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ OpenFileToolStripMenuItem;


	private: System::Windows::Forms::Button^ buttonSaveFile;
	private: System::Windows::Forms::Button^ buttonOpenFile;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ buttonSaveAs;
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ SaveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ apieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ AboutProgramToolStripMenuItem;



	

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fukcijosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CinToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->GenerateStudentsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->GenerateTxtToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SpeedTestToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->failasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OpenFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveToFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->apieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AboutProgramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buttonSaveFile = (gcnew System::Windows::Forms::Button());
			this->buttonOpenFile = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->buttonSaveAs = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fukcijosToolStripMenuItem,
					this->failasToolStripMenuItem, this->apieToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1388, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fukcijosToolStripMenuItem
			// 
			this->fukcijosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->CinToolStripMenuItem,
					this->GenerateStudentsToolStripMenuItem, this->GenerateTxtToolStripMenuItem, this->SpeedTestToolStripMenuItem, this->ExitToolStripMenuItem
			});
			this->fukcijosToolStripMenuItem->Name = L"fukcijosToolStripMenuItem";
			this->fukcijosToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->fukcijosToolStripMenuItem->Text = L"Funkcijos";
			// 
			// CinToolStripMenuItem
			// 
			this->CinToolStripMenuItem->Name = L"CinToolStripMenuItem";
			this->CinToolStripMenuItem->Size = System::Drawing::Size(245, 22);
			this->CinToolStripMenuItem->Text = L"Pridėti studentus rankiniu būdu";
			this->CinToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::CinToolStripMenuItem_Click);
			// 
			// GenerateStudentsToolStripMenuItem
			// 
			this->GenerateStudentsToolStripMenuItem->Name = L"GenerateStudentsToolStripMenuItem";
			this->GenerateStudentsToolStripMenuItem->Size = System::Drawing::Size(245, 22);
			this->GenerateStudentsToolStripMenuItem->Text = L"Generuoti studentus";
			this->GenerateStudentsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::GenerateStudentsToolStripMenuItem_Click);
			// 
			// GenerateTxtToolStripMenuItem
			// 
			this->GenerateTxtToolStripMenuItem->Name = L"GenerateTxtToolStripMenuItem";
			this->GenerateTxtToolStripMenuItem->Size = System::Drawing::Size(245, 22);
			this->GenerateTxtToolStripMenuItem->Text = L"Generuoti testinius failus";
			this->GenerateTxtToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::GenerateTxtToolStripMenuItem_Click);
			// 
			// SpeedTestToolStripMenuItem
			// 
			this->SpeedTestToolStripMenuItem->Name = L"SpeedTestToolStripMenuItem";
			this->SpeedTestToolStripMenuItem->Size = System::Drawing::Size(245, 22);
			this->SpeedTestToolStripMenuItem->Text = L"Konteineru spartumo testavimas";
			this->SpeedTestToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::SpeedTestToolStripMenuItem_Click);
			// 
			// ExitToolStripMenuItem
			// 
			this->ExitToolStripMenuItem->Name = L"ExitToolStripMenuItem";
			this->ExitToolStripMenuItem->Size = System::Drawing::Size(245, 22);
			this->ExitToolStripMenuItem->Text = L"Išeiti";
			this->ExitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ExitToolStripMenuItem_Click);
			// 
			// failasToolStripMenuItem
			// 
			this->failasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->OpenFileToolStripMenuItem,
					this->SaveToFileToolStripMenuItem, this->SaveAsToolStripMenuItem
			});
			this->failasToolStripMenuItem->Name = L"failasToolStripMenuItem";
			this->failasToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->failasToolStripMenuItem->Text = L"Failas";
			// 
			// OpenFileToolStripMenuItem
			// 
			this->OpenFileToolStripMenuItem->Name = L"OpenFileToolStripMenuItem";
			this->OpenFileToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->OpenFileToolStripMenuItem->Text = L"Atidaryti failą";
			this->OpenFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::OpenFileToolStripMenuItem_Click);
			// 
			// SaveToFileToolStripMenuItem
			// 
			this->SaveToFileToolStripMenuItem->Name = L"SaveToFileToolStripMenuItem";
			this->SaveToFileToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->SaveToFileToolStripMenuItem->Text = L"Irašyti į failą";
			this->SaveToFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::SaveToFileToolStripMenuItem_Click);
			// 
			// SaveAsToolStripMenuItem
			// 
			this->SaveAsToolStripMenuItem->Name = L"SaveAsToolStripMenuItem";
			this->SaveAsToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->SaveAsToolStripMenuItem->Text = L"Irašytu į naują failą";
			this->SaveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::SaveAsToolStripMenuItem_Click);
			// 
			// apieToolStripMenuItem
			// 
			this->apieToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->AboutProgramToolStripMenuItem });
			this->apieToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->apieToolStripMenuItem->Name = L"apieToolStripMenuItem";
			this->apieToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->apieToolStripMenuItem->Text = L"Apie";
			// 
			// AboutProgramToolStripMenuItem
			// 
			this->AboutProgramToolStripMenuItem->Name = L"AboutProgramToolStripMenuItem";
			this->AboutProgramToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->AboutProgramToolStripMenuItem->Text = L"Apie programą";
			this->AboutProgramToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::AboutProgramToolStripMenuItem_Click);
			// 
			// buttonSaveFile
			// 
			this->buttonSaveFile->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSaveFile->Location = System::Drawing::Point(1234, 91);
			this->buttonSaveFile->Name = L"buttonSaveFile";
			this->buttonSaveFile->Size = System::Drawing::Size(142, 58);
			this->buttonSaveFile->TabIndex = 2;
			this->buttonSaveFile->Text = L"Irašyti į failą";
			this->buttonSaveFile->UseVisualStyleBackColor = true;
			this->buttonSaveFile->Click += gcnew System::EventHandler(this, &Form1::buttonSaveFile_Click);
			// 
			// buttonOpenFile
			// 
			this->buttonOpenFile->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonOpenFile->Location = System::Drawing::Point(1234, 27);
			this->buttonOpenFile->Name = L"buttonOpenFile";
			this->buttonOpenFile->Size = System::Drawing::Size(142, 58);
			this->buttonOpenFile->TabIndex = 3;
			this->buttonOpenFile->Text = L"Atidaryti failą";
			this->buttonOpenFile->UseVisualStyleBackColor = true;
			this->buttonOpenFile->Click += gcnew System::EventHandler(this, &Form1::buttonOpenFile_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// buttonSaveAs
			// 
			this->buttonSaveAs->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSaveAs->Location = System::Drawing::Point(1234, 155);
			this->buttonSaveAs->Name = L"buttonSaveAs";
			this->buttonSaveAs->Size = System::Drawing::Size(142, 58);
			this->buttonSaveAs->TabIndex = 4;
			this->buttonSaveAs->Text = L"Irašyti į naują failą";
			this->buttonSaveAs->UseVisualStyleBackColor = true;
			this->buttonSaveAs->Click += gcnew System::EventHandler(this, &Form1::buttonSaveAs_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExit->Location = System::Drawing::Point(1234, 297);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(142, 58);
			this->buttonExit->TabIndex = 5;
			this->buttonExit->Text = L"Baigti darbą";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &Form1::buttonExit_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(12, 27);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox1->Size = System::Drawing::Size(1216, 328);
			this->richTextBox1->TabIndex = 6;
			this->richTextBox1->Text = L"";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1388, 367);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->buttonSaveAs);
			this->Controls->Add(this->buttonOpenFile);
			this->Controls->Add(this->buttonSaveFile);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Pagrindinis";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::String^ failo_vardas = "";
	private: System::Void GenerateTxtToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void GenerateStudentsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonOpenFile_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSaveFile_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSaveAs_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void SpeedTestToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void CinToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void OpenFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void SaveToFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void SaveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void AboutProgramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
