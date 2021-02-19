#pragma once
#include <cliext/vector>
#include<cliext/algorithm>
#include<ctype.h>
using cliext::vector;

namespace COSO {

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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  diagnosticsToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::ToolStripMenuItem^  reorderToOriginalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  resetCOSOToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->diagnosticsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reorderToOriginalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resetCOSOToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(112, 302);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(153, 62);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::H));
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::helpToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
			// 
			// diagnosticsToolStripMenuItem
			// 
			this->diagnosticsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->reorderToOriginalToolStripMenuItem, 
				this->resetCOSOToolStripMenuItem});
			this->diagnosticsToolStripMenuItem->Name = L"diagnosticsToolStripMenuItem";
			this->diagnosticsToolStripMenuItem->Size = System::Drawing::Size(96, 20);
			this->diagnosticsToolStripMenuItem->Text = L"COSO Options";
			this->diagnosticsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::diagnosticsToolStripMenuItem_Click);
			// 
			// reorderToOriginalToolStripMenuItem
			// 
			this->reorderToOriginalToolStripMenuItem->Name = L"reorderToOriginalToolStripMenuItem";
			this->reorderToOriginalToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::R));
			this->reorderToOriginalToolStripMenuItem->Size = System::Drawing::Size(215, 22);
			this->reorderToOriginalToolStripMenuItem->Text = L"Reorder to Original";
			this->reorderToOriginalToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::reorderToOriginalToolStripMenuItem_Click);
			// 
			// resetCOSOToolStripMenuItem
			// 
			this->resetCOSOToolStripMenuItem->Name = L"resetCOSOToolStripMenuItem";
			this->resetCOSOToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::R));
			this->resetCOSOToolStripMenuItem->Size = System::Drawing::Size(215, 22);
			this->resetCOSOToolStripMenuItem->Text = L"Reset COSO";
			this->resetCOSOToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::resetCOSOToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::E));
			this->exitToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->helpToolStripMenuItem, 
				this->aboutToolStripMenuItem, this->diagnosticsToolStripMenuItem, this->exitToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(639, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(33, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(123, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(162, 46);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 20);
			this->button1->TabIndex = 3;
			this->button1->Text = L"+COSO LIST";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(140, 104);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(192, 49);
			this->button2->TabIndex = 4;
			this->button2->Text = L"RUN COSO";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(260, 46);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(92, 20);
			this->button3->TabIndex = 5;
			this->button3->Text = L"View Current";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label1
			// 
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(112, 209);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 15);
			this->label1->TabIndex = 6;
			this->label1->Text = L"NO DATA!";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(112, 227);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(153, 22);
			this->textBox2->TabIndex = 7;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(46, 104);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(79, 17);
			this->radioButton1->TabIndex = 8;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Ascending";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(46, 136);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(86, 17);
			this->radioButton2->TabIndex = 9;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Descending";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::Menu;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(375, 47);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(252, 279);
			this->richTextBox1->TabIndex = 10;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox1_TextChanged);
			// 
			// Form1
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(639, 376);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"COSO - A Premium Cocktail Sort Engine v.3.1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		vector<int> data;
		vector<int> sdata;
