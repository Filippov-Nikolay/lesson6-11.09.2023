#pragma once

// Видеокарта
class GPU {
	char* company;
	char* model;
	char* memoryType;

	int videoMemory;
	int price;
public:
	// Конструкторы/Деструктор
	GPU();
	GPU(const char*, const char*, const char*, int);
	~GPU();

	void Input();
	void Print();

	// Аксессоры
	// Геттеры
	char* GetCompany(const char*);
	char* GetModel(const char*);
	char* GetMemoryType(const char*);

	int GetMemory(int);
	int GetPrice(int);


	// Сеттеры
	char* SetCompany();
	char* SetModel();
	char* SetMemoryType();

	int SetMemory();
	int SetPrice();
};

