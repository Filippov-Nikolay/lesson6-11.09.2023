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
	void Print();

	// Аксессоры
	// Геттеры
	char* GetCompany(const char*);
	char* GetModel(const char*);
	char* GetColor(const char*);

	int GetPrice(int);


	// Сеттеры
	char* SetCompany(const char*);
	char* SetModel(const char*);
	char* SetColor(const char*);

	int SetPrice(int);
};