#pragma endregion
	private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				MessageBox::Show("Guidelines:\n\n1) You must enter any integer value you want.\n\n2) Click +COSO LIST to add new values to COSO Engine.\n\n3) Select order of sorting and click RUN COSO to ignite the COSO Engine.\n\n4) You can always add new numbers even if the list is sorted and displayed.\n\n5) Click COSO Options to have following options:\n\ti) Reorder to Original - unsort the data back to original order.\n\tii) Reset COSO - resets the COSO process, memory, and every other component.\n\nThings you can do with COSO:\n\nYou can visually see what COSO does to your data when you sort. You can always return to your original data without removing the COSO processing section, thereby giving you a valuable option to view your original data and its sorting process side by side.",
					"Help me COSO!", MessageBoxButtons::OK,
					MessageBoxIcon::Question);
			}
	private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				MessageBox::Show("COSO Engine is created through coding experience of Zain Ul Mustafa (EE 1169), sharp ability in technical assist of Mustajab Siddiqui (EE 1166), and exceptional knowledge in algorithms and flowcharts of Muhammad Ali (EE 1172) and Waqas Kureshi (EE 1171).",
					"About COSO Team", MessageBoxButtons::OK,
					MessageBoxIcon::Asterisk);
			}
	private: System::Void diagnosticsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				
			 }
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				  if(MessageBox::Show("You are exiting COSO! Press Cancel to return to COSO.",
					"Exit COSO", MessageBoxButtons::OKCancel,
					MessageBoxIcon::Warning)== System::Windows::Forms::DialogResult::OK){
						Application::Exit();
				  }
				 
			}

			 //////////////////////////////////////////////////////////////////
			 //////////////////////////////////////////////////////////////////

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Add to COSO LIST BUTTON
				if(textBox1->Text == ""){
					MessageBox::Show("Please check if you have NOT left the field blank. You cannot add 'nothing' to the COSO LIST!",
						"Error in your data!", MessageBoxButtons::OK,
						MessageBoxIcon::Warning);
				}
				else{
					label1->Text = "Data is being filled....";
					data.push_back(Convert::ToInt32(textBox1->Text));
					sdata.push_back(Convert::ToInt32(textBox1->Text));
					textBox1->Text = "";
				}
			}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 //RUN COSO BUTTON
				if(data.empty()){
					MessageBox::Show("Please check if you have NOT left the field blank. You cannot sort 'nothing' through the COSO LIST!",
						"Error in sorting!", MessageBoxButtons::OK,
						MessageBoxIcon::Warning);
				}
				else{
					/*int temp;
					bool check = true;
					while(check){
						check = false;
						richTextBox1->Text = richTextBox1->Text + "\r\nRIGHT\r\n";
						for(unsigned int x=data.size()-1; x>0; x--){
							if(data[x-1]>data[x]){
								temp = data[x-1];
								data[x-1] = data[x];
								data[x] = temp;
								check = true;
								for(int p=0; p!=data.size(); p++){
									richTextBox1->Text = richTextBox1->Text + Convert::ToString(data[p]) + ",";
								}
								richTextBox1->Text = richTextBox1->Text + "\r\n";
							}
						}
						richTextBox1->Text = richTextBox1->Text + "\r\nLEFT\r\n";
						for(unsigned int y=1; y<data.size(); y++){
							if(data[y-1]>data[y]){
								temp = data[y-1];
								data[y-1] = data[y];
								data[y] = temp;
								check = true;
								for(int p=0; p!=data.size(); p++){
									richTextBox1->Text = richTextBox1->Text + Convert::ToString(data[p]) + ",";
								}
								richTextBox1->Text = richTextBox1->Text + "\r\n";
							}
						}
						
					}*/
					
					/*OUTPUT*/
					//Ascending
					if(radioButton1->Checked){
						label1->Text = "Sorted Data in ascending order";
						textBox2->Text = "";
						int temp;
						bool check = true;
						while(check){
							check = false;
							
							richTextBox1->Text = richTextBox1->Text + "\r\nLEFT\r\n";
							for(unsigned int y=1; y<data.size(); y++){
								if(data[y-1]>data[y]){
									temp = data[y-1];
									data[y-1] = data[y];
									data[y] = temp;
									check = true;
									for(int p=0; p!=data.size(); p++){
										richTextBox1->Text = richTextBox1->Text + Convert::ToString(data[p]) + ",";
									}
									richTextBox1->Text = richTextBox1->Text + "\r\n";
								}
							}
							richTextBox1->Text = richTextBox1->Text + "\r\nRIGHT\r\n";
							for(unsigned int x=data.size()-1; x>0; x--){
								if(data[x-1]>data[x]){
									temp = data[x-1];
									data[x-1] = data[x];
									data[x] = temp;
									check = true;
									for(int p=0; p!=data.size(); p++){
										richTextBox1->Text = richTextBox1->Text + Convert::ToString(data[p]) + ",";
									}
									richTextBox1->Text = richTextBox1->Text + "\r\n";
								}
							}
						
						}
						for(unsigned int i=0; i<data.size(); i++){
							if(i==0){
								textBox2->Text = Convert::ToString(data[i]);
							}
							else{
								textBox2->Text = textBox2->Text +" , "+ Convert::ToString(data[i]);
							}
						}
					}
					//Deecending
					else if(radioButton2->Checked){
						label1->Text = "Sorted Data in Descending order";
						textBox2->Text = "";
						reverse(data.begin(),data.end());
						richTextBox1->Text = "COSO data descend successful!";
						for(unsigned int i=0; i<data.size(); i++){
							if(i==0){
								textBox2->Text = Convert::ToString(data[i]);
							}
							else{
								textBox2->Text = textBox2->Text +" , "+ Convert::ToString(data[i]);
							}
						}
					}
					else{
						label1->Text = "ERROR";
						textBox2->Text = "";
						MessageBox::Show("You have left order of sorting unchecked, please check any one to continue!",
							"Error in Process!", MessageBoxButtons::OK,
							MessageBoxIcon::Warning);
					}
					/*OUTPUT COMPLETE*/
				}
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 //View Current List BUTTON
				if(data.empty()){
					MessageBox::Show("Please check if you have NOT left the field blank. You cannot display 'nothing' from the COSO LIST!",
						"Error in display!", MessageBoxButtons::OK,
						MessageBoxIcon::Warning);
				}
				else{
					label1->Text = "Current Data";
					for(unsigned int i=0; i<data.size(); i++){
						if(i==0){
							textBox2->Text = Convert::ToString(data[i]);
						}
						else{
							textBox2->Text = textBox2->Text +" , "+ Convert::ToString(data[i]);
						}
					}
				}
			 }
	
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //data visibility
			}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 //COSO sort list displayed here
			}
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			}
	private: System::Void resetCOSOToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				while(!data.empty()){
					data.pop_back();
					sdata.pop_back();
				}
				label1->Text = "COSO is Reset";
				textBox2->Text = "";
				richTextBox1->Text = "";
			}
	private: System::Void reorderToOriginalToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				while(!data.empty()){
					data.pop_back();
				}
				for(unsigned int i=0; i<sdata.size(); i++){
						data.push_back(sdata[i]);
				}
				label1->Text = "Reordered to Original";
				textBox2->Text = "";
			}
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			}
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			}
	private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				
			}
};
}

