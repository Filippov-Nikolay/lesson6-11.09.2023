#include <iostream>
#include "GPU.h"

using namespace std;

// cp - company, md - model, mt -  memoryType, vm - videoMemory, pr - price

// Конструкторы/Деструктор
GPU::GPU() {
	company = nullptr;
	model = nullptr;
	memoryType = nullptr;
	videoMemory = 0;
	price = 0;
}
GPU::GPU(const char* cp, const char* md, const char* mt, int vm, int pr) {
	cout << "Constructor 5 params" << endl;

	company = new char[strlen(cp) + 1];
	strcpy_s(company, strlen(cp) + 1, cp);

	model = new char[strlen(md) + 1];
	strcpy_s(model, strlen(md) + 1, md);

	memoryType = new char[strlen(mt) + 1];
	strcpy_s(memoryType, strlen(mt) + 1, mt);

	videoMemory = vm;
	price = pr;
}
GPU::~GPU() {
	delete[] company;
	delete[] model;
	delete[] memoryType;
}

// Глубокое копирование
GPU::GPU(const GPU& obj) {
	company = new char[strlen(company) + 1];
	strcpy_s(company, strlen(obj.company) + 1, obj.company);

	model = new char[strlen(model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);

	memoryType = new char[strlen(memoryType) + 1];
	strcpy_s(memoryType, strlen(obj.memoryType) + 1, obj.memoryType);

	videoMemory = obj.videoMemory;
	price = obj.price;
}


void GPU::Input() {
	char buff[100];

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

	// Кол-во ядер
	cout << "Введите кол-во ядер: ";
	cin >> videoMemory;

	// Цена
	cout << "Введите цену: ";
	cin >> price;
}
void GPU::Print() const {
	cout << "Компания: " << company << endl;
	cout << "Модель: " << model << endl;
	cout << "Тип подключения: " << memoryType << endl;
	cout << "Кол-во ядер: " << videoMemory << endl;
	cout << "Цена: " << price << endl;
}


// Геттеры
char* GPU::GetCompany() const {
	return company;
}
char* GPU::GetModel() const {
	return model;
}
char* GPU::GetMemoryType() const {
	return memoryType;
}
int GPU::GetVideoMemory() const {
	return videoMemory;
}
int GPU::GetPrice() const {
	return price;
}


// Сеттеры
void GPU::SetCompany(const char* cp) {
	if (cp != nullptr) {
		cout << "Delate company -> " << this->company << endl;
	}

	company = new char[strlen(cp) + 1];
	strcpy_s(company, strlen(cp) + 1, cp);
}
void GPU::SetModel(const char* md) {
	if (md != nullptr) {
		cout << "Delate model -> " << this->model << endl;
	}

	model = new char[strlen(md) + 1];
	strcpy_s(model, strlen(md) + 1, md);
}
void GPU::SetMemoryType(const char* mt) {
	if (mt != nullptr) {
		cout << "Delate memoryType -> " << this->memoryType << endl;
	}

	memoryType = new char[strlen(mt) + 1];
	strcpy_s(memoryType, strlen(mt) + 1, mt);
}
void GPU::SetMemory(int vm) {
	videoMemory = vm;
}
void GPU::SetPrice(int pr) {
	price = pr;
}