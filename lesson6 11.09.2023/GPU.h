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
	GPU(const char*, const char*, const char*, int, int);
	~GPU();

	// �������� �����������
	GPU(const GPU&);

	void Input();
	void Print();

	// ���������
	// �������
	char* GetCompany();
	char* GetModel();
	char* GetMemoryType();

	int GetVideoMemory();
	int GetPrice();


	// �������
	void SetCompany(const char*);
	void SetModel(const char*);
	void SetMemoryType(const char*);

	void SetMemory(int);
	void SetPrice(int);
};

