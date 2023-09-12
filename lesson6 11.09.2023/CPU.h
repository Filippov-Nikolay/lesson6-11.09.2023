#pragma once

// Процессор
class CPU {
	char* company;
	char* model;
	char* connectorType;

	int numberOfCores;
	int price;
public:
	// Конструкторы/Деструктор
	CPU();
	CPU(const char*, const char*, const char*, int, int);
	~CPU();

	// Глубокое копирование
	CPU(const CPU&);

	void Input();
	void Print();

	// Аксессоры
	// Геттеры
	char* GetCompany();
	char* GetModel();
	char* GetConnectorType();

	int GetNumberOfCores();
	int GetPrice();


	// Сеттеры
	void SetCompany(const char*);
	void SetModel(const char*);
	void SetConnectorType(const char*);

	void SetNumberOfCores(int);
	void SetPrice(int);
};