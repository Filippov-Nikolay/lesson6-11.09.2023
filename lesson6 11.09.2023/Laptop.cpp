#include <iostream>
#include "Laptop.h"
#include "CPU.h"
#include "GPU.h"
#include "RAM.h"
#include "SSD.h"

using namespace std;

// cp - company, md - model, cl - color, pr - price

Laptop::Laptop() {
	company = nullptr;
	model = nullptr;
	color = nullptr;

	price = 0;
}
Laptop::Laptop(const char* cp, const char* md, const char* cl, int pr) {
	cout << "Constructor 4 params" << endl;

	company = new char[strlen(cp) + 1];
	strcpy_s(company, strlen(cp) + 1, cp);
	
	model = new char[strlen(md) + 1];
	strcpy_s(model, strlen(md) + 1, md);

	color = new char[strlen(cl) + 1];
	strcpy_s(color, strlen(cl) + 1, cl);

	price = pr;
}
Laptop::~Laptop() {
	delete[] company;
	delete[] model;
	delete[] color;
}

void Laptop::Input() {
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

	// ����
	cout << "������� ����: ";
	cin >> buff;
	if (color != nullptr) {
		cout << "Delate color -> " << color << endl << endl;
		delete[] color;
	}
	color = new char[strlen(buff) + 1];
	strcpy_s(color, strlen(buff) + 1, buff);

	// ����
	cout << "������� ����: ";
	cin >> price;
}
void Laptop::InputCPU() {
	cpu.Input();
}
void Laptop::InputGPU() {
	gpu.Input();
}
void Laptop::InputRAM() {
	ram.Input();
}
void Laptop::InputSSD() {
	ssd.Input();
}

void Laptop::Print() {
	cout << "��������: " << company << endl;
	cout << "������: " << model << endl;
	cout << "����: " << color << endl;
	cout << "����: " << price << endl;
}
void Laptop::PrintCPU() {
	cpu.Print();
}
void Laptop::PrintGPU() {
	gpu.Print();
}
void Laptop::PrintRAM() {
	ram.Print();
}
void Laptop::PrintSSD() {
	ssd.Print();
}

// ���������
// �������
char* Laptop::GetCompany() {
	return company;
}
char* Laptop::GetModel() {
	return model;
}
char* Laptop::GetColor() {
	return color;
}
int Laptop::GetPrice() {
	return price;
}


// �������
void Laptop::SetCompany(const char* cp) {
	if (cp != nullptr) {
		cout << "Delate company -> " << this->company << endl;
	}

	company = new char[strlen(cp) + 1];
	strcpy_s(company, strlen(cp) + 1, cp);
}
void Laptop::SetModel(const char* md) {
	if (md != nullptr) {
		cout << "Delate model -> " << this->model << endl;
	}

	model = new char[strlen(md) + 1];
	strcpy_s(model, strlen(md) + 1, md);
}
void Laptop::SetColor(const char* cl) {
	if (cl != nullptr) {
		cout << "Delate color -> " << this->color << endl;
	}

	color = new char[strlen(cl) + 1];
	strcpy_s(color, strlen(cl) + 1, cl);
}
void Laptop::SetPrice(int pr) {
	price = pr;
}
