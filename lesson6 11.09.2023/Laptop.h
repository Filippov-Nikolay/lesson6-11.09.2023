#pragma once

#include "CPU.h"
#include "GPU.h"
#include "RAM.h"
#include "SSD.h"

// Ноутбук
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
	// Конструкторы/Деструктор
	Laptop();
	Laptop(const char*, const char*, const char*, int);
	Laptop(const char*, const char*, const char*, int, int);
	~Laptop();

	void Input();
	void InputCPU();
	void InputGPU();
	void InputRAM();
	void InputSSD();

	void Print();
	void PrintCPU();
	void PrintGPU();
	void PrintRAM();
	void PrintSSD();

	// Аксессоры
	// Геттеры
	char* GetCompany();
	char* GetModel();
	char* GetColor();

	int GetPrice();


	// Сеттеры
	void SetCompany(const char*);
	void SetModel(const char*);
	void SetColor(const char*);

	void SetPrice(int);
};