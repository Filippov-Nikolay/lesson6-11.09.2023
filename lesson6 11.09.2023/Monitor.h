#pragma once
class Monitor {
	char* company;
	char* model;
	char* matrix;

	int diagonal;
	int monitorFrequency;
	int price;
public:
	// Конструкторы/Деструктор
	Monitor();
	Monitor(const char*, const char*, const char*, int, int, int);
	~Monitor();

	// Глубокое копирование
	Monitor(const Monitor&);

	void Input();
	void Print() const;

	// Аксессоры
	// Геттеры
	char* GetCompany() const;
	char* GetModel() const;
	char* GetMatrix() const;

	int GetDiagonal() const;
	int GetMonitorFrequency() const;
	int GetPrice() const;


	// Сеттеры
	void SetCompany(const char*);
	void SetModel(const char*);
	void SetMatrix(const char*);

	void SetDiagonal(int);
	void SetMonitorFrequency(int);
	void SetPrice(int);
};

