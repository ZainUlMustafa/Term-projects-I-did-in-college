#pragma once

namespace ElectricPower {

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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  versionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  formulaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::Label^  nameApp;
	private: System::Windows::Forms::TextBox^  textNameApp;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			this->nameApp = (gcnew System::Windows::Forms::Label());
			this->textNameApp = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->versionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->formulaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// nameApp
			// 
			this->nameApp->AutoSize = true;
			this->nameApp->Location = System::Drawing::Point(31, 95);
			this->nameApp->Name = L"nameApp";
			this->nameApp->Size = System::Drawing::Size(143, 13);
			this->nameApp->TabIndex = 11;
			this->nameApp->Text = L"Name of Appliance (optional)";
			// 
			// textNameApp
			// 
			this->textNameApp->Location = System::Drawing::Point(268, 88);
			this->textNameApp->Name = L"textNameApp";
			this->textNameApp->Size = System::Drawing::Size(136, 20);
			this->textNameApp->TabIndex = 12;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(304, 151);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ShortcutsEnabled = false;
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(304, 207);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(304, 263);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(304, 322);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 3;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(34, 458);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(370, 129);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 158);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Rate of unit ( kWh/currency ) *";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 214);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Power of Appliance ( Watts ) *";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(31, 270);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Quantity of Appliance *";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(31, 329);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(147, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Average Running Time ( hr ) *";
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(164, 392);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 41);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->versionToolStripMenuItem, 
				this->aboutToolStripMenuItem, this->formulaToolStripMenuItem, this->exitToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(444, 24);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// versionToolStripMenuItem
			// 
			this->versionToolStripMenuItem->Name = L"versionToolStripMenuItem";
			this->versionToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->versionToolStripMenuItem->Text = L"Version";
			this->versionToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::versionToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
			// 
			// formulaToolStripMenuItem
			// 
			this->formulaToolStripMenuItem->Name = L"formulaToolStripMenuItem";
			this->formulaToolStripMenuItem->Size = System::Drawing::Size(63, 20);
			this->formulaToolStripMenuItem->Text = L"Formula";
			this->formulaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::formulaToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(71, 65);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// Form1
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(444, 599);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textNameApp);
			this->Controls->Add(this->nameApp);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Fast Electric Power Cost Calculator";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		double rate_unit;
		int power_appliance;
		double avg_time;
		int number_appliance;
		double cost_day;
		double cost_month;
		double appliance_cost_per_day;

		int count;

#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 if(textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == ""){
					MessageBox::Show("Please check if you have NOT left the field blank!",
						"Error in your data!", MessageBoxButtons::OK,
						MessageBoxIcon::Warning);
				 }
				 else{
					 rate_unit = Convert::ToDouble(textBox1->Text);
					 power_appliance = Convert::ToInt32(textBox2->Text);
					 number_appliance = Convert::ToInt32(textBox3->Text);
					 avg_time = Convert::ToDouble(textBox4->Text);

					 appliance_cost_per_day = (rate_unit * power_appliance * avg_time * number_appliance)/1000;
					 cost_day = appliance_cost_per_day + cost_day;
					 cost_month = cost_day * 26;

					 if(textNameApp->Text == ""){
						 textNameApp->Text = "Appliance" + Convert::ToString(count);
					 }
					 richTextBox1->Text = "Total bill per month: " + Convert::ToString(cost_month) + "\n" + "Daily total: " + Convert::ToString(cost_day) + "\n\n" + textNameApp->Text + ":\n" + Convert::ToString(appliance_cost_per_day) + "\n\n______________________\n\n" + richTextBox1->Text;

					 count++;

					 textNameApp->Text = "";
					 // rate textBox1 remains unchanged so no need to clear it
					 textBox2->Text = "";
					 textBox3->Text = "";
					 textBox4->Text = "";
				 }
			 }
private: System::Void versionToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Version 1.2 \n\nLicense: Open-Source \n\nFind and Clone the Git Repo from: github.com/ZainUlMustafa/", "Version and License", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		 }
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("This software is developed by Zain Ul Mustafa based on the work at Zain Science Media. \n\nVisit Zain Science Media at http://bit.ly/2aKyqjH", "About", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		 }
private: System::Void formulaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("cost per day = (rate x power rating x average time x number of appliance)/1000 \n\n\ncost per month = cost per day x 30", "Formula", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(MessageBox::Show("You are exiting this app! Press Cancel to return back.",
					"Are you sure?", MessageBoxButtons::OKCancel,
					MessageBoxIcon::Warning)== System::Windows::Forms::DialogResult::OK){
						Application::Exit();
			 }
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

