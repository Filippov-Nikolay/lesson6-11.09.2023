#pragma once

// ����������� ������
class RAM {
	char* company;
	char* model;
	char* memoryType;

	int memory;
	int memoryFrequency;
	int price;

	bool RGB_Backlight;
public:
	// ������������/����������
	RAM();
	RAM(const char*, const char*, const char*, int, int, int, bool);
	~RAM();

	void Input();
	void Print();

	// ���������
	// �������
	char* GetCompany(const char*);
	char* GetModel(const char*);
	char* GetMemoryType(const char*);

	int GetMemory(int);
	int GetMemoryFrequency(int);
	int GetPrice(int);

	bool GetRGB_Backlight(bool);


	// �������
	char* SetCompany();
	char* SetModel();
	char* SetMemoryType();

	int GetMemory();
	int GetMemoryFrequency();
	int GetPrice();

	bool SetRGB_Backlight();
};

