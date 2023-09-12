#include <iostream>
#include "CPU.h"

using namespace std;

// cp - company, md - model, ct - connectorType, noc - numberOfCores, pr - price

// ������������/����������
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

// �������� �����������
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

	// ��������
	cout << "������� ��������: ";
	cin >> buff;
	if (company != nullptr) {
		cout << "Delate company -> " << company << endl << endl;
		delete[] company;
	}
	company = new char[strlen(buff) + 1];
	strcpy_s(company, strlen(buff) + 1, buff);

	// ������
	cout << "������� ������: ";
	cin >> buff;
	if (model != nullptr) {
		cout << "Delate model -> " << model << endl << endl;
		delete[] model;
	}
	model = new char[strlen(model) + 1];
	strcpy_s(model, strlen(buff) + 1, buff);

	// ��� �����������
	cout << "������� ��� �����������: ";
	cin >> buff;
	if (connectorType != nullptr) {
		cout << "Delate connectorType -> " << connectorType << endl << endl;
		delete[] connectorType;
	}
	connectorType = new char[strlen(buff) + 1];
	strcpy_s(connectorType, strlen(buff) + 1, buff);

	// ���-�� ����
	cout << "������� ���-�� ����: ";
	cin >> numberOfCores;

	// ����
	cout << "������� ����: ";
	cin >> price;
}
void CPU::Print() {
	cout << "��������: " << company << endl;
	cout << "������: " << model << endl;
	cout << "��� �����������: " << connectorType << endl;
	cout << "���-�� ����: " << numberOfCores << endl;
	cout << "����: " << price << endl;
}


// �������
char* CPU::GetCompany() {
	return company;
}
char* CPU::GetModel() {
	return model;
}
char* CPU::GetConnectorType() {
	return connectorType;
}
int CPU::GetNumberOfCores() {
	return numberOfCores;
}
int CPU::GetPrice() {
	return price;
}


// �������
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