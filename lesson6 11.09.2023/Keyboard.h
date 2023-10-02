#pragma once
class Keyboard {
	char* company;
	char* model;

	double responseTime;
	int price;

	bool RGB_Backlight;
public:
	// Конструкторы/Деструктор
	Keyboard();
	Keyboard(const char*, const char*, double, int, bool);
	~Keyboard();

	// Глубокое копирование
	Keyboard(const Keyboard&);

	void Input();
	void Print() const;

	// Аксессоры
	// Геттеры
	char* GetCompany() const;
	char* GetModel() const;

	double GetResponseTime() const;
	int GetPrice() const;

	bool GetRGB_Backlight() const;


	// Сеттеры
	void SetCompany(const char*);
	void SetModel(const char*);

	void SetResponseTime(double);
	void SetPrice(int);

	void SetRGB_Backlight(bool);
};