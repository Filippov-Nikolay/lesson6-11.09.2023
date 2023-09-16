#include <iostream>
#include "RAM.h"

using namespace std;

// cp - company, md - model, mt -  memoryType
// me - memory, mf - memoryFrequency, pr - price
// RGB_bl - RGB_Backlight

// Конструкторы/Деструктор
RAM::RAM() {
	company = nullptr;
	model = nullptr;
	memoryType = nullptr;

	memory = 0;
	memoryFrequency = 0;
	price = 0;

	RGB_Backlight = false;
}
RAM::RAM(const char* cp, const char* md, const char* mt, int me, int mf, int pr, bool RGB_bl) {
	cout << "Constructor 7 params" << endl;

	company = new char[strlen(cp) + 1];
	strcpy_s(company, strlen(cp) + 1, cp);

	model = new char[strlen(md) + 1];
	strcpy_s(model, strlen(md) + 1, md);

	memoryType = new char[strlen(mt) + 1];
	strcpy_s(memoryType, strlen(mt) + 1, mt);

	memory = me;
	memoryFrequency = mf;
	price = pr;

	RGB_Backlight = RGB_bl;
}
RAM::~RAM() {
	delete[] company;
	delete[] model;
	delete[] memoryType;
}

// Глубокое копирование
RAM::RAM(const RAM& obj) {
	company = new char[strlen(company) + 1];
	strcpy_s(company, strlen(obj.company) + 1, obj.company);

	model = new char[strlen(model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);

	memoryType = new char[strlen(memoryType) + 1];
	strcpy_s(memoryType, strlen(obj.memoryType) + 1, obj.memoryType);

	memory = obj.memory;
	memoryFrequency = obj.memoryFrequency;
	price = obj.price;

	RGB_Backlight = obj.RGB_Backlight;
}


void RAM::Input() {
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

	// Тип подключения
	cout << "Введите тип подключения: ";
	cin >> buff;
	if (memoryType != nullptr) {
		cout << "Delate memoryType -> " << memoryType << endl << endl;
		delete[] memoryType;
	}
	memoryType = new char[strlen(buff) + 1];
	strcpy_s(memoryType, strlen(buff) + 1, buff);

	// Размер памяти
	cout << "Введите размер памяти (GB): ";
	cin >> memory;

	// Частота памяти
	cout << "Введите частоту памяти: ";
	cin >> memoryFrequency;

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

	// Цена
	cout << "Введите цену: ";
	cin >> price;
}
void RAM::Print() const {
	cout << "Компания: " << company << endl;
	cout << "Модель: " << model << endl;
	cout << "Тип подключения: " << memoryType << endl;

	cout << "Размер памяти: " << memory << "GB" << endl;
	cout << "Частота памяти: " << memoryFrequency << endl;
	printf("RGD - подсветка: %s\n", RGB_Backlight == true ? "присутствует" : "отсутствует");
	cout << "Цена: " << price << endl;
}


// Геттеры
char* RAM::GetCompany() const {
	return company;
}
char* RAM::GetModel() const {
	return model;
}
char* RAM::GetMemoryType() const {
	return memoryType;
}
int RAM::GetMemory() const {
	return memory;
}
int RAM::GetMemoryFrequency() const {
	return memoryFrequency;
}
int RAM::GetPrice() const {
	return price;
}
bool RAM::GetRGB_Backlight() const {
	return RGB_Backlight;
}


// Сеттеры
void RAM::SetCompany(const char* cp) {
	if (cp != nullptr) {
		cout << "Delate company -> " << this->company << endl;
	}

	company = new char[strlen(cp) + 1];
	strcpy_s(company, strlen(cp) + 1, cp);
}
void RAM::SetModel(const char* md) {
	if (md != nullptr) {
		cout << "Delate model -> " << this->model << endl;
	}

	model = new char[strlen(md) + 1];
	strcpy_s(model, strlen(md) + 1, md);
}
void RAM::SetMemoryType(const char* mt) {
	if (mt != nullptr) {
		cout << "Delate memoryType -> " << this->memoryType << endl;
	}

	memoryType = new char[strlen(mt) + 1];
	strcpy_s(memoryType, strlen(mt) + 1, mt);
}
void RAM::SetMemory(int me) {
	memory = me;
}
void RAM::SetMemoryFrequency(int mf) {
	memoryFrequency = mf;
}
void RAM::SetPrice(int pr) {
	price = pr;
}
void RAM::SetRGB_Backlight(bool RGB_bl) {
	RGB_Backlight = RGB_bl;
}