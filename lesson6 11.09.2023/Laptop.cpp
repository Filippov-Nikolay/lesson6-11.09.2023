#include <iostream>
#include "Laptop.h"
#include "CPU.h"
#include "GPU.h"
#include "RAM.h"
#include "SSD.h"

using namespace std;

// cp - company, md - model, cl - color, pr - price

unsigned int Laptop::numberOfLaptops = 0U;

Laptop::Laptop() {
	company = nullptr;
	model = nullptr;
	color = nullptr;

	price = 0;
	++numberOfLaptops;
}

// �������������
Laptop::Laptop(const char* cp) {
	company = new char[strlen(cp) + 1];
	strcpy_s(company, strlen(cp) + 1, cp);
}
Laptop::Laptop(const char* cp, const char* md) : Laptop(cp) {
	model = new char[strlen(md) + 1];
	strcpy_s(model, strlen(md) + 1, md);
}
Laptop::Laptop(const char* cp, const char* md, const char* cl) : Laptop(cp, md) {
	color = new char[strlen(cl) + 1];
	strcpy_s(color, strlen(cl) + 1, cl);
}
Laptop::Laptop(const char* cp, const char* md, const char* cl, int pr) : Laptop(cp, md, cl) {
	cout << "Constructor 4 params" << endl;

	price = pr;
	++numberOfLaptops;
}
Laptop::~Laptop() {
	delete[] company;
	delete[] model;
	delete[] color;

	--numberOfLaptops;
}


void Laptop::Input() {
	char buff[100];
	int TempPrice = 0;

	// ���������
	cpu.Input();

	// �����-�����
	gpu.Input();

	// ���
	ram.Input();

	// ������������ ����������
	ssd.Input();

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
	TempPrice += cpu.GetPrice();
	TempPrice += gpu.GetPrice();
	TempPrice += ram.GetPrice();
	TempPrice += ssd.GetPrice();

	price = TempPrice;
	/*
	cout << "������� ����: ";
	cin >> price;
	*/
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

void Laptop::Print() const {
	cout << "��������: " << company << endl;
	cout << "������: " << model << endl;
	cout << "����: " << color << endl;
	cout << "����: " << price << endl;
}
void Laptop::PrintInfoNumberOfLaptops() const {
	cout << "���-�� ���������: " << numberOfLaptops << endl;
}
void Laptop::PrintCPU() const {
	cpu.Print();
}
void Laptop::PrintGPU() const {
	gpu.Print();
}
void Laptop::PrintRAM() const {
	ram.Print();
}
void Laptop::PrintSSD() const {
	ssd.Print();
}


// ���������
// �������
char* Laptop::GetCompany() const {
	return company;
}
char* Laptop::GetModel() const {
	return model;
}
char* Laptop::GetColor() const {
	return color;
}
int Laptop::GetPrice() const {
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
