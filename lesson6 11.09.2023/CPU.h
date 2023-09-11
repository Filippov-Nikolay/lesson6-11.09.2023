#pragma once

// Процессор
class CPU {
	char* company;
	char* model;
	char* connectorType;

	int NumberOfCores;
	int price;
public:
	// Конструкторы/Деструктор
	CPU();
	CPU(const char*, const char*, const char*, int, int);
	~CPU();

	void Input();
	void Print();

	// Аксессоры
	// Геттеры
	char* GetCompany(const char*);
	char* GetModel(const char*);
	char* GetConnectorType(const char*);

	int GetNumberOfCores(int);
	int GetPrice(int);


	// Сеттеры
	char* SetCompany();
	char* SetModel();
	char* SetConnectorType();

	int SetNumberOfCores();
	int SetPrice();
};