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

	// �������� �����������
	RAM(const RAM&);

	void Input();
	void Print();

	// ���������
	// �������
	char* GetCompany();
	char* GetModel();
	char* GetMemoryType();

	int GetMemory();
	int GetMemoryFrequency();
	int GetPrice();

	bool GetRGB_Backlight();


	// �������
	void SetCompany(const char*);
	void SetModel(const char*);
	void SetMemoryType(const char*);

	void SetMemory(int);
	void SetMemoryFrequency(int);
	void SetPrice(int);

	void SetRGB_Backlight(bool);
};

