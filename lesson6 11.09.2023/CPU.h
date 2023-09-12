#pragma once

// ���������
class CPU {
	char* company;
	char* model;
	char* connectorType;

	int numberOfCores;
	int price;
public:
	// ������������/����������
	CPU();
	CPU(const char*, const char*, const char*, int, int);
	~CPU();

	// �������� �����������
	CPU(const CPU&);

	void Input();
	void Print();

	// ���������
	// �������
	char* GetCompany();
	char* GetModel();
	char* GetConnectorType();

	int GetNumberOfCores();
	int GetPrice();


	// �������
	void SetCompany(const char*);
	void SetModel(const char*);
	void SetConnectorType(const char*);

	void SetNumberOfCores(int);
	void SetPrice(int);
};