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
	void Print() const;

	// Аксессоры
	// Геттеры
	char* GetCompany() const;
	char* GetModel() const;
	char* GetConnectorType() const;

	int GetNumberOfCores() const;
	int GetPrice() const;


	// Сеттеры
	void SetCompany(const char*);
	void SetModel(const char*);
	void SetConnectorType(const char*);

	void SetNumberOfCores(int);
	void SetPrice(int);
};