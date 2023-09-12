#pragma once

#include "CPU.h"
#include "GPU.h"
#include "RAM.h"
#include "SSD.h"

// �������
class Laptop {
	CPU cpu;
	GPU gpu;
	RAM ram;
	SSD ssd;

	char* company;
	char* model;
	char* color;

	int price;
public:
	// ������������/����������
	Laptop();
	Laptop(const char*, const char*, const char*, int);
	Laptop(const char*, const char*, const char*, int, int);
	~Laptop();

	void Input();
	void Print();

	// ���������
	// �������
	char* GetCompany(const char*);
	char* GetModel(const char*);
	char* GetColor(const char*);

	int GetPrice(int);


	// �������
	char* SetCompany(const char*);
	char* SetModel(const char*);
	char* SetColor(const char*);

	int SetPrice(int);
};