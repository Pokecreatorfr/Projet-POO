#pragma once
#include "MyForm1.h"
#include "Form_color_change.h"
#include "Hex_color.h"
#include "Liste_Adresse.h"
#include "Personnel.h"
#include "DatabaseAccess.h"
#include "Dateformat.h"
#include "Client.h"
#include "Commande.h"


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
	DataSet^ dgv;
	private: int error = 0;
	private: Composants::DatabaseAccess^ base_dd = gcnew Composants::DatabaseAccess(System::Configuration::ConfigurationManager::AppSettings["Data Source"], System::Configuration::ConfigurationManager::AppSettings["Initial Catalog"], System::Configuration::ConfigurationManager::AppSettings["User ID"], System::Configuration::ConfigurationManager::AppSettings["Password"]);
	private: int var_interface = 0;
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

private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Button^ Modifier_Bouton;






private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Panel^ panel15;

private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
private: System::Windows::Forms::Panel^ panel16;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::CheckBox^ checkBox1;
private: System::Windows::Forms::Panel^ panel20;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Panel^ panel19;
private: System::Windows::Forms::MaskedTextBox^ maskedTextBox3;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Panel^ panel18;
private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Panel^ panel17;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TextBox^ textBox5;






private: System::ComponentModel::IContainer^ components;


















	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
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
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
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
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel20->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
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
			this->panel1->Size = System::Drawing::Size(96, 1055);
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
			this->Setting_button->Location = System::Drawing::Point(0, 989);
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
			this->panel2->Size = System::Drawing::Size(679, 1055);
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
			this->panel10->Location = System::Drawing::Point(349, 0);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(262, 1055);
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
			this->textBox1->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
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
			this->panel3->Controls->Add(this->panel20);
			this->panel3->Controls->Add(this->panel19);
			this->panel3->Controls->Add(this->panel18);
			this->panel3->Controls->Add(this->panel17);
			this->panel3->Controls->Add(this->panel16);
			this->panel3->Controls->Add(this->panel15);
			this->panel3->Controls->Add(this->panel9);
			this->panel3->Controls->Add(this->panel8);
			this->panel3->Controls->Add(this->panel7);
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(349, 1055);
			this->panel3->TabIndex = 0;
			// 
			// panel20
			// 
			this->panel20->Controls->Add(this->label15);
			this->panel20->Controls->Add(this->textBox6);
			this->panel20->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel20->Location = System::Drawing::Point(0, 560);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(349, 58);
			this->panel20->TabIndex = 10;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Dock = System::Windows::Forms::DockStyle::Left;
			this->label15->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label15->Location = System::Drawing::Point(0, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(118, 28);
			this->label15->TabIndex = 1;
			this->label15->Text = L"ID Client";
			// 
			// textBox6
			// 
			this->textBox6->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->textBox6->Location = System::Drawing::Point(0, 36);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(349, 22);
			this->textBox6->TabIndex = 0;
			// 
			// panel19
			// 
			this->panel19->Controls->Add(this->maskedTextBox3);
			this->panel19->Controls->Add(this->label14);
			this->panel19->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel19->Location = System::Drawing::Point(0, 506);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(349, 54);
			this->panel19->TabIndex = 9;
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->Location = System::Drawing::Point(0, 29);
			this->maskedTextBox3->Mask = L"00/00/0000";
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(346, 22);
			this->maskedTextBox3->TabIndex = 2;
			this->maskedTextBox3->ValidatingType = System::DateTime::typeid;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Dock = System::Windows::Forms::DockStyle::Left;
			this->label14->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label14->Location = System::Drawing::Point(0, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(185, 28);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Date Livraison";
			// 
			// panel18
			// 
			this->panel18->Controls->Add(this->maskedTextBox2);
			this->panel18->Controls->Add(this->label13);
			this->panel18->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel18->Location = System::Drawing::Point(0, 452);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(349, 54);
			this->panel18->TabIndex = 8;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(0, 29);
			this->maskedTextBox2->Mask = L"00/00/0000";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(346, 22);
			this->maskedTextBox2->TabIndex = 2;
			this->maskedTextBox2->ValidatingType = System::DateTime::typeid;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Dock = System::Windows::Forms::DockStyle::Left;
			this->label13->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label13->Location = System::Drawing::Point(0, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(210, 28);
			this->label13->TabIndex = 1;
			this->label13->Text = L"Date Commande";
			// 
			// panel17
			// 
			this->panel17->Controls->Add(this->label12);
			this->panel17->Controls->Add(this->textBox5);
			this->panel17->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel17->Location = System::Drawing::Point(0, 394);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(349, 58);
			this->panel17->TabIndex = 7;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Dock = System::Windows::Forms::DockStyle::Left;
			this->label12->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label12->Location = System::Drawing::Point(0, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(131, 28);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Reference";
			// 
			// textBox5
			// 
			this->textBox5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->textBox5->Location = System::Drawing::Point(0, 36);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(349, 22);
			this->textBox5->TabIndex = 0;
			// 
			// panel16
			// 
			this->panel16->Controls->Add(this->label11);
			this->panel16->Controls->Add(this->textBox4);
			this->panel16->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel16->Location = System::Drawing::Point(0, 336);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(349, 58);
			this->panel16->TabIndex = 6;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Dock = System::Windows::Forms::DockStyle::Left;
			this->label11->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label11->Location = System::Drawing::Point(0, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(78, 28);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Poste";
			// 
			// textBox4
			// 
			this->textBox4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->textBox4->Location = System::Drawing::Point(0, 36);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(349, 22);
			this->textBox4->TabIndex = 0;
			// 
			// panel15
			// 
			this->panel15->Controls->Add(this->checkBox1);
			this->panel15->Controls->Add(this->numericUpDown1);
			this->panel15->Controls->Add(this->label10);
			this->panel15->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel15->Location = System::Drawing::Point(0, 282);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(349, 54);
			this->panel15->TabIndex = 5;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->checkBox1->Location = System::Drawing::Point(280, 8);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(63, 20);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->Text = L"NULL";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->numericUpDown1->Location = System::Drawing::Point(0, 31);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(349, 22);
			this->numericUpDown1->TabIndex = 2;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Dock = System::Windows::Forms::DockStyle::Left;
			this->label10->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->Location = System::Drawing::Point(0, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(229, 28);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Supp hierarchique";
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->maskedTextBox1);
			this->panel9->Controls->Add(this->label5);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel9->Location = System::Drawing::Point(0, 228);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(349, 54);
			this->panel9->TabIndex = 4;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(0, 29);
			this->maskedTextBox1->Mask = L"00/00/0000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(346, 22);
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
			this->panel8->Location = System::Drawing::Point(0, 979);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(349, 76);
			this->panel8->TabIndex = 4;
			// 
			// Modifier_Bouton
			// 
			this->Modifier_Bouton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Modifier_Bouton.BackgroundImage")));
			this->Modifier_Bouton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Modifier_Bouton->Dock = System::Windows::Forms::DockStyle::Left;
			this->Modifier_Bouton->FlatAppearance->BorderSize = 0;
			this->Modifier_Bouton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Modifier_Bouton->Location = System::Drawing::Point(241, 0);
			this->Modifier_Bouton->Name = L"Modifier_Bouton";
			this->Modifier_Bouton->Size = System::Drawing::Size(105, 76);
			this->Modifier_Bouton->TabIndex = 5;
			this->Modifier_Bouton->UseVisualStyleBackColor = true;
			this->Modifier_Bouton->Click += gcnew System::EventHandler(this, &MyForm::Modifier_Bouton_Click_1);
			// 
			// Add_button
			// 
			this->Add_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add_button.BackgroundImage")));
			this->Add_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Add_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->Add_button->FlatAppearance->BorderSize = 0;
			this->Add_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Add_button->Location = System::Drawing::Point(160, 0);
			this->Add_button->Name = L"Add_button";
			this->Add_button->Size = System::Drawing::Size(81, 76);
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
			this->Clear_button->Location = System::Drawing::Point(78, 0);
			this->Clear_button->Name = L"Clear_button";
			this->Clear_button->Size = System::Drawing::Size(82, 76);
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
			this->Chercher_button->Size = System::Drawing::Size(78, 76);
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
			this->panel7->Size = System::Drawing::Size(349, 54);
			this->panel7->TabIndex = 3;
			// 
			// Client_Date_mTB
			// 
			this->Client_Date_mTB->Location = System::Drawing::Point(0, 29);
			this->Client_Date_mTB->Mask = L"00/00/0000";
			this->Client_Date_mTB->Name = L"Client_Date_mTB";
			this->Client_Date_mTB->Size = System::Drawing::Size(349, 22);
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
			this->panel6->Size = System::Drawing::Size(349, 58);
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
			this->label3->Text = L"Prénom";
			// 
			// PRENOMclient_tb
			// 
			this->PRENOMclient_tb->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->PRENOMclient_tb->Location = System::Drawing::Point(0, 36);
			this->PRENOMclient_tb->Name = L"PRENOMclient_tb";
			this->PRENOMclient_tb->Size = System::Drawing::Size(349, 22);
			this->PRENOMclient_tb->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->NOMclient_Tb);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(0, 58);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(349, 58);
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
			this->NOMclient_Tb->Size = System::Drawing::Size(349, 22);
			this->NOMclient_Tb->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->IDclient_tb);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(349, 58);
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
			this->IDclient_tb->Size = System::Drawing::Size(349, 22);
			this->IDclient_tb->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopLeft;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->Size = System::Drawing::Size(608, 1055);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// panel14
			// 
			this->panel14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel14->Controls->Add(this->dataGridView1);
			this->panel14->Location = System::Drawing::Point(1316, 0);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(608, 1055);
			this->panel14->TabIndex = 6;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1924, 1055);
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
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
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
	this->panel5->Visible = true;
	this->panel6->Visible = true;
	this->panel7->Visible = true;
	this->panel9->Visible = false;
	this->panel10->Visible = true;
	this->panel14->Visible = true;
	this->panel15->Visible = false;
	this->panel16->Visible = false;
	this->panel17->Visible = false;
	this->panel18->Visible = false;
	this->panel19->Visible = false;
	this->panel20->Visible = false;
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
	if (var_interface == 1) 
	{
		dgv = Client::Search(base_dd, this->IDclient_tb->Text, this->NOMclient_Tb->Text, this->PRENOMclient_tb->Text, Dateformat::StringDatetoSQL(this->Client_Date_mTB->Text));
		this->dataGridView1->DataSource = dgv;
		this->dataGridView1->DataMember = "tab";
		this->dataGridView1->AutoResizeColumns();
		this->dataGridView1->Refresh();
	}
	else if (var_interface == 3)
	{
		dgv = Commande::Search(base_dd, this->IDclient_tb->Text, Dateformat::StringDatetoSQL(this->maskedTextBox2->Text), Dateformat::StringDatetoSQL(this->maskedTextBox3->Text) , this->textBox6->Text , this->textBox5->Text);
		this->dataGridView1->DataSource = dgv;
		this->dataGridView1->DataMember = "tab";
		this->dataGridView1->AutoResizeColumns();
		this->dataGridView1->Refresh();
	}
	else if (var_interface == 4)
	{
		
		if (checkBox1->Checked)
		{
			dgv = Personnel::Search(base_dd, this->IDclient_tb->Text, this->NOMclient_Tb->Text, this->PRENOMclient_tb->Text, Dateformat::StringDatetoSQL(this->Client_Date_mTB->Text), Dateformat::StringDatetoSQL(this->maskedTextBox1->Text), "NULL", this->textBox4->Text);

		}
		else
		{
			dgv = Personnel::Search(base_dd, this->IDclient_tb->Text, this->NOMclient_Tb->Text, this->PRENOMclient_tb->Text, Dateformat::StringDatetoSQL(this->Client_Date_mTB->Text), Dateformat::StringDatetoSQL(this->maskedTextBox1->Text), this->numericUpDown1->ToString(), this->textBox4->Text);
		}
		this->dataGridView1->DataSource = dgv;
		this->dataGridView1->DataMember = "tab";
		this->dataGridView1->AutoResizeColumns();
		this->dataGridView1->Refresh();
		
	}
}
private: System::Void Personnel_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel2->Visible = true;
	this->panel5->Visible = true;
	this->panel6->Visible = true;
	this->panel7->Visible = true;
	this->panel9->Visible = true;
	this->panel10->Visible = true;
	this->panel14->Visible = true;
	this->panel15->Visible = true;
	this->panel16->Visible = true;
	this->panel17->Visible = false;
	this->panel18->Visible = false;
	this->panel19->Visible = false;
	this->panel20->Visible = false;
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
	this->panel15->Visible = false;
	this->panel16->Visible = false;
	this->panel17->Visible = false;
	this->panel18->Visible = false;
	this->panel19->Visible = false;
	this->panel20->Visible = false;
	var_interface = 2;
}
private: System::Void commande_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel2->Visible = true;
	this->panel5->Visible = false;
	this->panel6->Visible = false;
	this->panel7->Visible = false;
	this->panel9->Visible = false;
	this->panel10->Visible = true;
	this->panel14->Visible = true;
	this->panel15->Visible = false;
	this->panel16->Visible = false;
	this->panel17->Visible = true;
	this->panel18->Visible = true;
	this->panel19->Visible = true;
	this->panel20->Visible = true;
	if (var_interface == 1)
	{
		this->textBox6->Text = this->IDclient_tb->Text;
		this->IDclient_tb->Text = "";
	}
	var_interface = 3;
}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int a = e->RowIndex;
	if (var_interface == 1)
	{
		if (a >= 0)
		{
			this->IDclient_tb->Text = this->dataGridView1->Rows[a]->Cells[0]->Value->ToString();
			this->NOMclient_Tb->Text = this->dataGridView1->Rows[a]->Cells[3]->Value->ToString();
			this->PRENOMclient_tb->Text = this->dataGridView1->Rows[a]->Cells[4]->Value->ToString();
			this->Client_Date_mTB->Text = this->dataGridView1->Rows[a]->Cells[5]->Value->ToString();
		}
	}
	if (var_interface == 4)
	{
		if (a >= 0)
		{
			this->IDclient_tb->Text = this->dataGridView1->Rows[a]->Cells[0]->Value->ToString();
			this->NOMclient_Tb->Text = this->dataGridView1->Rows[a]->Cells[6]->Value->ToString();
			this->PRENOMclient_tb->Text = this->dataGridView1->Rows[a]->Cells[7]->Value->ToString();
			this->Client_Date_mTB->Text = this->dataGridView1->Rows[a]->Cells[8]->Value->ToString();
			this->maskedTextBox1->Text = this->dataGridView1->Rows[a]->Cells[1]->Value->ToString();
			this->numericUpDown1->Text = this->dataGridView1->Rows[a]->Cells[3]->Value->ToString();
			this->textBox4->Text = this->dataGridView1->Rows[a]->Cells[2]->Value->ToString();
		}
	}
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Clear_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (var_interface == 1) {
		Client::Delete(base_dd, this->IDclient_tb->Text);
	}
	else if (var_interface == 4) {
		Personnel::Delete(base_dd, this->IDclient_tb->Text);
	}
}
private: System::Void Add_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (var_interface == 1) {
		Client::Insert(base_dd, this->IDclient_tb->Text, this->NOMclient_Tb->Text, this->PRENOMclient_tb->Text, Dateformat::StringDatetoSQL(this->Client_Date_mTB->Text));

	}
	else if (var_interface == 4) {
		if (this->checkBox1->Checked)
		{
			Personnel::Insert(base_dd, this->IDclient_tb->Text, this->NOMclient_Tb->Text, this->PRENOMclient_tb->Text, Dateformat::StringDatetoSQL(this->Client_Date_mTB->Text), Dateformat::StringDatetoSQL(this->maskedTextBox1->Text), "NULL", textBox4->Text);
		}
		else
		{
			Personnel::Insert(base_dd, this->IDclient_tb->Text, this->NOMclient_Tb->Text, this->PRENOMclient_tb->Text, Dateformat::StringDatetoSQL(this->Client_Date_mTB->Text), Dateformat::StringDatetoSQL(this->maskedTextBox1->Text), numericUpDown1->Value.ToString(), textBox4->Text);
		}
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

private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox1->Checked)
	{
		this->numericUpDown1->Enabled = false;
	}
	else
	{
		this->numericUpDown1->Enabled = true;
	}
}
private: System::Void Modifier_Bouton_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (var_interface == 1) {

	}
	else if (var_interface == 4) {
		if (this->checkBox1->Checked)
		{
			Personnel::Update(base_dd, this->IDclient_tb->Text, this->NOMclient_Tb->Text, this->PRENOMclient_tb->Text, Dateformat::StringDatetoSQL(this->Client_Date_mTB->Text), Dateformat::StringDatetoSQL(this->maskedTextBox1->Text), "NULL", textBox4->Text);
		}
		else
		{
			Personnel::Update(base_dd, this->IDclient_tb->Text, this->NOMclient_Tb->Text, this->PRENOMclient_tb->Text, Dateformat::StringDatetoSQL(this->Client_Date_mTB->Text), Dateformat::StringDatetoSQL(this->maskedTextBox1->Text), numericUpDown1->Value.ToString(), textBox4->Text);
		}
	}
}
};
}
