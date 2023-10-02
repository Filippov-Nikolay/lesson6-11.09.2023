#include <iostream>
#include "ComputerMouse.h"

using namespace std;

// cp - company, md - model, USB_Inf - USB_Interface, nofb - numberOfButtons, rt - responseTime, pr - price, RGB_bl - RGB_Backlight

// ������������/����������
ComputerMouse::ComputerMouse() {
	company = nullptr;
	model = nullptr;
	USB_Interface = nullptr;

	numberOfButtons = 0;
	responseTime = 0;
	price = 0;

	RGB_Backlight = false;
}
ComputerMouse::ComputerMouse(const char* cp, const char* md, const char* USB_Inf, int nofb, double rt, int pr, bool RGB_bl) {
	cout << "Constructor 7 params" << endl;

	company = new char[strlen(cp) + 1];
	strcpy_s(company, strlen(cp) + 1, cp);

	model = new char[strlen(md) + 1];
	strcpy_s(model, strlen(md) + 1, md);

	USB_Interface = new char[strlen(USB_Inf) + 1];
	strcpy_s(USB_Interface, strlen(USB_Inf) + 1, USB_Inf);

	numberOfButtons = nofb;
	responseTime = rt;
	price = pr;

	RGB_Backlight = RGB_bl;
}
ComputerMouse::~ComputerMouse() {
	delete[] company;
	delete[] model;
	delete[] USB_Interface;
}

// �������� �����������
ComputerMouse::ComputerMouse(const ComputerMouse& obj) {
	company = new char[strlen(company) + 1];
	strcpy_s(company, strlen(obj.company) + 1, obj.company);

	model = new char[strlen(model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);

	USB_Interface = new char[strlen(USB_Interface) + 1];
	strcpy_s(USB_Interface, strlen(obj.USB_Interface) + 1, obj.USB_Interface);

	numberOfButtons = obj.numberOfButtons;
	responseTime = obj.responseTime;
	price = obj.price;

	RGB_Backlight = obj.RGB_Backlight;
}

void ComputerMouse::Input() {
	char buff[100];
	char log;

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


	// ���-�� ������
	do {
		cout << "������� ���-�� ������: ";
		cin >> numberOfButtons;
		if (numberOfButtons <= 3)
			cout << "�� ����� �������� ���-�� ������!" << endl << endl;
	} while (numberOfButtons <= 3);


	// ����� �������
	do {
		cout << "������� ����� ������� (��): ";
		cin >> responseTime;
		if (responseTime <= 0)
			cout << "�� ����� �������� ��������!" << endl << endl;
	} while (responseTime <= 0);


	// ���� 
	do {
		cout << "������� ����: ";
		cin >> price;

		if (price <= 0)
			cout << "�� ����� �������� ����!" << endl << endl;
	} while (price <= 0);


	// RGB - ���������
	do {
		cout << "����� �� RGB - ���������? (y - ��, n - ���)\n> ";
		cin >> log;

		if (log == 'y')
			RGB_Backlight = true;
		else if (log == 'n')
			RGB_Backlight = false;
		else
			cout << "�� ����� �������� ������!" << endl << endl;
	} while (log != 'y' && log != 'n');
}
void ComputerMouse::Print() const {
	cout << "��������: " << company << endl;
	cout << "������: " << model << endl;
	cout << "USB ���������: " << USB_Interface << endl;
	cout << "���-�� ������: " << numberOfButtons << endl;
	cout << "����� �������: " << responseTime << "��." << endl;
	printf("RGD - ���������: %s\n", RGB_Backlight == true ? "������������" : "�����������");
	cout << "����: " << price << endl;
}


// ���������
// �������
char* ComputerMouse::GetCompany() const { return company; }
char* ComputerMouse::GetModel() const { return model; }
char* ComputerMouse::GetUSB_Interface() const { return USB_Interface; }

int ComputerMouse::GetNumberOfButtons() const { return numberOfButtons; }
double ComputerMouse::GetResponseTime() const { return responseTime; }
int ComputerMouse::GetPrice() const { return price; }

bool ComputerMouse::GetRGB_Backlight() const { return RGB_Backlight; }


// �������
void ComputerMouse::SetCompany(const char* cp) {
	if (cp != nullptr) {
		cout << "Delate company -> " << this->company << endl;
		delete[] company;
	}

	company = new char[strlen(cp) + 1];
	strcpy_s(company, strlen(cp) + 1, cp);
}
void ComputerMouse::SetModel(const char* md) {
	if (md != nullptr) {
		cout << "Delate model -> " << this->model << endl;
		delete[] model;
	}

	model = new char[strlen(md) + 1];
	strcpy_s(model, strlen(md) + 1, md);
}
void ComputerMouse::SetUSB_Interface(const char* USB_Inf) {
	if (USB_Inf != nullptr) {
		cout << "Delate USB_Interface -> " << this->USB_Interface << endl;
		delete[] USB_Interface;
	}

	USB_Interface = new char[strlen(USB_Inf) + 1];
	strcpy_s(USB_Interface, strlen(USB_Inf) + 1, USB_Inf);
}

void ComputerMouse::SetNumberOfButtons(int nofb) {
	numberOfButtons = nofb;
}
void ComputerMouse::SetResponseTime(double rt) {
	responseTime = rt;
}
void ComputerMouse::SetPrice(int pr) {
	price = pr;
}

void ComputerMouse::SetRGB_Backlight(bool RGB_bl) {
	RGB_Backlight = RGB_bl;
}
