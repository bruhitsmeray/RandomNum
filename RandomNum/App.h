#include <cstdlib>
#include <ctime>

#ifdef _WIN64
	#define WIN64_LEAN_AND_MEAN
	#include "windows.h"
#endif

#pragma once

namespace RandomNum {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int min;
	int max;
	int amount;
	int result;

	/// <summary>
	/// Summary for App
	/// </summary>
	public ref class App : public System::Windows::Forms::Form
	{
	public:
		App(void)
		{
			InitializeComponent();
			min = 1;
			max = 10;
			amount = 1;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~App()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox2;


	private: System::Windows::Forms::GroupBox^ groupBox3;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;





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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(150, 50);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Minimum";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(7, 20);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(137, 20);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &App::numericUpDown1_ValueChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->numericUpDown2);
			this->groupBox2->Location = System::Drawing::Point(182, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(150, 50);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Maximum";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(6, 20);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(138, 20);
			this->numericUpDown2->TabIndex = 0;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &App::numericUpDown2_ValueChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->numericUpDown3);
			this->groupBox3->Location = System::Drawing::Point(12, 68);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(320, 50);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Variations";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(7, 19);
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(307, 20);
			this->numericUpDown3->TabIndex = 0;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &App::numericUpDown3_ValueChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 214);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(320, 25);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Generate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &App::button1_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->listBox1);
			this->groupBox4->Location = System::Drawing::Point(12, 124);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(320, 84);
			this->groupBox4->TabIndex = 4;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Results";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(6, 20);
			this->listBox1->Name = L"listBox1";
			this->listBox1->ScrollAlwaysVisible = true;
			this->listBox1->Size = System::Drawing::Size(308, 56);
			this->listBox1->TabIndex = 0;
			// 
			// App
			// 
			this->AccessibleDescription = L"A Windows app that randomly generates numbers in a given range.";
			this->AccessibleName = L"Random Number Generator";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 251);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"App";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Random Number Generator";
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			min = Convert::ToInt32(numericUpDown1->Value);
		}

		private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			max = Convert::ToInt32(numericUpDown2->Value);
		}

		private: System::Void numericUpDown3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			amount = Convert::ToInt32(numericUpDown3->Value);
		}

		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			#ifdef _WIN64
				int seed = GetTickCount64(); 
			#elif __linux__
				int seed = time(NULL);
			#endif

			
			srand(seed);
			if (App::listBox1->Items->Count >= 1) {
				App::listBox1->Items->Clear();
			}
			for (int i = 0; i < amount; i++) {
				result = rand() % (max - min + 1) + min;
				App::listBox1->Items->Add(result.ToString());
			}
		}
	};
}
