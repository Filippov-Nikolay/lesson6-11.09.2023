#pragma once

// ���������
class CPU {
	char* company;
	char* model;
	char* connectorType;

	int NumberOfCores;
	int price;
public:
	// ������������/����������
	CPU();
	CPU(const char*, const char*, const char*, int, int);
	~CPU();

	void Input();
	void Print();

	// ���������
	// �������
	char* GetCompany(const char*);
	char* GetModel(const char*);
	char* GetConnectorType(const char*);

	int GetNumberOfCores(int);
	int GetPrice(int);


	// �������
	char* SetCompany();
	char* SetModel();
	char* SetConnectorType();

	int SetNumberOfCores();
	int SetPrice();
};