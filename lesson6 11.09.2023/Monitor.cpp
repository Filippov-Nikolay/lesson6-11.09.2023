#include <iostream>
#include "Monitor.h"

using namespace std;

// cp - company, md - model, mt - matrix, dg - diagonal, mf - monitorFrequency, pr - price 

// ������������/����������
Monitor::Monitor() {
	company = nullptr;
	model = nullptr;
	matrix = nullptr;

	diagonal = 0;
	monitorFrequency = 0;
	price = 0;
}
Monitor::Monitor(const char* cp, const char* md, const char* mt, int dg, int mf, int pr) {
	cout << "Constructor 6 params" << endl;

	company = new char[strlen(cp) + 1];
	strcpy_s(company, strlen(cp) + 1, cp);

	model = new char[strlen(md) + 1];
	strcpy_s(model, strlen(md) + 1, md);

	matrix = new char[strlen(mt) + 1];
	strcpy_s(matrix, strlen(mt) + 1, mt);

	diagonal = dg;
	monitorFrequency = mf;
	price = pr;
}
Monitor::~Monitor() {
	delete[] company;
	delete[] model;
	delete[] matrix;
}

// �������� �����������
Monitor::Monitor(const Monitor& obj) {
	company = new char[strlen(company) + 1];
	strcpy_s(company, strlen(obj.company) + 1, obj.company);

	model = new char[strlen(model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);

	matrix = new char[strlen(matrix) + 1];
	strcpy_s(matrix, strlen(obj.matrix) + 1, obj.matrix);

	diagonal = obj.diagonal;
	monitorFrequency = obj.monitorFrequency;
	price = obj.price;
}

void Monitor::Input() {
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
	model = new char[strlen(buff) + 1];
	strcpy_s(model, strlen(buff) + 1, buff);


	// �������
	cout << "������� ��� �������: ";
	cin >> buff;
	if (matrix != nullptr) {
		cout << "Delate matrix -> " << matrix << endl << endl;
		delete[] matrix;
	}
	matrix = new char[strlen(buff) + 1];
	strcpy_s(matrix, strlen(buff) + 1, buff);


	// ���������
	do {
		cout << "������� ���������: ";
		cin >> diagonal;

		if (diagonal <= 0 || diagonal >= 34)
			cout << "�� ����� �������� ���������!" << endl << endl;
	} while (diagonal <= 0 || diagonal >= 34);


	// �������
	do {
		cout << "������� ������� ���������� ������: ";
		cin >> monitorFrequency;

		if (monitorFrequency != 60 && monitorFrequency != 90 && monitorFrequency != 120 && monitorFrequency != 144 && monitorFrequency != 240)
			cout << "�� ����� �������� ���������!" << endl << endl;
	} while (monitorFrequency != 60 && monitorFrequency != 90 && monitorFrequency != 120 && monitorFrequency != 144 && monitorFrequency != 240);


	// ���� 
	do {
		cout << "������� ����: ";
		cin >> price;

		if (price <= 0)
			cout << "�� ����� �������� ����!" << endl << endl;
	} while (price <= 0);
}
void Monitor::Print() const {
	cout << "��������: " << company << endl;
	cout << "������: " << model << endl;
	cout << "�������: " << matrix << endl;
	cout << "���������: " << diagonal << endl;
	cout << "������� ��������: " << monitorFrequency << endl;
	cout << "����: " << price << endl;
}


// ���������
// �������
char* Monitor::GetCompany() const { return company; }
char* Monitor::GetModel() const { return model; }
char* Monitor::GetMatrix() const { return matrix; }

int Monitor::GetDiagonal() const { return diagonal; }
int Monitor::GetMonitorFrequency() const { return monitorFrequency; }
int Monitor::GetPrice() const { return price; }


// �������
void Monitor::SetCompany(const char* cp) {
	if (cp != nullptr) {
		cout << "Delate company -> " << this->company << endl;
		delete[] company;
	}

	company = new char[strlen(cp) + 1];
	strcpy_s(company, strlen(cp) + 1, cp);
}
void Monitor::SetModel(const char* md) {
	if (md != nullptr) {
		cout << "Delate model -> " << this->model << endl;
		delete[] model;
	}

	model = new char[strlen(md) + 1];
	strcpy_s(model, strlen(md) + 1, md);
}
void Monitor::SetMatrix(const char* mt) {
	if (mt != nullptr) {
		cout << "Delate matrix -> " << this->matrix << endl;
		delete[] matrix;
	}

	matrix = new char[strlen(mt) + 1];
	strcpy_s(matrix, strlen(mt) + 1, mt);
}

void Monitor::SetDiagonal(int dg) { diagonal = dg; }
void Monitor::SetMonitorFrequency(int mf) { monitorFrequency = mf; }
void Monitor::SetPrice(int pr) { price = pr; }
