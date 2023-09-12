#include <iostream>
#include "SSD.h"

using namespace std;

// cp - company, md - model, ff - formFactor, ct - connectorType
// me - memory, rs - readingSpeed, ws - writeSpeed, pr - price

// ������������/����������
SSD::SSD() {
	company = nullptr;
	model = nullptr;
	formFactor = nullptr;
	connectorType = nullptr;

	memory = 0;
	readingSpeed = 0;
	writeSpeed = 0;
	price = 0;
}
SSD::SSD(const char* cp, const char* md, const char* ff, const char*  ct, int me, int rs, int ws, int pr) {
	cout << "Constructor 7 params" << endl;

	company = new char[strlen(cp) + 1];
	strcpy_s(company, strlen(cp) + 1, cp);

	model = new char[strlen(md) + 1];
	strcpy_s(model, strlen(md) + 1, md);

	formFactor = new char[strlen(ff) + 1];
	strcpy_s(formFactor, strlen(ff) + 1, ff);

	connectorType = new char[strlen(ct) + 1];
	strcpy_s(connectorType, strlen(ct) + 1, ct);

	memory = me;
	readingSpeed = rs;
	writeSpeed = ws;
	price = pr;
}
SSD::~SSD() {
	delete[] company;
	delete[] model;
	delete[] formFactor;
	delete[] connectorType;
}

// �������� �����������
SSD::SSD(const SSD& obj) {
	company = new char[strlen(company) + 1];
	strcpy_s(company, strlen(obj.company) + 1, obj.company);

	model = new char[strlen(model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);

	formFactor = new char[strlen(formFactor) + 1];
	strcpy_s(formFactor, strlen(obj.formFactor) + 1, obj.formFactor);

	connectorType = new char[strlen(connectorType) + 1];
	strcpy_s(connectorType, strlen(obj.connectorType) + 1, obj.connectorType);

	memory = obj.memory;
	readingSpeed = obj.readingSpeed;
	writeSpeed = obj.writeSpeed;
	price = obj.price;
}

void SSD::Input() {
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

	// ����-������
	cout << "������� ����-������: ";
	cin >> buff;
	if (formFactor != nullptr) {
		cout << "Delate formFactor -> " << formFactor << endl << endl;
		delete[] formFactor;
	}
	formFactor = new char[strlen(buff) + 1];
	strcpy_s(formFactor, strlen(buff) + 1, buff);

	// ��� �����������
	cout << "������� ��� �����������: ";
	cin >> buff;
	if (connectorType != nullptr) {
		cout << "Delate connectorType -> " << connectorType << endl << endl;
		delete[] connectorType;
	}
	connectorType = new char[strlen(buff) + 1];
	strcpy_s(connectorType, strlen(buff) + 1, buff);

	// ������ ������
	cout << "������� ������ ������: ";
	cin >> memory;

	// �������� ������
	cout << "������� �������� ������: ";
	cin >> readingSpeed;

	// �������� ������
	cout << "������� �������� ������: ";
	cin >> writeSpeed;

	// ����
	cout << "������� ����: ";
	cin >> price;
}
void SSD::Print() {
	cout << "��������: " << company << endl;
	cout << "������: " << model << endl;
	cout << "����-������: " << formFactor << endl;
	cout << "��� �����������: " << connectorType << endl;

	cout << "������ ������: " << memory << endl;
	cout << "�������� ������: " << readingSpeed << endl;
	cout << "�������� �����: " << writeSpeed << endl;
	cout << "����: " << price << endl;
}


// �������
char* SSD::GetCompany() {
	return company;
}
char* SSD::GetModel() {
	return model;
}
char* SSD::GetFormFactor() {
	return formFactor;
}
char* SSD::GetConnectorType() {
	return connectorType;
}
int SSD::GetMemory() {
	return memory;
}
int SSD::GetReadingSpeed() {
	return readingSpeed;
}
int SSD::GetWriteSpeed() {
	return writeSpeed;
}
int SSD::GetPrice() {
	return price;
}


// �������
void SSD::SetCompany(const char* cp) {
	if (cp != nullptr) {
		cout << "Delate company -> " << this->company << endl;
	}

	company = new char[strlen(cp) + 1];
	strcpy_s(company, strlen(cp) + 1, cp);
}
void SSD::SetModel(const char* md) {
	if (md != nullptr) {
		cout << "Delate model -> " << this->model << endl;
	}

	model = new char[strlen(md) + 1];
	strcpy_s(model, strlen(md) + 1, md);
}
void SSD::SetFormFactor(const char* ff) {
	if (ff != nullptr) {
		cout << "Delate formFactor -> " << this->formFactor << endl;
	}

	formFactor = new char[strlen(ff) + 1];
	strcpy_s(formFactor, strlen(ff) + 1, ff);
}
void SSD::SetConnectorType(const char* ct) {
	if (ct != nullptr) {
		cout << "Delate connectorType -> " << this->connectorType << endl;
	}

	connectorType = new char[strlen(ct) + 1];
	strcpy_s(connectorType, strlen(ct) + 1, ct);
}
void SSD::SetMemory(int me) {
	memory = me;
}
void SSD::SetReadingSpeed(int rs) {
	readingSpeed = rs;
}
void SSD::SetWriteSpeed(int ws) {
	writeSpeed = ws;
}
void SSD::SetPrice(int pr) {
	price = pr;
}
