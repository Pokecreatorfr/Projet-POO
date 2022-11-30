#pragma once
#include "MyForm1.h"


namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
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
		/// Nettoyage des ressources utilisées.
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

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel2;












	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Setting_button = (gcnew System::Windows::Forms::Button());
			this->Personnel_button = (gcnew System::Windows::Forms::Button());
			this->commande_button = (gcnew System::Windows::Forms::Button());
			this->stats_button = (gcnew System::Windows::Forms::Button());
			this->client_button = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
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
			this->panel1->Size = System::Drawing::Size(96, 441);
			this->panel1->TabIndex = 0;
			// 
			// Setting_button
			// 
			this->Setting_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Setting_button.BackgroundImage")));
			this->Setting_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Setting_button->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Setting_button->FlatAppearance->BorderSize = 0;
			this->Setting_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Setting_button->Location = System::Drawing::Point(0, 375);
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
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->panel2);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(96, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(879, 441);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(877, 437);
			this->panel2->TabIndex = 0;
			this->panel2->Visible = false;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(975, 441);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MinimumSize = System::Drawing::Size(18, 461);
			this->Name = L"MyForm";
			this->Text = L"Client Manager 2022";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
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
}
private: System::Void panel2_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Setting_click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ setting = gcnew MyForm1;
	setting->Show();
}
};
}
