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
	SSD(const char*, const char*, const char*, int, int, int, int);
	~SSD();

	void Input();
	void Print();

	// Аксессоры
	// Геттеры
	char* GetCompany(const char*);
	char* GetModel(const char*);
	char* GetFormFactor(const char*);
	char* GetConnectorType(const char*);

	int GetMemory(int);
	int GetReadingSpeed(int);
	int GetWriteSpeed(int);
	int GetPrice(int);


	// Сеттеры
	char* SetCompany(const char*);
	char* SetModel(const char*);
	char* SetFormFactor(const char*);
	char* SetConnectorType(const char*);

	int SetMemory(int);
	int SetReadingSpeed(int);
	int SetWriteSpeed(int);
	int SetPrice(int);
};

