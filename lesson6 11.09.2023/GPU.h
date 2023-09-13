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
	void Print() const;

	// Аксессоры
	// Геттеры
	char* GetCompany() const;
	char* GetModel() const;
	char* GetMemoryType() const;

	int GetVideoMemory() const;
	int GetPrice() const;


	// Сеттеры
	void SetCompany(const char*);
	void SetModel(const char*);
	void SetMemoryType(const char*);

	void SetMemory(int);
	void SetPrice(int);
};

