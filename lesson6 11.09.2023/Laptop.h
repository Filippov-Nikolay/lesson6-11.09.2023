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

	// Статическое поле
	static unsigned int numberOfLaptops;
public:
	// Конструкторы/Деструктор
	Laptop();
	Laptop(const char* cpuCompany, const char* cpuModel, const char* cpuConntectorType, int cpuNumberOfCores, int cpuPrice,
		const char* gpuCompany, const char* gpuModel, const char* gpuMemoryType, int gpuVideoMemory, int gpuPrice,
		const char* ramCompany, const char* ramModel, const char* ramMemoryType, int ramMemory, int ramMemoryFrequency, int ramPrice, bool ramRGB_Backlight,
		const char* ssdCompany, const char* ssdModel, const char* ssdFormFactor, const char* ssdConnetcorPrice, int ssdMemory, int ssdReadingSpeed, int ssdWriteSpeed, int ssdPrice,
		const char* leptopCompany, const char* leptopModel, const char* leptopColor);
	Laptop(const char*);
	Laptop(const char*, const char*);
	Laptop(const char*, const char*, const char*);
	Laptop(const char*, const char*, const char*, int);
	~Laptop();

	void Input();
	void InputCPU();
	void InputGPU();
	void InputRAM();
	void InputSSD();

	void Print() const;
	void FullPrint() const;
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