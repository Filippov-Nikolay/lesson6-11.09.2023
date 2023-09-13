#include <iostream>
#include "Laptop.h"
#include "CPU.h"
#include "GPU.h"
#include "RAM.h"
#include "SSD.h"

using namespace std;

// ����������� ����
unsigned int Laptop::numberOfLaptops = 0U;

Laptop::Laptop() {
	company = nullptr;
	model = nullptr;
	color = nullptr;

	price = 0;
	++numberOfLaptops;
}

Laptop::Laptop(const char* cpuCompany, const char* cpuModel, const char* cpuConntectorType, int cpuNumberOfCores, int cpuPrice,
	const char* gpuCompany, const char* gpuModel, const char* gpuMemoryType, int gpuVideoMemory, int gpuPrice,
	const char* ramCompany, const char* ramModel, const char* ramMemoryType, int ramMemory, int ramMemoryFrequency, int ramPrice, bool ramRGB_Backlight,
	const char* ssdCompany, const char* ssdModel, const char* ssdFormFactor, const char* ssdConnetcorPrice, int ssdMemory, int ssdReadingSpeed, int ssdWriteSpeed, int ssdPrice,
	const char* leptopCompany, const char* leptopModel, const char* leptopColor) :
	cpu(cpuCompany, cpuModel, cpuConntectorType, cpuNumberOfCores, cpuPrice),
	gpu(gpuCompany, gpuModel, gpuMemoryType, gpuVideoMemory, gpuPrice),
	ram(ramCompany, ramModel, ramMemoryType, ramMemory, ramMemoryFrequency, ramPrice, ramRGB_Backlight),
	ssd(ssdCompany, ssdModel, ssdFormFactor, ssdConnetcorPrice, ssdMemory, ssdReadingSpeed, ssdWriteSpeed, ssdPrice) {
		cout << "Full initialization by 5 class: CPU, GPU, RAM, SSD, Laptop" << endl;

		company = new char[strlen(leptopCompany) + 1];
		strcpy_s(company, strlen(leptopCompany) + 1, leptopCompany);

		model = new char[strlen(leptopModel) + 1];
		strcpy_s(model, strlen(leptopModel) + 1, leptopModel);

		color = new char[strlen(leptopColor) + 1];
		strcpy_s(color, strlen(leptopColor) + 1, leptopColor);

		price += cpuPrice += gpuPrice += ramPrice += ssdPrice;
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

//Laptop::Laptop(const char* cp, const char* md, const char* ct, int noc, int pr) :cpu(cp, md, ct, noc, pr) {
//	cout << "Initialization by 5 param - CPU" << endl;
//}

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
	cout << "���� ������ � ����������: " << endl;
	cpu.Input();
	cout << endl << endl;

	// �����-�����
	cout << "���� ������ � �����-�����: " << endl;
	gpu.Input();
	cout << endl << endl;

	// ���
	cout << "���� ������ � ���: " << endl;
	ram.Input();
	cout << endl << endl;

	// ������������ ����������
	cout << "���� ������ � SSD: " << endl;
	ssd.Input();
	cout << endl << endl;

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
void Laptop::FullPrint() const {
	cout << "�������: " << endl;
	cout << "��������: " << company << endl;
	cout << "������: " << model << endl;
	cout << "����: " << color << endl;
	cout << endl;

	cout << "���������: " << endl;
	cpu.Print();
	cout << endl;

	cout << "�����-�����: " << endl;
	gpu.Print();
	cout << endl;

	cout << "���: " << endl;
	ram.Print();
	cout << endl;

	cout << "SSD-����������: " << endl;
	ssd.Print();
	cout << endl;
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
