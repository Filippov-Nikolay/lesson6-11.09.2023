#pragma once

// Твердотельный накопитель
class SSD {
	char* company;
	char* model;
	char* formFactor;
	char* connectorType;

	int memory;
	int readingSpeed;
	int writeSpeed;
	int price;
public:
	// Конструкторы/Деструктор
	SSD();
	SSD(const char*, const char*, const char*, const char*, int, int, int, int);
	~SSD();

	// Глубокое копирование
	SSD(const SSD&);

	void Input();
	void Print();

	// Аксессоры
	// Геттеры
	char* GetCompany();
	char* GetModel();
	char* GetFormFactor();
	char* GetConnectorType();

	int GetMemory();
	int GetReadingSpeed();
	int GetWriteSpeed();
	int GetPrice();


	// Сеттеры
	void SetCompany(const char*);
	void SetModel(const char*);
	void SetFormFactor(const char*);
	void SetConnectorType(const char*);

	void SetMemory(int);
	void SetReadingSpeed(int);
	void SetWriteSpeed(int);
	void SetPrice(int);
};

