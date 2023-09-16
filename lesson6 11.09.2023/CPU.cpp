#include <iostream>
#include "CPU.h"

using namespace std;

// cp - company, md - model, ct - connectorType, noc - numberOfCores, pr - price

// Конструкторы/Деструктор
CPU::CPU() {
	company = nullptr;
	model = nullptr;
	connectorType = nullptr;
	numberOfCores = 0;
	price = 0;
}
CPU::CPU(const char* cp, const char* md, const char* ct, int noc, int pr) {
	cout << "Constructor 5 params" << endl;

	company = new char[strlen(cp) + 1];
	strcpy_s(company, strlen(cp) + 1, cp);

	model = new char[strlen(md) + 1];
	strcpy_s(model, strlen(md) + 1, md);

	connectorType = new char[strlen(ct) + 1];
	strcpy_s(connectorType, strlen(ct) + 1, ct);

	numberOfCores = noc;
	price = pr;
}
CPU::~CPU() {
	delete[] company;
	delete[] model;
	delete[] connectorType;
}

// Глубокое копирование
CPU::CPU(const CPU& obj) {
	company = new char[strlen(company) + 1];
	strcpy_s(company, strlen(obj.company) + 1, obj.company);

	model = new char[strlen(model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);

	connectorType = new char[strlen(connectorType) + 1];
	strcpy_s(connectorType, strlen(obj.connectorType) + 1, obj.connectorType);

	numberOfCores = obj.numberOfCores;
	price = obj.price;
}

void CPU::Input() {
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
	if (connectorType != nullptr) {
		cout << "Delate connectorType -> " << connectorType << endl << endl;
		delete[] connectorType;
	}
	connectorType = new char[strlen(buff) + 1];
	strcpy_s(connectorType, strlen(buff) + 1, buff);

	// Кол-во ядер
	cout << "Введите кол-во ядер: ";
	cin >> numberOfCores;

	// Цена
	cout << "Введите цену: ";
	cin >> price;
}
void CPU::Print() const {
	cout << "Компания: " << company << endl;
	cout << "Модель: " << model << endl;
	cout << "Тип подключения: " << connectorType << endl;
	cout << "Кол-во ядер: " << numberOfCores << endl;
	cout << "Цена: " << price << endl;
}


// Геттеры
char* CPU::GetCompany() const {
	return company;
}
char* CPU::GetModel() const {
	return model;
}
char* CPU::GetConnectorType() const {
	return connectorType;
}
int CPU::GetNumberOfCores() const {
	return numberOfCores;
}
int CPU::GetPrice() const {
	return price;
}


// Сеттеры
void CPU::SetCompany(const char* cp) {
	if (cp != nullptr) {
		cout << "Delate company -> " << this->company << endl;
	}

	company = new char[strlen(cp) + 1];
	strcpy_s(company, strlen(cp) + 1, cp);
}
void CPU::SetModel(const char* md) {
	if (md != nullptr) {
		cout << "Delate model -> " << this->model << endl;
	}

	model = new char[strlen(md) + 1];
	strcpy_s(model, strlen(md) + 1, md);
}
void CPU::SetConnectorType(const char* ct) {
	if (ct != nullptr) {
		cout << "Delate connectorType -> " << this->connectorType << endl;
	}

	connectorType = new char[strlen(ct) + 1];
	strcpy_s(connectorType, strlen(ct) + 1, ct);
}
void CPU::SetNumberOfCores(int noc) {
	numberOfCores = noc;
}
void CPU::SetPrice(int pr) {
	price = pr;
}
