#pragma once
#include <cliext/vector>
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
	private: System::Windows::Forms::ToolStripMenuItem^  listOptionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveListToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addNewListFromFileToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

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
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->listOptionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveListToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addNewListFromFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(112, 264);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(153, 62);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::helpToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
			// 
			// diagnosticsToolStripMenuItem
			// 
			this->diagnosticsToolStripMenuItem->Name = L"diagnosticsToolStripMenuItem";
			this->diagnosticsToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->diagnosticsToolStripMenuItem->Text = L"Refresh";
			this->diagnosticsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::diagnosticsToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->listOptionsToolStripMenuItem, 
				this->helpToolStripMenuItem, this->aboutToolStripMenuItem, this->diagnosticsToolStripMenuItem, this->exitToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(379, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// listOptionsToolStripMenuItem
			// 
			this->listOptionsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->saveListToolStripMenuItem, 
				this->addNewListFromFileToolStripMenuItem});
			this->listOptionsToolStripMenuItem->Name = L"listOptionsToolStripMenuItem";
			this->listOptionsToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->listOptionsToolStripMenuItem->Text = L"List Options";
			// 
			// saveListToolStripMenuItem
			// 
			this->saveListToolStripMenuItem->Name = L"saveListToolStripMenuItem";
			this->saveListToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->saveListToolStripMenuItem->Text = L"Save List to file";
			this->saveListToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveListToolStripMenuItem_Click);
			// 
			// addNewListFromFileToolStripMenuItem
			// 
			this->addNewListFromFileToolStripMenuItem->Name = L"addNewListFromFileToolStripMenuItem";
			this->addNewListFromFileToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->addNewListFromFileToolStripMenuItem->Text = L"Add new List from file";
			this->addNewListFromFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::addNewListFromFileToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(33, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(123, 20);
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
			this->button2->Location = System::Drawing::Point(95, 91);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(192, 39);
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
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(379, 338);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"COSO - A Premium Cocktail Sort Engine";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		vector<int> data;
#pragma endregion
	private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				MessageBox::Show("1) You must enter any integer value you want.\n\n2) Click +COSO LIST to add new values to COSO Engine.\n\n3) Click RUN COSO to ignite the COSO Engine.\n\n4) You can always add new numbers even if the list is sorted and displayed.\n\n5) Click REFRESH to reset the system for a new start.",
					"Help me COSO!", MessageBoxButtons::OK,
					MessageBoxIcon::Asterisk);
			}
	private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				MessageBox::Show("COSO Engine is created by Zain Ul Mustafa, technical manual which includes algorithm and flowchart by Mustajab Siddiqui, Muhammad Ali, and Waqas Kureshi.",
					"About COSO Team", MessageBoxButtons::OK,
					MessageBoxIcon::Asterisk);
			}
	private: System::Void diagnosticsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				while(!data.empty()){
					data.pop_back();
				}
				label1->Text = "NO DATA!";
				textBox2->Text = "";
			 }
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				Application::Exit();
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
					label1->Text = "Sorted Data";
					int temp;
					bool check = true;
					while(check){
						check = false;
						for(unsigned int x=data.size()-1; x>0; x--){
							if(data[x-1]>data[x]){
								temp = data[x-1];
								data[x-1] = data[x];
								data[x] = temp;
								check = true;
							}
						}
		
						for(unsigned int y=1; y<data.size(); y++){
							if(data[y-1]>data[y]){
								temp = data[y-1];
								data[y-1] = data[y];
								data[y] = temp;
								check = true;
							}
						}
					}
					/*OUTPUT*/
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
	private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			}
	private: System::Void saveListToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK){
				System::IO::StreamReader ^ sr = gcnew
				System::IO::StreamReader(openFileDialog1->FileName);
				MessageBox::Show(sr->ReadToEnd());
				sr->Close();
			}	
		}
	private: System::Void addNewListFromFileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

			openFileDialog1->InitialDirectory = "c:\\";
			openFileDialog1->Filter = "txt files (*.txt)|*.txt";
			openFileDialog1->FilterIndex = 1;
			openFileDialog1->RestoreDirectory = true;

			if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK ){
					// do your stuff
			}
		}
};
}

