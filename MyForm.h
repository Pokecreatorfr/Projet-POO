#pragma once
#include "MyForm1.h"
#include "Form_color_change.h"
#include "Hex_color.h"
#include "Liste_Adresse.h"


namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Configuration;

	/// <summary>
	/// Description r�sum�e de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: int^ var_interface = nullptr;
	public: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ Setting_button;
	private: System::Windows::Forms::Button^ commande_button;
	private: System::Windows::Forms::Button^ stats_button;
	private: System::Windows::Forms::Button^ client_button;
	protected:





	private: System::Windows::Forms::Button^ Personnel_button;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ PRENOMclient_tb;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ NOMclient_Tb;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ IDclient_tb;

	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ Clear_button;
	private: System::Windows::Forms::Button^ Chercher_button;
	private:




































	private: System::Windows::Forms::MaskedTextBox^ Client_Date_mTB;
	private: System::Windows::Forms::Button^ Add_button;



	private: System::Windows::Forms::DataGridView^ dataGridView1;






	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Button^ Modifier_Bouton;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID_c;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Prenom_c;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nom_c;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Date_n_c;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ville_c;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ CP_c;
private: System::Windows::Forms::Panel^ panel14;


















	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Setting_button = (gcnew System::Windows::Forms::Button());
			this->Personnel_button = (gcnew System::Windows::Forms::Button());
			this->commande_button = (gcnew System::Windows::Forms::Button());
			this->stats_button = (gcnew System::Windows::Forms::Button());
			this->client_button = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->Modifier_Bouton = (gcnew System::Windows::Forms::Button());
			this->Add_button = (gcnew System::Windows::Forms::Button());
			this->Clear_button = (gcnew System::Windows::Forms::Button());
			this->Chercher_button = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->Client_Date_mTB = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->PRENOMclient_tb = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->NOMclient_Tb = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->IDclient_tb = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID_c = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Prenom_c = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nom_c = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date_n_c = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ville_c = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CP_c = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel14->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->panel1->Controls->Add(this->Setting_button);
			this->panel1->Controls->Add(this->Personnel_button);
			this->panel1->Controls->Add(this->commande_button);
			this->panel1->Controls->Add(this->stats_button);
			this->panel1->Controls->Add(this->client_button);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->MinimumSize = System::Drawing::Size(96, 386);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(96, 510);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint_1);
			// 
			// Setting_button
			// 
			this->Setting_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Setting_button.BackgroundImage")));
			this->Setting_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Setting_button->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Setting_button->FlatAppearance->BorderSize = 0;
			this->Setting_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Setting_button->Location = System::Drawing::Point(0, 444);
			this->Setting_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Setting_button->Name = L"Setting_button";
			this->Setting_button->Size = System::Drawing::Size(96, 66);
			this->Setting_button->TabIndex = 1;
			this->Setting_button->UseVisualStyleBackColor = true;
			this->Setting_button->Click += gcnew System::EventHandler(this, &MyForm::Setting_click);
			// 
			// Personnel_button
			// 
			this->Personnel_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Personnel_button.BackgroundImage")));
			this->Personnel_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Personnel_button->Dock = System::Windows::Forms::DockStyle::Top;
			this->Personnel_button->FlatAppearance->BorderSize = 0;
			this->Personnel_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Personnel_button->Location = System::Drawing::Point(0, 198);
			this->Personnel_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Personnel_button->Name = L"Personnel_button";
			this->Personnel_button->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Personnel_button->Size = System::Drawing::Size(96, 66);
			this->Personnel_button->TabIndex = 1;
			this->Personnel_button->UseVisualStyleBackColor = true;
			this->Personnel_button->Click += gcnew System::EventHandler(this, &MyForm::Personnel_button_Click);
			// 
			// commande_button
			// 
			this->commande_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"commande_button.BackgroundImage")));
			this->commande_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->commande_button->Dock = System::Windows::Forms::DockStyle::Top;
			this->commande_button->FlatAppearance->BorderSize = 0;
			this->commande_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->commande_button->Location = System::Drawing::Point(0, 132);
			this->commande_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->commande_button->Name = L"commande_button";
			this->commande_button->Size = System::Drawing::Size(96, 66);
			this->commande_button->TabIndex = 1;
			this->commande_button->UseVisualStyleBackColor = true;
			this->commande_button->Click += gcnew System::EventHandler(this, &MyForm::commande_button_Click);
			// 
			// stats_button
			// 
			this->stats_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"stats_button.BackgroundImage")));
			this->stats_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->stats_button->Dock = System::Windows::Forms::DockStyle::Top;
			this->stats_button->FlatAppearance->BorderSize = 0;
			this->stats_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->stats_button->Location = System::Drawing::Point(0, 66);
			this->stats_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->stats_button->Name = L"stats_button";
			this->stats_button->Size = System::Drawing::Size(96, 66);
			this->stats_button->TabIndex = 1;
			this->stats_button->UseVisualStyleBackColor = true;
			this->stats_button->Click += gcnew System::EventHandler(this, &MyForm::stats_button_Click);
			// 
			// client_button
			// 
			this->client_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"client_button.BackgroundImage")));
			this->client_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->client_button->Dock = System::Windows::Forms::DockStyle::Top;
			this->client_button->FlatAppearance->BorderSize = 0;
			this->client_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->client_button->Location = System::Drawing::Point(0, 0);
			this->client_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->client_button->Name = L"client_button";
			this->client_button->Size = System::Drawing::Size(96, 66);
			this->client_button->TabIndex = 0;
			this->client_button->UseVisualStyleBackColor = true;
			this->client_button->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_3);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->panel10);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(96, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(679, 510);
			this->panel2->TabIndex = 1;
			this->panel2->Visible = false;
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->panel13);
			this->panel10->Controls->Add(this->panel12);
			this->panel10->Controls->Add(this->panel11);
			this->panel10->Controls->Add(this->label6);
			this->panel10->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel10->Location = System::Drawing::Point(273, 0);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(262, 510);
			this->panel10->TabIndex = 1;
			// 
			// panel13
			// 
			this->panel13->Controls->Add(this->label9);
			this->panel13->Controls->Add(this->textBox3);
			this->panel13->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel13->Location = System::Drawing::Point(0, 139);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(262, 58);
			this->panel13->TabIndex = 3;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Dock = System::Windows::Forms::DockStyle::Left;
			this->label9->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->Location = System::Drawing::Point(0, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(108, 28);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Adresse";
			// 
			// textBox3
			// 
			this->textBox3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->textBox3->Location = System::Drawing::Point(0, 36);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(262, 22);
			this->textBox3->TabIndex = 0;
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->label8);
			this->panel12->Controls->Add(this->textBox2);
			this->panel12->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel12->Location = System::Drawing::Point(0, 81);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(262, 58);
			this->panel12->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Dock = System::Windows::Forms::DockStyle::Left;
			this->label8->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Location = System::Drawing::Point(0, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(155, 28);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Code Postal";
			// 
			// textBox2
			// 
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->textBox2->Location = System::Drawing::Point(0, 36);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(262, 22);
			this->textBox2->TabIndex = 0;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->label7);
			this->panel11->Controls->Add(this->textBox1);
			this->panel11->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel11->Location = System::Drawing::Point(0, 23);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(262, 58);
			this->panel11->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Dock = System::Windows::Forms::DockStyle::Left;
			this->label7->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(0, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 28);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Ville";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// textBox1
			// 
			this->textBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->textBox1->Location = System::Drawing::Point(0, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(262, 22);
			this->textBox1->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Dock = System::Windows::Forms::DockStyle::Top;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(0, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 23);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Adresse";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->panel9);
			this->panel3->Controls->Add(this->panel8);
			this->panel3->Controls->Add(this->panel7);
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(273, 510);
			this->panel3->TabIndex = 0;
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->maskedTextBox1);
			this->panel9->Controls->Add(this->label5);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel9->Location = System::Drawing::Point(0, 228);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(273, 54);
			this->panel9->TabIndex = 4;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(0, 29);
			this->maskedTextBox1->Mask = L"00/00/0000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(339, 22);
			this->maskedTextBox1->TabIndex = 2;
			this->maskedTextBox1->ValidatingType = System::DateTime::typeid;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Dock = System::Windows::Forms::DockStyle::Left;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(0, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(197, 28);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Date Embauche";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->Modifier_Bouton);
			this->panel8->Controls->Add(this->Add_button);
			this->panel8->Controls->Add(this->Clear_button);
			this->panel8->Controls->Add(this->Chercher_button);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel8->Location = System::Drawing::Point(0, 434);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(273, 76);
			this->panel8->TabIndex = 4;
			// 
			// Modifier_Bouton
			// 
			this->Modifier_Bouton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Modifier_Bouton.BackgroundImage")));
			this->Modifier_Bouton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Modifier_Bouton->Dock = System::Windows::Forms::DockStyle::Left;
			this->Modifier_Bouton->FlatAppearance->BorderSize = 0;
			this->Modifier_Bouton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Modifier_Bouton->Location = System::Drawing::Point(197, 0);
			this->Modifier_Bouton->Name = L"Modifier_Bouton";
			this->Modifier_Bouton->Size = System::Drawing::Size(68, 76);
			this->Modifier_Bouton->TabIndex = 5;
			this->Modifier_Bouton->UseVisualStyleBackColor = true;
			// 
			// Add_button
			// 
			this->Add_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add_button.BackgroundImage")));
			this->Add_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Add_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->Add_button->FlatAppearance->BorderSize = 0;
			this->Add_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Add_button->Location = System::Drawing::Point(127, 0);
			this->Add_button->Name = L"Add_button";
			this->Add_button->Size = System::Drawing::Size(70, 76);
			this->Add_button->TabIndex = 2;
			this->Add_button->UseVisualStyleBackColor = true;
			this->Add_button->Click += gcnew System::EventHandler(this, &MyForm::Add_button_Click);
			// 
			// Clear_button
			// 
			this->Clear_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Clear_button.BackgroundImage")));
			this->Clear_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Clear_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->Clear_button->FlatAppearance->BorderSize = 0;
			this->Clear_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Clear_button->Location = System::Drawing::Point(67, 0);
			this->Clear_button->Name = L"Clear_button";
			this->Clear_button->Size = System::Drawing::Size(60, 76);
			this->Clear_button->TabIndex = 1;
			this->Clear_button->UseVisualStyleBackColor = true;
			this->Clear_button->Click += gcnew System::EventHandler(this, &MyForm::Clear_button_Click);
			// 
			// Chercher_button
			// 
			this->Chercher_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Chercher_button.BackgroundImage")));
			this->Chercher_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Chercher_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->Chercher_button->FlatAppearance->BorderSize = 0;
			this->Chercher_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Chercher_button->Location = System::Drawing::Point(0, 0);
			this->Chercher_button->Name = L"Chercher_button";
			this->Chercher_button->Size = System::Drawing::Size(67, 76);
			this->Chercher_button->TabIndex = 0;
			this->Chercher_button->UseVisualStyleBackColor = true;
			this->Chercher_button->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_4);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->Client_Date_mTB);
			this->panel7->Controls->Add(this->label4);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel7->Location = System::Drawing::Point(0, 174);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(273, 54);
			this->panel7->TabIndex = 3;
			// 
			// Client_Date_mTB
			// 
			this->Client_Date_mTB->Location = System::Drawing::Point(0, 29);
			this->Client_Date_mTB->Mask = L"00/00/0000";
			this->Client_Date_mTB->Name = L"Client_Date_mTB";
			this->Client_Date_mTB->Size = System::Drawing::Size(339, 22);
			this->Client_Date_mTB->TabIndex = 2;
			this->Client_Date_mTB->ValidatingType = System::DateTime::typeid;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Left;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(0, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(232, 28);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Date de naissance";
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label3);
			this->panel6->Controls->Add(this->PRENOMclient_tb);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(0, 116);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(273, 58);
			this->panel6->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Left;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 28);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Pr�nom";
			// 
			// PRENOMclient_tb
			// 
			this->PRENOMclient_tb->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->PRENOMclient_tb->Location = System::Drawing::Point(0, 36);
			this->PRENOMclient_tb->Name = L"PRENOMclient_tb";
			this->PRENOMclient_tb->Size = System::Drawing::Size(273, 22);
			this->PRENOMclient_tb->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->NOMclient_Tb);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(0, 58);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(273, 58);
			this->panel5->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Left;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nom";
			// 
			// NOMclient_Tb
			// 
			this->NOMclient_Tb->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->NOMclient_Tb->Location = System::Drawing::Point(0, 36);
			this->NOMclient_Tb->Name = L"NOMclient_Tb";
			this->NOMclient_Tb->Size = System::Drawing::Size(273, 22);
			this->NOMclient_Tb->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->IDclient_tb);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(273, 58);
			this->panel4->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Left;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 28);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ID";
			// 
			// IDclient_tb
			// 
			this->IDclient_tb->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->IDclient_tb->Location = System::Drawing::Point(0, 36);
			this->IDclient_tb->Name = L"IDclient_tb";
			this->IDclient_tb->Size = System::Drawing::Size(273, 22);
			this->IDclient_tb->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->ID_c, this->Prenom_c,
					this->Nom_c, this->Date_n_c, this->Ville_c, this->CP_c
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(608, 256);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// ID_c
			// 
			this->ID_c->HeaderText = L"ID";
			this->ID_c->MinimumWidth = 6;
			this->ID_c->Name = L"ID_c";
			// 
			// Prenom_c
			// 
			this->Prenom_c->HeaderText = L"Prenom";
			this->Prenom_c->MinimumWidth = 6;
			this->Prenom_c->Name = L"Prenom_c";
			// 
			// Nom_c
			// 
			this->Nom_c->HeaderText = L"Nom";
			this->Nom_c->MinimumWidth = 6;
			this->Nom_c->Name = L"Nom_c";
			// 
			// Date_n_c
			// 
			this->Date_n_c->HeaderText = L"Date Naissance";
			this->Date_n_c->MinimumWidth = 6;
			this->Date_n_c->Name = L"Date_n_c";
			// 
			// Ville_c
			// 
			this->Ville_c->HeaderText = L"Ville";
			this->Ville_c->MinimumWidth = 6;
			this->Ville_c->Name = L"Ville_c";
			// 
			// CP_c
			// 
			this->CP_c->HeaderText = L"Code Postal";
			this->CP_c->MinimumWidth = 6;
			this->CP_c->Name = L"CP_c";
			// 
			// panel14
			// 
			this->panel14->Controls->Add(this->dataGridView1);
			this->panel14->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel14->Location = System::Drawing::Point(1316, 0);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(608, 510);
			this->panel14->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1924, 510);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel14);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MinimumSize = System::Drawing::Size(18, 461);
			this->Name = L"MyForm";
			this->Text = L"Client Manager 2022";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel14->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		int color_theme = Convert::ToInt32(System::Configuration::ConfigurationManager::AppSettings["color_theme"]);
		Form_color_change::Change_color_of_Form_hex(this, color_list_theme[color_theme][0]);
		Form_color_change::Change_color_of_pannel_hex(this->panel1, color_list_theme[color_theme][1]);
		Liste_Adresse::return_city("86350"); // petit truc pour charger la liste des villes au chargement de l'app
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_3(System::Object^ sender, System::EventArgs^ e) {
	this->panel2->Visible=true;
	this->panel9->Visible = false;
	this->panel10->Visible = true;
	this->panel14->Visible = true;
	var_interface = 1;
}
private: System::Void panel2_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Setting_click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ setting = gcnew MyForm1;
	setting->Show();
}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click_4(System::Object^ sender, System::EventArgs^ e) {
	if (var_interface == 1) {
		
	}
	else if (var_interface == 4) {
		
	}
}
private: System::Void Personnel_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel2->Visible = true;
	this->panel9->Visible = true;
	this->panel10->Visible = true;
	this->panel14->Visible = true;
	var_interface = 4;
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void panel19_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void stats_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel2->Visible = false;
	this->panel9->Visible = false;
	this->panel10->Visible = false;
	this->panel14->Visible = false;
	var_interface = 2;
}
private: System::Void commande_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel2->Visible = false;
	this->panel9->Visible = false;
	this->panel10->Visible = false;
	this->panel14->Visible = false;
	var_interface = 3;
}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Clear_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (var_interface == 1) {

	}
	else if (var_interface == 4) {

	}
}
private: System::Void Add_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (var_interface == 1) {

	}
	else if (var_interface == 4) {

	}
}
private: System::Void Modifier_Bouton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (var_interface == 1) {

	}
	else if (var_interface == 4) {

	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Liste_Adresse::is_postal_code(this->textBox2->Text))
	{
		auto source_adresse = gcnew AutoCompleteStringCollection();
		source_adresse->AddRange(Liste_Adresse::return_city(this->textBox2->Text));
		this->textBox1->AutoCompleteCustomSource = source_adresse;
	}
}
};
}
