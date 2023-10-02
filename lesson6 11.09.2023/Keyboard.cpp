#include <iostream>
#include "Keyboard.h"

using namespace std;

// cp - company, md - model, rt - responseTime, pr - price, RGB_bl - RGB_Backlight

// Конструкторы/Деструктор
Keyboard::Keyboard() {
	company = nullptr;
	model = nullptr;

	responseTime = 0;
	price = 0;

	RGB_Backlight = false;
}
Keyboard::Keyboard(const char* cp, const char* md, double rt, int pr, bool RGB_bl) {
	cout << "Constructor 5 params" << endl;

	company = new char[strlen(cp) + 1];
	strcpy_s(company, strlen(cp) + 1, cp);

	model = new char[strlen(md) + 1];
	strcpy_s(model, strlen(md) + 1, md);

	responseTime = rt;
	price = pr;

	RGB_Backlight = RGB_bl;
}
Keyboard::~Keyboard() {
	delete[] company;
	delete[] model;
}

// Глубокое копирование
Keyboard::Keyboard(const Keyboard& obj) {
	company = new char[strlen(company) + 1];
	strcpy_s(company, strlen(obj.company) + 1, obj.company);

	model = new char[strlen(model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);

	responseTime = obj.responseTime;
	price = obj.price;

	RGB_Backlight = obj.RGB_Backlight;
}


void Keyboard::Input() {
	char buff[100];
	char log;

	// Компания
	cout << "Введите компанию: ";
	cin >> buff;
	if (company != nullptr) {
		cout << "Delate company -> " << company << endl << endl;
		delete[] company;
	}
	company = new char[strlen(buff) + 1];
	strcpy_s(company, strlen(buff) + 1, buff);


	// Модель
	cout << "Введите модель: ";
	cin >> buff;
	if (model != nullptr) {
		cout << "Delate model -> " << model << endl << endl;
		delete[] model;
	}
	model = new char[strlen(buff) + 1];
	strcpy_s(model, strlen(buff) + 1, buff);


	// Время отклика
	do {
		cout << "Введите время отклика (мс): ";
		cin >> responseTime;
		if (responseTime <= 0)
			cout << "Вы ввели неверное значение!" << endl << endl;
	} while (responseTime <= 0);


	// Цена 
	do {
		cout << "Введите цену: ";
		cin >> price;

		if (price <= 0)
			cout << "Вы ввели неверную цену!" << endl << endl;
	} while (price <= 0);


	// RGB - подсветка
	do {
		cout << "Будет ли RGB - подсветка? (y - да, n - нет)\n> ";
		cin >> log;

		if (log == 'y')
			RGB_Backlight = true;
		else if (log == 'n')
			RGB_Backlight = false;
		else
			cout << "Вы ввели неверный символ!" << endl << endl;
	} while (log != 'y' && log != 'n');
}
void Keyboard::Print() const {
	cout << "Компания: " << company << endl;
	cout << "Модель: " << model << endl;
	cout << "Время отклика: " << responseTime << "мс." << endl;
	printf("RGD - подсветка: %s\n", RGB_Backlight == true ? "присутствует" : "отсутствует");
	cout << "Цена: " << price << endl;
}


// Аксессоры
// Геттеры
char* Keyboard::GetCompany() const { return company; }
char* Keyboard::GetModel() const { return model; }

double Keyboard::GetResponseTime() const { return responseTime; }
int Keyboard::GetPrice() const { return price; }

bool Keyboard::GetRGB_Backlight() const { return RGB_Backlight; }


// Сеттеры
void Keyboard::SetCompany(const char* cp) {
	if (cp != nullptr) {
		cout << "Delate company -> " << this->company << endl;
		delete[] company;
	}

	company = new char[strlen(cp) + 1];
	strcpy_s(company, strlen(cp) + 1, cp);
}
void Keyboard::SetModel(const char* md) {
	if (md != nullptr) {
		cout << "Delate model -> " << this->model << endl;
		delete[] model;
	}

	model = new char[strlen(md) + 1];
	strcpy_s(model, strlen(md) + 1, md);
}

void Keyboard::SetResponseTime(double rt) {
	responseTime = rt;
}
void Keyboard::SetPrice(int pr) {
	price = pr;
}

void Keyboard::SetRGB_Backlight(bool RGB_bl) {
	RGB_Backlight = RGB_bl;
}
