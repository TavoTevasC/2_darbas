#pragma once

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
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}

	public:
		// Publicly readable combined text property
		System::String^ CombinedText;

	private: System::Windows::Forms::TextBox^ textBoxName;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxSurname;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxMark;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxEgzam;

	private: System::Windows::Forms::Button^ buttonSubmit;
	private: System::Windows::Forms::RadioButton^ radioButtonVidurkis;
	private: System::Windows::Forms::RadioButton^ radioButtonMediana;
	private: System::Windows::Forms::Button^ buttonExit;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxSurname = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxMark = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxEgzam = (gcnew System::Windows::Forms::TextBox());
			this->buttonSubmit = (gcnew System::Windows::Forms::Button());
			this->radioButtonVidurkis = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonMediana = (gcnew System::Windows::Forms::RadioButton());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBoxName
			// 
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxName->Location = System::Drawing::Point(200, 14);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(150, 26);
			this->textBoxName->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(15, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(150, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Vardas:";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(15, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Pavardė:";
			// 
			// textBoxSurname
			// 
			this->textBoxSurname->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSurname->Location = System::Drawing::Point(200, 54);
			this->textBoxSurname->Name = L"textBoxSurname";
			this->textBoxSurname->Size = System::Drawing::Size(150, 26);
			this->textBoxSurname->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(15, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Pažymiai:";
			// 
			// textBoxMark
			// 
			this->textBoxMark->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxMark->Location = System::Drawing::Point(200, 94);
			this->textBoxMark->Name = L"textBoxMark";
			this->textBoxMark->Size = System::Drawing::Size(150, 26);
			this->textBoxMark->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(15, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(150, 25);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Egzamino pažymis:";
			// 
			// textBoxEgzam
			// 
			this->textBoxEgzam->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxEgzam->Location = System::Drawing::Point(200, 134);
			this->textBoxEgzam->Name = L"textBoxEgzam";
			this->textBoxEgzam->Size = System::Drawing::Size(150, 26);
			this->textBoxEgzam->TabIndex = 7;
			// 
			// buttonSubmit
			// 
			this->buttonSubmit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonSubmit->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSubmit->Location = System::Drawing::Point(90, 210);
			this->buttonSubmit->Name = L"buttonSubmit";
			this->buttonSubmit->Size = System::Drawing::Size(200, 30);
			this->buttonSubmit->TabIndex = 8;
			this->buttonSubmit->Text = L"Pridėti";
			this->buttonSubmit->UseVisualStyleBackColor = true;
			this->buttonSubmit->Click += gcnew System::EventHandler(this, &Form2::buttonSubmit_Click);
			// 
			// radioButtonVidurkis
			// 
			this->radioButtonVidurkis->Checked = true;
			this->radioButtonVidurkis->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButtonVidurkis->Location = System::Drawing::Point(100, 170);
			this->radioButtonVidurkis->Name = L"radioButtonVidurkis";
			this->radioButtonVidurkis->Size = System::Drawing::Size(90, 30);
			this->radioButtonVidurkis->TabIndex = 9;
			this->radioButtonVidurkis->TabStop = true;
			this->radioButtonVidurkis->Text = L"Vidurkis";
			this->radioButtonVidurkis->UseVisualStyleBackColor = true;
			// 
			// radioButtonMediana
			// 
			this->radioButtonMediana->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButtonMediana->Location = System::Drawing::Point(190, 170);
			this->radioButtonMediana->Name = L"radioButtonMediana";
			this->radioButtonMediana->Size = System::Drawing::Size(90, 30);
			this->radioButtonMediana->TabIndex = 10;
			this->radioButtonMediana->Text = L"Mediana";
			this->radioButtonMediana->UseVisualStyleBackColor = true;
			// 
			// buttonExit
			// 
			this->buttonExit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExit->Location = System::Drawing::Point(90, 245);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(200, 30);
			this->buttonExit->TabIndex = 11;
			this->buttonExit->Text = L"Uždaryti langą";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &Form2::buttonExit_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(364, 281);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->radioButtonMediana);
			this->Controls->Add(this->radioButtonVidurkis);
			this->Controls->Add(this->buttonSubmit);
			this->Controls->Add(this->textBoxEgzam);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxMark);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxSurname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxName);
			this->MaximizeBox = false;
			this->Name = L"Form2";
			this->Text = L"Ivestis";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonSubmit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e);
};
}
