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
	GPU(const char*, const char*, const char*, int, int);
	~GPU();

	// Глубокое копирование
	GPU(const GPU&);

	void Input();
	void Print();

	// Аксессоры
	// Геттеры
	char* GetCompany();
	char* GetModel();
	char* GetMemoryType();

	int GetVideoMemory();
	int GetPrice();


	// Сеттеры
	void SetCompany(const char*);
	void SetModel(const char*);
	void SetMemoryType(const char*);

	void SetMemory(int);
	void SetPrice(int);
};

