#pragma once


namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Configuration;

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

	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ MDP_Tbox;
	private: System::Windows::Forms::Button^ Save_btn;

	private: System::Windows::Forms::TextBox^ BDD_Tbox;
	private: System::Windows::Forms::TextBox^ ID_tb;
	private: System::Windows::Forms::ComboBox^ comboBox1;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->MDP_Tbox = (gcnew System::Windows::Forms::TextBox());
			this->Save_btn = (gcnew System::Windows::Forms::Button());
			this->BDD_Tbox = (gcnew System::Windows::Forms::TextBox());
			this->ID_tb = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
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
			// 
			// Save_btn
			// 
			this->Save_btn->Location = System::Drawing::Point(265, 385);
			this->Save_btn->Name = L"Save_btn";
			this->Save_btn->Size = System::Drawing::Size(75, 23);
			this->Save_btn->TabIndex = 7;
			this->Save_btn->Text = L"Save";
			this->Save_btn->UseVisualStyleBackColor = true;
			this->Save_btn->Click += gcnew System::EventHandler(this, &MyForm1::Save_btn_Click);
			// 
			// BDD_Tbox
			// 
			this->BDD_Tbox->Location = System::Drawing::Point(52, 129);
			this->BDD_Tbox->Name = L"BDD_Tbox";
			this->BDD_Tbox->Size = System::Drawing::Size(100, 22);
			this->BDD_Tbox->TabIndex = 0;
			this->BDD_Tbox->TextChanged += gcnew System::EventHandler(this, &MyForm1::BDDtBox_TextChanged);
			// 
			// ID_tb
			// 
			this->ID_tb->Location = System::Drawing::Point(52, 227);
			this->ID_tb->Name = L"ID_tb";
			this->ID_tb->Size = System::Drawing::Size(100, 22);
			this->ID_tb->TabIndex = 8;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Violet Dark", L"Blue Lagon", L"Cream", L"Raimbow Pastel",
					L"Blue Pastel"
			});
			this->comboBox1->Location = System::Drawing::Point(245, 332);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(147, 24);
			this->comboBox1->TabIndex = 9;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(437, 462);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->ID_tb);
			this->Controls->Add(this->Save_btn);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->MDP_Tbox);
			this->Controls->Add(this->label3);
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
		this->BDD_Tbox->Text = System::Configuration::ConfigurationManager::AppSettings["nom_bdd"];
		this->ID_tb->Text = System::Configuration::ConfigurationManager::AppSettings["id_bdd"];
		this->MDP_Tbox->Text = System::Configuration::ConfigurationManager::AppSettings["mdp_bdd"];
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BDDtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Save_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Configuration::Configuration^ config = System::Configuration::ConfigurationManager::OpenExeConfiguration(ConfigurationUserLevel::None);
	config->AppSettings->Settings->Remove("nom_bdd");
	config->AppSettings->Settings->Add("nom_bdd", BDD_Tbox->Text);
	config->AppSettings->Settings->Remove("id_bdd");
	config->AppSettings->Settings->Add("id_bdd", ID_tb->Text);
	config->AppSettings->Settings->Remove("mdp_bdd");
	config->AppSettings->Settings->Add("mdp_bdd", MDP_Tbox->Text);
	config->Save(ConfigurationSaveMode::Modified);
	if (comboBox1->Text == "Violet Dark")
	{
		config->AppSettings->Settings->Remove("color_theme");
		config->AppSettings->Settings->Add("color_theme", "0");
		config->Save(ConfigurationSaveMode::Modified);
	}
	else if (comboBox1->Text == "Blue Lagon")
	{
		config->AppSettings->Settings->Remove("color_theme");
		config->AppSettings->Settings->Add("color_theme", "1");
		config->Save(ConfigurationSaveMode::Modified);
	}
	else if (comboBox1->Text == "Cream")
	{
		config->AppSettings->Settings->Remove("color_theme");
		config->AppSettings->Settings->Add("color_theme", "2");
		config->Save(ConfigurationSaveMode::Modified);
	}
	else if (comboBox1->Text == "Raimbow Pastel")
	{
		config->AppSettings->Settings->Remove("color_theme");
		config->AppSettings->Settings->Add("color_theme", "3");
		config->Save(ConfigurationSaveMode::Modified);
	}
	else if (comboBox1->Text == "Blue Pastel")
	{
		config->AppSettings->Settings->Remove("color_theme");
		config->AppSettings->Settings->Add("color_theme", "4");
		config->Save(ConfigurationSaveMode::Modified);
	}
	ConfigurationManager::RefreshSection("appSettings");
	this->Close();
}
};
}
