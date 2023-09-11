#pragma once

// ����������
class GPU {
	char* company;
	char* model;
	char* memoryType;

	int videoMemory;
	int price;
public:
	// ������������/����������
	GPU();
	GPU(const char*, const char*, const char*, int);
	~GPU();

	void Input();
	void Print();

	// ���������
	// �������
	char* GetCompany(const char*);
	char* GetModel(const char*);
	char* GetMemoryType(const char*);

	int GetMemory(int);
	int GetPrice(int);


	// �������
	char* SetCompany();
	char* SetModel();
	char* SetMemoryType();

	int SetMemory();
	int SetPrice();
};

