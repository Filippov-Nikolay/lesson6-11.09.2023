#include <iostream>
#include "FlashDrive.h"

using namespace std;

// cp - company, md - model, USB_Inf - USB_Interface, me - memory, rs - readingSpeed, ws - writeSpeed, pr - price

// ������������/����������
FlashDrive::FlashDrive() {
	company = nullptr;
	model = nullptr;
	USB_Interface = nullptr;

	memory = 0;
	readingSpeed = 0;
	writeSpeed = 0;
	price = 0;
}
FlashDrive::FlashDrive(const char* cp, const char* md, const char* USB_Inf, int me, int rs, int ws, int pr) {
	cout << "Constructor 7 params" << endl;

	company = new char[strlen(cp) + 1];
	strcpy_s(company, strlen(cp) + 1, cp);

	model = new char[strlen(md) + 1];
	strcpy_s(model, strlen(md) + 1, md);

	USB_Interface = new char[strlen(USB_Inf) + 1];
	strcpy_s(USB_Interface, strlen(USB_Inf) + 1, USB_Inf);

	memory = me;
	readingSpeed = rs;
	writeSpeed = ws;
	price = pr;
}
FlashDrive::~FlashDrive() {
	delete[] company;
	delete[] model;
	delete[] USB_Interface;
}

// �������� �����������
FlashDrive::FlashDrive(const FlashDrive& obj) {
	company = new char[strlen(company) + 1];
	strcpy_s(company, strlen(obj.company) + 1, obj.company);

	model = new char[strlen(model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);

	USB_Interface = new char[strlen(USB_Interface) + 1];
	strcpy_s(USB_Interface, strlen(obj.USB_Interface) + 1, obj.USB_Interface);

	memory = obj.memory;
	readingSpeed = obj.readingSpeed;
	writeSpeed = obj.writeSpeed;
	price = obj.price;
}


void FlashDrive::Input() {
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


	// USB ���������
	cout << "������� USB ���������: ";
	cin >> buff;
	if (USB_Interface != nullptr) {
		cout << "Delate USB_Interface -> " << USB_Interface << endl << endl;
		delete[] USB_Interface;
	}
	USB_Interface = new char[strlen(buff) + 1];
	strcpy_s(USB_Interface, strlen(buff) + 1, buff);

	
	// ����� ������ 
	do {
		cout << "������� ����� ������: ";
		cin >> memory;

		if (memory <= 0)
			cout << "�� ����� �������� ����� ������!" << endl << endl;
	} while (memory <= 0);


	// �������� ������
	do {
		cout << "������� �������� ������: ";
		cin >> readingSpeed;

		if (readingSpeed <= 0)
			cout << "�� ����� �������� �������� ������!" << endl << endl;
	} while (readingSpeed <= 0);


	// �������� ������
	do {
		cout << "������� �������� ������: ";
		cin >> writeSpeed;

		if (writeSpeed <= 0)
			cout << "�� ����� �������� �������� ������!" << endl << endl;
	} while (writeSpeed <= 0);


	// ���� 
	do {
		cout << "������� ����: ";
		cin >> price;

		if (price <= 0)
			cout << "�� ����� �������� ����!" << endl << endl;
	} while (price <= 0);
}
void FlashDrive::Print() const {
	cout << "��������: " << company << endl;
	cout << "������: " << model << endl;
	cout << "USB ���������: " << USB_Interface << endl;
	cout << "����� ������: " << memory << endl;
	cout << "�������� ������: " << readingSpeed << endl;
	cout << "�������� ������: " << readingSpeed << endl;
	cout << "����: " << price << endl;
}


// ���������
// �������
char* FlashDrive::GetCompany() const { return company; }
char* FlashDrive::GetModel() const { return model; }
char* FlashDrive::GetUSB_Interface() const { return USB_Interface; }

int FlashDrive::GetMemory() const { return memory; }
int FlashDrive::GetReadingSpeed() const { return readingSpeed; }
int FlashDrive::GetWriteSpeed() const { return writeSpeed; }
int FlashDrive::GetPrice() const { return price; }


// �������
void FlashDrive::SetCompany(const char* cp) {
	if (cp != nullptr) {
		cout << "Delate company -> " << this->company << endl;
		delete[] company;
	}

	company = new char[strlen(cp) + 1];
	strcpy_s(company, strlen(cp) + 1, cp);
}
void FlashDrive::SetModel(const char* md) {
	if (md != nullptr) {
		cout << "Delate model -> " << this->model << endl;
		delete[] model;
	}

	model = new char[strlen(md) + 1];
	strcpy_s(model, strlen(md) + 1, md);
}
void FlashDrive::SetUSB_Interface(const char* USB_Inf) {
	if (USB_Inf != nullptr) {
		cout << "Delate USB_Interface -> " << this->USB_Interface << endl;
		delete[] USB_Interface;
	}

	USB_Interface = new char[strlen(USB_Inf) + 1];
	strcpy_s(USB_Interface, strlen(USB_Inf) + 1, USB_Inf);
}

void FlashDrive::SetMemory(int me) {
	memory = me;
}
void FlashDrive::SetReadingSpeed(int rs) {
	readingSpeed = rs;
}
void FlashDrive::SetWriteSpeed(int ws) {
	writeSpeed = ws;
}
void FlashDrive::SetPrice(int pr) {
	price = pr;
}