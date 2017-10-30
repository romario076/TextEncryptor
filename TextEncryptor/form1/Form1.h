#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include <bitset>
#include <sstream>
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <fstream>

namespace form1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;


	/// <summary>
	/// Summary for Form1
	/// </summary>

	public ref class Form1 : public System::Windows::Forms::Form
	{

	public:

		//String ^ input;
		//String ^ key;
	    //String ^ binary_output;
	    //String ^ binary_key;


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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RichTextBox^  text;

	private: System::Windows::Forms::Label^  textLabel;
	private: System::Windows::Forms::RichTextBox^  keytext;



	private: System::Windows::Forms::Label^  keyLabel;
	private: System::Windows::Forms::RichTextBox^  textBinary;
	private: System::Windows::Forms::RichTextBox^  keytextBinary;
	private: System::Windows::Forms::RichTextBox^  textEncrypted;






	private: System::Windows::Forms::Label^  textBinaryLabel;
	private: System::Windows::Forms::Label^  keyBinaryLabel;
	private: System::Windows::Forms::Label^  textEncryptedLabel;
	private: System::Windows::Forms::RichTextBox^  textUnencrypted;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;





	protected: 


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->text = (gcnew System::Windows::Forms::RichTextBox());
			this->textLabel = (gcnew System::Windows::Forms::Label());
			this->keytext = (gcnew System::Windows::Forms::RichTextBox());
			this->keyLabel = (gcnew System::Windows::Forms::Label());
			this->textBinary = (gcnew System::Windows::Forms::RichTextBox());
			this->keytextBinary = (gcnew System::Windows::Forms::RichTextBox());
			this->textEncrypted = (gcnew System::Windows::Forms::RichTextBox());
			this->textBinaryLabel = (gcnew System::Windows::Forms::Label());
			this->keyBinaryLabel = (gcnew System::Windows::Forms::Label());
			this->textEncryptedLabel = (gcnew System::Windows::Forms::Label());
			this->textUnencrypted = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Green;
			this->button1->Location = System::Drawing::Point(39, 488);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ok";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// text
			// 
			this->text->Location = System::Drawing::Point(39, 106);
			this->text->Name = L"text";
			this->text->Size = System::Drawing::Size(482, 121);
			this->text->TabIndex = 2;
			this->text->Text = L"";
			// 
			// textLabel
			// 
			this->textLabel->AutoSize = true;
			this->textLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textLabel->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->textLabel->Location = System::Drawing::Point(36, 85);
			this->textLabel->Name = L"textLabel";
			this->textLabel->Size = System::Drawing::Size(67, 18);
			this->textLabel->TabIndex = 3;
			this->textLabel->Text = L"TextInput";
			// 
			// keytext
			// 
			this->keytext->Location = System::Drawing::Point(42, 259);
			this->keytext->Name = L"keytext";
			this->keytext->Size = System::Drawing::Size(482, 33);
			this->keytext->TabIndex = 4;
			this->keytext->Text = L"";
			this->keytext->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox2_TextChanged);
			// 
			// keyLabel
			// 
			this->keyLabel->AutoSize = true;
			this->keyLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->keyLabel->ForeColor = System::Drawing::SystemColors::Highlight;
			this->keyLabel->Location = System::Drawing::Point(40, 235);
			this->keyLabel->Name = L"keyLabel";
			this->keyLabel->Size = System::Drawing::Size(33, 18);
			this->keyLabel->TabIndex = 5;
			this->keyLabel->Text = L"Key";
			// 
			// textBinary
			// 
			this->textBinary->Location = System::Drawing::Point(562, 110);
			this->textBinary->Name = L"textBinary";
			this->textBinary->Size = System::Drawing::Size(533, 117);
			this->textBinary->TabIndex = 6;
			this->textBinary->Text = L"";
			// 
			// keytextBinary
			// 
			this->keytextBinary->Location = System::Drawing::Point(563, 259);
			this->keytextBinary->Name = L"keytextBinary";
			this->keytextBinary->Size = System::Drawing::Size(532, 30);
			this->keytextBinary->TabIndex = 7;
			this->keytextBinary->Text = L"";
			this->keytextBinary->TextChanged += gcnew System::EventHandler(this, &Form1::keytextBinary_TextChanged);
			// 
			// textEncrypted
			// 
			this->textEncrypted->Location = System::Drawing::Point(43, 364);
			this->textEncrypted->Name = L"textEncrypted";
			this->textEncrypted->Size = System::Drawing::Size(481, 103);
			this->textEncrypted->TabIndex = 8;
			this->textEncrypted->Text = L"";
			// 
			// textBinaryLabel
			// 
			this->textBinaryLabel->AutoSize = true;
			this->textBinaryLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBinaryLabel->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->textBinaryLabel->Location = System::Drawing::Point(559, 89);
			this->textBinaryLabel->Name = L"textBinaryLabel";
			this->textBinaryLabel->Size = System::Drawing::Size(77, 18);
			this->textBinaryLabel->TabIndex = 9;
			this->textBinaryLabel->Text = L"TextBinary";
			// 
			// keyBinaryLabel
			// 
			this->keyBinaryLabel->AutoSize = true;
			this->keyBinaryLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->keyBinaryLabel->ForeColor = System::Drawing::SystemColors::Highlight;
			this->keyBinaryLabel->Location = System::Drawing::Point(562, 238);
			this->keyBinaryLabel->Name = L"keyBinaryLabel";
			this->keyBinaryLabel->Size = System::Drawing::Size(74, 18);
			this->keyBinaryLabel->TabIndex = 10;
			this->keyBinaryLabel->Text = L"KeyBinary";
			// 
			// textEncryptedLabel
			// 
			this->textEncryptedLabel->AutoSize = true;
			this->textEncryptedLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textEncryptedLabel->ForeColor = System::Drawing::SystemColors::Highlight;
			this->textEncryptedLabel->Location = System::Drawing::Point(40, 344);
			this->textEncryptedLabel->Name = L"textEncryptedLabel";
			this->textEncryptedLabel->Size = System::Drawing::Size(106, 18);
			this->textEncryptedLabel->TabIndex = 11;
			this->textEncryptedLabel->Text = L"Encrypted Text";
			// 
			// textUnencrypted
			// 
			this->textUnencrypted->Location = System::Drawing::Point(563, 360);
			this->textUnencrypted->Name = L"textUnencrypted";
			this->textUnencrypted->Size = System::Drawing::Size(532, 107);
			this->textUnencrypted->TabIndex = 12;
			this->textUnencrypted->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label1->Location = System::Drawing::Point(560, 339);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(295, 18);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Unencrypted text, come back to original text";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label2->Location = System::Drawing::Point(47, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(275, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"- Enter the text you want to encode in the TextInput field.";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label3->Location = System::Drawing::Point(47, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(276, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"- Enter key you want to use for encoding in the Key field. ";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label4->Location = System::Drawing::Point(47, 44);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(607, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"- In TextBinary field you will receive binary text encoding, and in KeyBinary fie" 
				L"ld you will receive binary encoding for entered key.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label5->Location = System::Drawing::Point(47, 57);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(366, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"- In Ecrypted Text field you will receive encoded text using your unique Key. ";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1153, 555);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textUnencrypted);
			this->Controls->Add(this->textEncryptedLabel);
			this->Controls->Add(this->keyBinaryLabel);
			this->Controls->Add(this->textBinaryLabel);
			this->Controls->Add(this->textEncrypted);
			this->Controls->Add(this->keytextBinary);
			this->Controls->Add(this->textBinary);
			this->Controls->Add(this->keyLabel);
			this->Controls->Add(this->keytext);
			this->Controls->Add(this->textLabel);
			this->Controls->Add(this->text);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Text Encryption Using Key";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::richTextBox2_TextChanged);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				
				 if ((text->Text->Length==0) || (keytext->Text->Length==0))
				 {
					MessageBox::Show("Please, enter all inputs!");

				 }

				
				String ^ inputSS= text->Text;
				String ^ keySS= keytext->Text;
				std::string binary_output= "";
				std::string binary_key= "";

				std::string input = msclr::interop::marshal_as<std::string>(inputSS);
				for (std::size_t i = 0; i < input.size(); ++i)
				  {
					  bitset<8> b(input.c_str()[i]);
					  binary_output+=b.to_string();
				 }

				textBinary->Text= gcnew String(binary_output.c_str());


				std::string key = msclr::interop::marshal_as<std::string>(keySS);
				for (std::size_t i = 0; i < key.size(); ++i)
				  {
					  bitset<8> b(key.c_str()[i]);
					  binary_key+=b.to_string();
				  }
				keytextBinary->Text= gcnew String(binary_key.c_str());
				 

				 int len1 = binary_key.size();
				 int len2 = binary_output.size();
				 //cout<<"Binary output len: "<<len2<<endl;
				 //cout<<"Binary key len: "<<len1<<endl;
				 if (len1 < len2)
				 {
					for (int i = 0 ; i < len2 - len1 ; i++)
						binary_key = '0' + binary_key;
				 }
				 else if (len1 > len2)
				 {
					for (int i = 0 ; i < len1 - len2 ; i++)
						binary_output =  binary_output + '0';
				 }
				

				 int len3= binary_key.size();
				 string result="";
				 for (int i = len3-1 ; i>=0 ; i--)
				{
				   int firstBit = binary_key.at(i)- '0';
				   int secondBit = binary_output.at(i)- '0';
				   int xor= (firstBit^secondBit)+'0';
				   result= (char)xor+ result;
				}

				 textEncrypted->Text= gcnew String(result.c_str());



				int len4= result.size();
				string result2="";
				 for (int i = len4-1 ; i>=0 ; i--)
				{
				   int firstBit = binary_key.at(i)- '0';
				   int secondBit = result.at(i)- '0';
				   int xor= (firstBit^secondBit)+'0';
				   result2= (char)xor+ result2;
				}
				 if (len1>len2)
				 {
					 result2= result2.substr(0,len2);
				 }
				 cout<<"UnEncrypted: "<<result2<<endl;


				 stringstream sstream(result2);
				 string backToString;

				while(sstream.good())
				{
					bitset<8> bits;
					sstream >> bits;
					char c = char(bits.to_ulong());
					backToString += c;
				}

			   textUnencrypted->Text= gcnew String(backToString.c_str());

				
				//ofstream myfile;
				 // myfile.open ("example.txt");
				 // myfile << input;

				 // myfile.close();

			 }
private: System::Void richTextBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void keytextBinary_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 if (MessageBox::Show("Do you really want to exit?", "Text Encryption Using Key", MessageBoxButtons::YesNo,
				 MessageBoxIcon::Question)==System::Windows::Forms::DialogResult::Yes) {
					 Application::Exit();
			 }
			 else
				 e->Cancel=true;
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

