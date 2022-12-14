#pragma once

namespace CalculatorProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
		String^ operation;
		double resultValue = 0;
		bool isTrue = false;
	public:
		Calculator(void)
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
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ numberButton;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::TextBox^ result;


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
			this->numberButton = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->result = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// numberButton
			// 
			this->numberButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numberButton->Location = System::Drawing::Point(8, 145);
			this->numberButton->Name = L"numberButton";
			this->numberButton->Size = System::Drawing::Size(75, 59);
			this->numberButton->TabIndex = 0;
			this->numberButton->Text = L"7";
			this->numberButton->UseVisualStyleBackColor = true;
			this->numberButton->Click += gcnew System::EventHandler(this, &Calculator::button11_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(89, 145);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 59);
			this->button2->TabIndex = 1;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Calculator::button11_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(170, 145);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 59);
			this->button3->TabIndex = 2;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Calculator::button11_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(8, 210);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 59);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Calculator::button11_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(89, 210);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 59);
			this->button5->Size = System::Drawing::Size(75, 59);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Calculator::button11_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(170, 210);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 59);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Calculator::button11_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(8, 275);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 59);
			this->button7->TabIndex = 6;
			this->button7->Text = L"1";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Calculator::button11_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(8, 340);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 59);
			this->button8->TabIndex = 7;
			this->button8->Text = L"+/-";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Calculator::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(89, 275);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 59);
			this->button9->TabIndex = 7;
			this->button9->Text = L"2";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Calculator::button11_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(170, 275);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 59);
			this->button10->TabIndex = 8;
			this->button10->Text = L"3";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Calculator::button11_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(89, 340);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 59);
			this->button11->TabIndex = 9;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Calculator::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(170, 340);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 59);
			this->button12->TabIndex = 10;
			this->button12->Text = L".";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Calculator::button11_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(251, 197);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 59);
			this->button13->TabIndex = 11;
			this->button13->Text = L"-";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Calculator::button17_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(8, 80);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 59);
			this->button14->TabIndex = 11;
			this->button14->Text = L"CE";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Calculator::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(89, 80);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 59);
			this->button15->TabIndex = 12;
			this->button15->Text = L"C";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Calculator::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(170, 80);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 59);
			this->button16->TabIndex = 13;
			this->button16->Text = L"←";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Calculator::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(251, 67);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 59);
			this->button17->TabIndex = 14;
			this->button17->Text = L"/";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Calculator::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(251, 132);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 59);
			this->button18->TabIndex = 15;
			this->button18->Text = L"*";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Calculator::button17_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(251, 262);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 59);
			this->button19->TabIndex = 16;
			this->button19->Text = L"+";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Calculator::button17_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(251, 327);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 84);
			this->button20->TabIndex = 17;
			this->button20->Text = L"=";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Calculator::button20_Click);
			// 
			// result
			// 
			this->result->Location = System::Drawing::Point(8, 12);
			this->result->Multiline = true;
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(318, 49);
			this->result->TabIndex = 18;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(338, 415);
			this->Controls->Add(this->result);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->numberButton);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ temp = safe_cast<Button^>(sender);

		if (result->Text == "0" || isTrue)
		{
			result->Text = temp->Text;
			isTrue = false;
		}
		else
		{
			result->Text = result->Text + temp->Text;
		}
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		result->Clear();
	}


	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {

		resultValue = double::Parse(result->Text);
		isTrue = true;
		Button^ tempOp = safe_cast<Button^>(sender);
		operation = tempOp->Text;
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		if (operation == "+")
		{
			resultValue += double::Parse(result->Text);
		}
		else if (operation == "-")
		{
			resultValue -= double::Parse(result->Text);
		}
		else if (operation == "*")
		{
			resultValue = resultValue * double::Parse(result->Text);
		}
		else if (operation == "/")
		{
			resultValue = resultValue / double::Parse(result->Text);
		}
		result->Text = System::Convert::ToString(resultValue);
		resultValue = 0;
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		resultValue = 0;
		result->Clear();
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		if (result->Text->Length > 0)
		{
			result->Text = result->Text->Remove(result->Text->Length - 1);
		}
		else result->Text = "0";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (result->Text->Contains("-"))
		{
			result->Text = result->Text->Remove(0, 1);
		}
		else
		{
			result->Text = "-" + result->Text;
		}
	}
	};
}
