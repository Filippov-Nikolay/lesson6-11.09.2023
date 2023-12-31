﻿#pragma once

// Оперативная память
class RAM {
	char* company;
	char* model;
	char* memoryType;

	int memory;
	int memoryFrequency;
	int price;

	bool RGB_Backlight;
public:
	// Конструкторы/Деструктор
	RAM();
	RAM(const char*, const char*, const char*, int, int, int, bool);
	~RAM();

	// Глубокое копирование
	RAM(const RAM&);

	void Input();
	void Print() const;

	// Аксессоры
	// Геттеры
	char* GetCompany() const;
	char* GetModel() const;
	char* GetMemoryType() const;

	int GetMemory() const;
	int GetMemoryFrequency() const;
	int GetPrice() const;

	bool GetRGB_Backlight() const;


	// Сеттеры
	void SetCompany(const char*);
	void SetModel(const char*);
	void SetMemoryType(const char*);

	void SetMemory(int);
	void SetMemoryFrequency(int);
	void SetPrice(int);

	void SetRGB_Backlight(bool);
};

