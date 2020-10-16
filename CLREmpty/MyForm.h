#pragma once

namespace CLREmpty {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(63, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(63, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"V=\r\n";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(182, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(63, 20);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(308, 12);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(63, 20);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(440, 12);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(63, 20);
			this->textBox4->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(578, 12);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(63, 20);
			this->textBox5->TabIndex = 5;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(706, 12);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(63, 20);
			this->textBox6->TabIndex = 6;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(830, 12);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(63, 20);
			this->textBox7->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(396, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"s1=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(534, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"s2=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(141, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"t1=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(796, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"ɣ=";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(267, 12);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"t2=";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(671, 12);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"µ=";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(924, 7);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 30);
			this->button1->TabIndex = 14;
			this->button1->Text = L"solve";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::solve);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(27, 55);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(45, 16);
			this->label8->TabIndex = 15;
			this->label8->Text = L"label8";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(30, 90);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(969, 423);
			this->dataGridView1->TabIndex = 16;
			this->dataGridView1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1027, 525);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Data";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int V, t1, t2, s1, s2, u, gamma;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void solve(System::Object^ sender, System::EventArgs^ e) {
		try {
			V = Int32::Parse(textBox1->Text);
			t1 = Int32::Parse(textBox2->Text);
			t2 = Int32::Parse(textBox3->Text);
			s1 = Int32::Parse(textBox4->Text);
			s2 = Int32::Parse(textBox5->Text);
			u = Int32::Parse(textBox6->Text);
			gamma = Int32::Parse(textBox7->Text);
			label8->Text = "v1=" + textBox1->Text + " t1=" + textBox2->Text + " t2=" + textBox3->Text + " s1=" + textBox4->Text + " s2=" + textBox5->Text + " u=" + textBox6->Text + " gamma=" + textBox7->Text;
			label8->ForeColor = System::Drawing::Color::Green;
			
		}
		catch (...) {
			label8->Text = "Wrong data!";
			label8->ForeColor = System::Drawing::Color::Red;
			dataGridView1->Visible = false;
			return;
		}
		generate_Table();
	}
	private: System::Void generate_Table() {
		// int m = (V % 7) + t1;
		int m = System::Math::Sqrt(V) + t1;
		// int k = (V % 5) + t2;
		int k = System::Math::Sqrt(V) + t2;
		// int hx = (V + 15) % 7 + s1;
		int hx = (V + s1) % 7 + 1;
		// int hy = (V + 15) % 9 + s2;
		int hy = (V + s2) % 9 + 1;
		// int x0 = (V % 5) + u;
		int x0 = (V % 5) * u;
		// int y0 = (V % 3) + gamma;
		int y0 = (V % 3) * gamma;
		int n[100][100]; // korr table
		int ny[100], nx[100];
		int nsum = 0;
		// int hx = u + 1;
		// int hy = gamma + 1;
		// int x0 = t1;
		// int y0 = s1;
		// int m = (t2 - t1) / hx + 1;
		// int k = (s2 - s1) / hy + 1;

		dataGridView1->ColumnCount = m + 2;
		dataGridView1->RowCount = k + 2;
		dataGridView1->Visible = true;
		int X = x0, Y = y0;
		dataGridView1->Rows[0]->Cells[0]->Value = "Y / X";
		
		for (int j = 1; j <= m; j ++) {
			dataGridView1->Rows[0]->Cells[j]->Value = System::Convert::ToString(X);
			n[0][j] = X;
			X += hx;
			nx[j] = 0;
		}
		for (int i = 1; i <= k; i ++) {
			dataGridView1->Rows[i]->Cells[0]->Value = System::Convert::ToString(Y);
			n[i][0] = Y;
			Y += hy;
			ny[i] = 0;
		}
		for (int i = 1; i <= k; i++) {
			for (int j = 1; j <= m; j++) {
				
				// n[i][j] = System::Math::Abs((V + 5 * j) % 6) +
					// System::Math::Abs(System::Math::Abs(System::Math::Abs(V - 4 * i) % 7 - 2) - 4);
				
					/* if (n[i][0] / 2 >= n[0][j]) {
					n[i][j] = 0;
				}
				else {
					n[i][j] = (V / n[0][j]) * (n[i][0] / n[0][j]);
				} */
				// n[i][j] = V / System::Math::Pow( (System::Math::Abs(n[0][j] - n[i][0]) + System::Math::Abs(n[0][j] + hx- 1 - (n[i][0] + hy + 1)) + 1), System::Math::Abs(i - j) + 1 );
				// n[i][j] = V / System::Math::Pow((System::Math::Abs(n[0][j] - n[i][0]) + System::Math::Abs(n[0][j] + hx - 1 - (n[i][0] + hy + 1)) + 1), System::Math::Abs(i - j) + 1);
				// n[i][j] = V / (System::Math::Abs(n[0][j] - n[i][0]) + System::Math::Abs(n[0][j] + hx - 1 - (n[i][0] + hy + 1)) + 1);
				n[i][j] = (V + n[0][j] + n[i][0]) / (System::Math::Pow(System::Math::Abs(17 - hx - hy + (n[0][j] + n[i][0]) % 4 ), System::Math::Abs(i - j) + 1 ));
				if (n[i][j] == 0) {
					dataGridView1->Rows[i]->Cells[j]->Value = "-";
				} else {
					dataGridView1->Rows[i]->Cells[j]->Value = System::Convert::ToString(n[i][j]);
				}
				ny[i] += n[i][j];
				nx[j] += n[i][j];
				nsum += n[i][j];
			}
		}

		dataGridView1->Rows[k + 1]->Cells[m + 1]->Value = System::Convert::ToString(nsum);
		dataGridView1->Rows[k + 1]->Cells[0]->Value = "Nx";
		dataGridView1->Rows[0]->Cells[m + 1]->Value = "Ny";
		for (int j = 1; j <= m; j++) {
			dataGridView1->Rows[k + 1]->Cells[j]->Value = System::Convert::ToString(nx[j]);
		}
		for (int i = 1; i <= k; i++) {
			dataGridView1->Rows[i]->Cells[m + 1]->Value = System::Convert::ToString(ny[i]);
		}

	}
};
}
