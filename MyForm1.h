#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ BDD_Tbox;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ ID_Tbox;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ MDP_Tbox;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->BDD_Tbox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ID_Tbox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->MDP_Tbox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// BDD_Tbox
			// 
			this->BDD_Tbox->Location = System::Drawing::Point(52, 129);
			this->BDD_Tbox->Name = L"BDD_Tbox";
			this->BDD_Tbox->Size = System::Drawing::Size(100, 22);
			this->BDD_Tbox->TabIndex = 0;
			this->BDD_Tbox->Text = L"asda";
<<<<<<< Updated upstream
			this->BDD_Tbox->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
=======
			this->BDD_Tbox->TextChanged += gcnew System::EventHandler(this, &MyForm1::BDDtBox_TextChanged);
>>>>>>> Stashed changes
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 38);
			this->label1->TabIndex = 1;
			this->label1->Text = L"SETTING";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(61, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nom BDD";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(61, 188);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"ID";
			// 
			// ID_Tbox
			// 
			this->ID_Tbox->Location = System::Drawing::Point(52, 224);
			this->ID_Tbox->Name = L"ID_Tbox";
			this->ID_Tbox->Size = System::Drawing::Size(100, 22);
			this->ID_Tbox->TabIndex = 3;
<<<<<<< Updated upstream
			this->ID_Tbox->Text = L"ze";
=======
			this->ID_Tbox->Text = L"a";
>>>>>>> Stashed changes
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(61, 304);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"MDP";
			// 
			// MDP_Tbox
			// 
			this->MDP_Tbox->Location = System::Drawing::Point(52, 334);
			this->MDP_Tbox->Name = L"MDP_Tbox";
			this->MDP_Tbox->Size = System::Drawing::Size(100, 22);
			this->MDP_Tbox->TabIndex = 5;
<<<<<<< Updated upstream
			this->MDP_Tbox->Text = L"aaa";
=======
			this->MDP_Tbox->Text = L"a";
>>>>>>> Stashed changes
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(437, 462);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->MDP_Tbox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->ID_Tbox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BDD_Tbox);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BDDtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
