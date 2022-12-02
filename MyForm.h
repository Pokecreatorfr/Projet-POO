#pragma once
#include "MyForm1.h"
#include "Form_color_change.h"
#include "Hex_color.h"


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
	private: System::Windows::Forms::Panel^ panel1;
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
	private: System::Windows::Forms::Button^ Clear_Client_button;

	private: System::Windows::Forms::Button^ Chercher_Client_button;

	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Button^ Clear_Personnel_button;
	private: System::Windows::Forms::Button^ Chercher_Personnel_button;


	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ DATE_NAISSANCE_personnel_tb;

	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ PRENOMpersonnel_tb;

	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ NOMpersonnel_tb;

	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ IDperson_tb;


	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Label^ Adresse_label;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ DATE_EMBAUCHE_tb;
	private: System::Windows::Forms::MaskedTextBox^ Client_Date_mTB;
















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
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->Adresse_label = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->Clear_Client_button = (gcnew System::Windows::Forms::Button());
			this->Chercher_Client_button = (gcnew System::Windows::Forms::Button());
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
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->DATE_EMBAUCHE_tb = (gcnew System::Windows::Forms::TextBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->Clear_Personnel_button = (gcnew System::Windows::Forms::Button());
			this->Chercher_Personnel_button = (gcnew System::Windows::Forms::Button());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->DATE_NAISSANCE_personnel_tb = (gcnew System::Windows::Forms::TextBox());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->PRENOMpersonnel_tb = (gcnew System::Windows::Forms::TextBox());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->NOMpersonnel_tb = (gcnew System::Windows::Forms::TextBox());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->IDperson_tb = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel15->SuspendLayout();
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
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->MinimumSize = System::Drawing::Size(72, 314);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(72, 422);
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
			this->Setting_button->Location = System::Drawing::Point(0, 368);
			this->Setting_button->Margin = System::Windows::Forms::Padding(2);
			this->Setting_button->Name = L"Setting_button";
			this->Setting_button->Size = System::Drawing::Size(72, 54);
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
			this->Personnel_button->Location = System::Drawing::Point(0, 162);
			this->Personnel_button->Margin = System::Windows::Forms::Padding(2);
			this->Personnel_button->Name = L"Personnel_button";
			this->Personnel_button->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Personnel_button->Size = System::Drawing::Size(72, 54);
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
			this->commande_button->Location = System::Drawing::Point(0, 108);
			this->commande_button->Margin = System::Windows::Forms::Padding(2);
			this->commande_button->Name = L"commande_button";
			this->commande_button->Size = System::Drawing::Size(72, 54);
			this->commande_button->TabIndex = 1;
			this->commande_button->UseVisualStyleBackColor = true;
			// 
			// stats_button
			// 
			this->stats_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"stats_button.BackgroundImage")));
			this->stats_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->stats_button->Dock = System::Windows::Forms::DockStyle::Top;
			this->stats_button->FlatAppearance->BorderSize = 0;
			this->stats_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->stats_button->Location = System::Drawing::Point(0, 54);
			this->stats_button->Margin = System::Windows::Forms::Padding(2);
			this->stats_button->Name = L"stats_button";
			this->stats_button->Size = System::Drawing::Size(72, 54);
			this->stats_button->TabIndex = 1;
			this->stats_button->UseVisualStyleBackColor = true;
			// 
			// client_button
			// 
			this->client_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"client_button.BackgroundImage")));
			this->client_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->client_button->Dock = System::Windows::Forms::DockStyle::Top;
			this->client_button->FlatAppearance->BorderSize = 0;
			this->client_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->client_button->Location = System::Drawing::Point(0, 0);
			this->client_button->Margin = System::Windows::Forms::Padding(2);
			this->client_button->Name = L"client_button";
			this->client_button->Size = System::Drawing::Size(72, 54);
			this->client_button->TabIndex = 0;
			this->client_button->UseVisualStyleBackColor = true;
			this->client_button->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_3);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->panel16);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(72, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(587, 422);
			this->panel2->TabIndex = 1;
			this->panel2->Visible = false;
			// 
			// panel16
			// 
			this->panel16->Controls->Add(this->panel17);
			this->panel16->Controls->Add(this->Adresse_label);
			this->panel16->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel16->Location = System::Drawing::Point(282, 0);
			this->panel16->Margin = System::Windows::Forms::Padding(2);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(305, 422);
			this->panel16->TabIndex = 1;
			// 
			// panel17
			// 
			this->panel17->Controls->Add(this->label9);
			this->panel17->Controls->Add(this->textBox9);
			this->panel17->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel17->Location = System::Drawing::Point(0, 21);
			this->panel17->Margin = System::Windows::Forms::Padding(2);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(305, 44);
			this->panel17->TabIndex = 4;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Dock = System::Windows::Forms::DockStyle::Left;
			this->label9->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->Location = System::Drawing::Point(0, 0);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(56, 23);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Ville";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// textBox9
			// 
			this->textBox9->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->textBox9->Location = System::Drawing::Point(0, 24);
			this->textBox9->Margin = System::Windows::Forms::Padding(2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(305, 20);
			this->textBox9->TabIndex = 0;
			// 
			// Adresse_label
			// 
			this->Adresse_label->AutoSize = true;
			this->Adresse_label->Dock = System::Windows::Forms::DockStyle::Top;
			this->Adresse_label->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Adresse_label->ForeColor = System::Drawing::SystemColors::Control;
			this->Adresse_label->Location = System::Drawing::Point(0, 0);
			this->Adresse_label->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Adresse_label->Name = L"Adresse_label";
			this->Adresse_label->Size = System::Drawing::Size(74, 21);
			this->Adresse_label->TabIndex = 0;
			this->Adresse_label->Text = L"Adresse";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->panel8);
			this->panel3->Controls->Add(this->panel7);
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(236, 422);
			this->panel3->TabIndex = 0;
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->Clear_Client_button);
			this->panel8->Controls->Add(this->Chercher_Client_button);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel8->Location = System::Drawing::Point(0, 360);
			this->panel8->Margin = System::Windows::Forms::Padding(2);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(236, 62);
			this->panel8->TabIndex = 4;
			// 
			// Clear_Client_button
			// 
			this->Clear_Client_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Clear_Client_button.BackgroundImage")));
			this->Clear_Client_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Clear_Client_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->Clear_Client_button->FlatAppearance->BorderSize = 0;
			this->Clear_Client_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Clear_Client_button->Location = System::Drawing::Point(76, 0);
			this->Clear_Client_button->Margin = System::Windows::Forms::Padding(2);
			this->Clear_Client_button->Name = L"Clear_Client_button";
			this->Clear_Client_button->Size = System::Drawing::Size(79, 62);
			this->Clear_Client_button->TabIndex = 1;
			this->Clear_Client_button->UseVisualStyleBackColor = true;
			// 
			// Chercher_Client_button
			// 
			this->Chercher_Client_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Chercher_Client_button.BackgroundImage")));
			this->Chercher_Client_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Chercher_Client_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->Chercher_Client_button->FlatAppearance->BorderSize = 0;
			this->Chercher_Client_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Chercher_Client_button->Location = System::Drawing::Point(0, 0);
			this->Chercher_Client_button->Margin = System::Windows::Forms::Padding(2);
			this->Chercher_Client_button->Name = L"Chercher_Client_button";
			this->Chercher_Client_button->Size = System::Drawing::Size(76, 62);
			this->Chercher_Client_button->TabIndex = 0;
			this->Chercher_Client_button->UseVisualStyleBackColor = true;
			this->Chercher_Client_button->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_4);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->Client_Date_mTB);
			this->panel7->Controls->Add(this->label4);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel7->Location = System::Drawing::Point(0, 141);
			this->panel7->Margin = System::Windows::Forms::Padding(2);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(236, 44);
			this->panel7->TabIndex = 3;
			// 
			// Client_Date_mTB
			// 
			this->Client_Date_mTB->Location = System::Drawing::Point(0, 24);
			this->Client_Date_mTB->Margin = System::Windows::Forms::Padding(2);
			this->Client_Date_mTB->Mask = L"00/00/0000";
			this->Client_Date_mTB->Name = L"Client_Date_mTB";
			this->Client_Date_mTB->Size = System::Drawing::Size(234, 20);
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
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(198, 23);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Date de naissance";
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label3);
			this->panel6->Controls->Add(this->PRENOMclient_tb);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(0, 94);
			this->panel6->Margin = System::Windows::Forms::Padding(2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(236, 47);
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
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 23);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Pr�nom";
			// 
			// PRENOMclient_tb
			// 
			this->PRENOMclient_tb->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->PRENOMclient_tb->Location = System::Drawing::Point(0, 27);
			this->PRENOMclient_tb->Margin = System::Windows::Forms::Padding(2);
			this->PRENOMclient_tb->Name = L"PRENOMclient_tb";
			this->PRENOMclient_tb->Size = System::Drawing::Size(236, 20);
			this->PRENOMclient_tb->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->NOMclient_Tb);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(0, 47);
			this->panel5->Margin = System::Windows::Forms::Padding(2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(236, 47);
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
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nom";
			// 
			// NOMclient_Tb
			// 
			this->NOMclient_Tb->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->NOMclient_Tb->Location = System::Drawing::Point(0, 27);
			this->NOMclient_Tb->Margin = System::Windows::Forms::Padding(2);
			this->NOMclient_Tb->Name = L"NOMclient_Tb";
			this->NOMclient_Tb->Size = System::Drawing::Size(236, 20);
			this->NOMclient_Tb->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->IDclient_tb);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Margin = System::Windows::Forms::Padding(2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(236, 47);
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
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ID";
			// 
			// IDclient_tb
			// 
			this->IDclient_tb->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->IDclient_tb->Location = System::Drawing::Point(0, 27);
			this->IDclient_tb->Margin = System::Windows::Forms::Padding(2);
			this->IDclient_tb->Name = L"IDclient_tb";
			this->IDclient_tb->Size = System::Drawing::Size(236, 20);
			this->IDclient_tb->TabIndex = 0;
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->panel10);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel9->Location = System::Drawing::Point(659, 0);
			this->panel9->Margin = System::Windows::Forms::Padding(2);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(561, 422);
			this->panel9->TabIndex = 2;
			this->panel9->Visible = false;
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->panel18);
			this->panel10->Controls->Add(this->panel11);
			this->panel10->Controls->Add(this->panel12);
			this->panel10->Controls->Add(this->panel13);
			this->panel10->Controls->Add(this->panel14);
			this->panel10->Controls->Add(this->panel15);
			this->panel10->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel10->Location = System::Drawing::Point(0, 0);
			this->panel10->Margin = System::Windows::Forms::Padding(2);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(236, 422);
			this->panel10->TabIndex = 0;
			// 
			// panel18
			// 
			this->panel18->Controls->Add(this->label10);
			this->panel18->Controls->Add(this->DATE_EMBAUCHE_tb);
			this->panel18->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel18->Location = System::Drawing::Point(0, 185);
			this->panel18->Margin = System::Windows::Forms::Padding(2);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(236, 44);
			this->panel18->TabIndex = 5;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Dock = System::Windows::Forms::DockStyle::Left;
			this->label10->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->Location = System::Drawing::Point(0, 0);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(168, 23);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Date Embauche";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// DATE_EMBAUCHE_tb
			// 
			this->DATE_EMBAUCHE_tb->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->DATE_EMBAUCHE_tb->Location = System::Drawing::Point(0, 24);
			this->DATE_EMBAUCHE_tb->Margin = System::Windows::Forms::Padding(2);
			this->DATE_EMBAUCHE_tb->Name = L"DATE_EMBAUCHE_tb";
			this->DATE_EMBAUCHE_tb->Size = System::Drawing::Size(236, 20);
			this->DATE_EMBAUCHE_tb->TabIndex = 0;
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->Clear_Personnel_button);
			this->panel11->Controls->Add(this->Chercher_Personnel_button);
			this->panel11->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel11->Location = System::Drawing::Point(0, 360);
			this->panel11->Margin = System::Windows::Forms::Padding(2);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(236, 62);
			this->panel11->TabIndex = 4;
			// 
			// Clear_Personnel_button
			// 
			this->Clear_Personnel_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Clear_Personnel_button.BackgroundImage")));
			this->Clear_Personnel_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Clear_Personnel_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->Clear_Personnel_button->FlatAppearance->BorderSize = 0;
			this->Clear_Personnel_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Clear_Personnel_button->Location = System::Drawing::Point(76, 0);
			this->Clear_Personnel_button->Margin = System::Windows::Forms::Padding(2);
			this->Clear_Personnel_button->Name = L"Clear_Personnel_button";
			this->Clear_Personnel_button->Size = System::Drawing::Size(79, 62);
			this->Clear_Personnel_button->TabIndex = 1;
			this->Clear_Personnel_button->UseVisualStyleBackColor = true;
			// 
			// Chercher_Personnel_button
			// 
			this->Chercher_Personnel_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Chercher_Personnel_button.BackgroundImage")));
			this->Chercher_Personnel_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Chercher_Personnel_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->Chercher_Personnel_button->FlatAppearance->BorderSize = 0;
			this->Chercher_Personnel_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Chercher_Personnel_button->Location = System::Drawing::Point(0, 0);
			this->Chercher_Personnel_button->Margin = System::Windows::Forms::Padding(2);
			this->Chercher_Personnel_button->Name = L"Chercher_Personnel_button";
			this->Chercher_Personnel_button->Size = System::Drawing::Size(76, 62);
			this->Chercher_Personnel_button->TabIndex = 0;
			this->Chercher_Personnel_button->UseVisualStyleBackColor = true;
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->label5);
			this->panel12->Controls->Add(this->DATE_NAISSANCE_personnel_tb);
			this->panel12->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel12->Location = System::Drawing::Point(0, 141);
			this->panel12->Margin = System::Windows::Forms::Padding(2);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(236, 44);
			this->panel12->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Dock = System::Windows::Forms::DockStyle::Left;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(0, 0);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(198, 23);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Date de naissance";
			// 
			// DATE_NAISSANCE_personnel_tb
			// 
			this->DATE_NAISSANCE_personnel_tb->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->DATE_NAISSANCE_personnel_tb->Location = System::Drawing::Point(0, 24);
			this->DATE_NAISSANCE_personnel_tb->Margin = System::Windows::Forms::Padding(2);
			this->DATE_NAISSANCE_personnel_tb->Name = L"DATE_NAISSANCE_personnel_tb";
			this->DATE_NAISSANCE_personnel_tb->Size = System::Drawing::Size(236, 20);
			this->DATE_NAISSANCE_personnel_tb->TabIndex = 0;
			// 
			// panel13
			// 
			this->panel13->Controls->Add(this->label6);
			this->panel13->Controls->Add(this->PRENOMpersonnel_tb);
			this->panel13->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel13->Location = System::Drawing::Point(0, 94);
			this->panel13->Margin = System::Windows::Forms::Padding(2);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(236, 47);
			this->panel13->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Dock = System::Windows::Forms::DockStyle::Left;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(0, 0);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 23);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Pr�nom";
			// 
			// PRENOMpersonnel_tb
			// 
			this->PRENOMpersonnel_tb->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->PRENOMpersonnel_tb->Location = System::Drawing::Point(0, 27);
			this->PRENOMpersonnel_tb->Margin = System::Windows::Forms::Padding(2);
			this->PRENOMpersonnel_tb->Name = L"PRENOMpersonnel_tb";
			this->PRENOMpersonnel_tb->Size = System::Drawing::Size(236, 20);
			this->PRENOMpersonnel_tb->TabIndex = 0;
			// 
			// panel14
			// 
			this->panel14->Controls->Add(this->label7);
			this->panel14->Controls->Add(this->NOMpersonnel_tb);
			this->panel14->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel14->Location = System::Drawing::Point(0, 47);
			this->panel14->Margin = System::Windows::Forms::Padding(2);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(236, 47);
			this->panel14->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Dock = System::Windows::Forms::DockStyle::Left;
			this->label7->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(0, 0);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 23);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Nom";
			// 
			// NOMpersonnel_tb
			// 
			this->NOMpersonnel_tb->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->NOMpersonnel_tb->Location = System::Drawing::Point(0, 27);
			this->NOMpersonnel_tb->Margin = System::Windows::Forms::Padding(2);
			this->NOMpersonnel_tb->Name = L"NOMpersonnel_tb";
			this->NOMpersonnel_tb->Size = System::Drawing::Size(236, 20);
			this->NOMpersonnel_tb->TabIndex = 0;
			// 
			// panel15
			// 
			this->panel15->Controls->Add(this->label8);
			this->panel15->Controls->Add(this->IDperson_tb);
			this->panel15->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel15->Location = System::Drawing::Point(0, 0);
			this->panel15->Margin = System::Windows::Forms::Padding(2);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(236, 47);
			this->panel15->TabIndex = 0;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Dock = System::Windows::Forms::DockStyle::Left;
			this->label8->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Location = System::Drawing::Point(0, 0);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 23);
			this->label8->TabIndex = 1;
			this->label8->Text = L"ID2";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// IDperson_tb
			// 
			this->IDperson_tb->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->IDperson_tb->Location = System::Drawing::Point(0, 27);
			this->IDperson_tb->Margin = System::Windows::Forms::Padding(2);
			this->IDperson_tb->Name = L"IDperson_tb";
			this->IDperson_tb->Size = System::Drawing::Size(236, 20);
			this->IDperson_tb->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1220, 422);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MinimumSize = System::Drawing::Size(18, 382);
			this->Name = L"MyForm";
			this->Text = L"Client Manager 2022";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		int color_theme = Convert::ToInt32(System::Configuration::ConfigurationManager::AppSettings["color_theme"]);
		Form_color_change::Change_color_of_Form_hex(this, color_list_theme[color_theme][0]);
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
}
private: System::Void Personnel_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel9->Visible = true;
	this->panel2->Visible = false;
	Form_color_change::Change_color_of_pannel_hex(this->panel1, color_list[0]);
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

};
}
