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

	static unsigned int numberOfLaptops;
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

	void Print() const;
	void PrintInfoNumberOfLaptops() const;
	void PrintCPU() const;
	void PrintGPU() const;
	void PrintRAM() const;
	void PrintSSD() const;

	// Аксессоры
	// Геттеры
	char* GetCompany() const;
	char* GetModel() const;
	char* GetColor() const;

	int GetPrice() const;


	// Сеттеры
	void SetCompany(const char*);
	void SetModel(const char*);
	void SetColor(const char*);

	void SetPrice(int);
};