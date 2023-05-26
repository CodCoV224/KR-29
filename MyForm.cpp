#include <iostream>
#include <string>
#include <random>
#include "MyForm.h"
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace System::Drawing;
using namespace kr29;

// Функция для генерации случайного числа в заданном диапазоне
int getRandomNumber(int min, int max) {
	static std::random_device rd;
	static std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(min, max);
	return dist(mt);
}

// Функция для генерации случайного пароля
std::string generatePassword(int length, bool useDigits, bool useLowerCase, bool useUpperCase, bool useSpecialChars) {
	// Символы для каждого типа
	const std::string digits = "0123456789";
	const std::string lowerCaseChars = "abcdefghijklmnopqrstuvwxyz";
	const std::string upperCaseChars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const std::string specialChars = "!@#$%^&*()";

	// Строка для хранения сгенерированного пароля
	std::string password;

	int passLenght = 0;

	// Добавление оставшейся части пароля случайным образом из всех требуемых типов символов
	const std::string allChars = digits + lowerCaseChars + upperCaseChars + specialChars;
	for (int i = 0; i < length;) {
		int k = getRandomNumber(1, 4);
		if (useDigits && k == 1) {
			password += digits[getRandomNumber(0, digits.length() - 1)];
		}
		if (useLowerCase && k == 2) {
			password += lowerCaseChars[getRandomNumber(0, lowerCaseChars.length() - 1)];
		}
		if (useUpperCase && k == 3) {
			password += upperCaseChars[getRandomNumber(0, upperCaseChars.length() - 1)];
		}
		if (useSpecialChars && k == 4) {
			password += specialChars[getRandomNumber(0, specialChars.length() - 1)];
		}
		if (password.length() > passLenght) {
			++i;
			passLenght = password.length();
		}
	}

	// Перемешивание символов в пароле
	std::random_shuffle(password.begin(), password.end());

	return password;
}

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	MyForm form;
	Application::Run(% form);
}

System::Void kr29::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox1->Text = "";
	// Генерация пароля
	for (int i = 0; i < quantityPasswordTrackBar->Value; i += 1) {
		textBox1->Text += gcnew System::String(msclr::interop::marshal_as<System::String^>(generatePassword(sizePasswordTrackBar->Value, numbersCheckBox->Checked, checkBox2->Checked, checkBox1->Checked, checkBox3->Checked).c_str()));
		textBox1->Text += "\r\n";
	}
}
