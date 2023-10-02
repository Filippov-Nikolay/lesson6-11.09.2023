#pragma once
class FlashDrive {
	char* company;
	char* model;
	char* USB_Interface;

	int memory;
	int readingSpeed;
	int writeSpeed;
	int price;
public:
	// Конструкторы/Деструктор
	FlashDrive();
	FlashDrive(const char*, const char*, const char*, int, int, int, int);
	~FlashDrive();

	// Глубокое копирование
	FlashDrive(const FlashDrive&);

	void Input();
	void Print() const;

	// Аксессоры
	// Геттеры
	char* GetCompany() const;
	char* GetModel() const;
	char* GetUSB_Interface() const;

	int GetMemory() const;
	int GetReadingSpeed() const;
	int GetWriteSpeed() const;
	int GetPrice() const;


	// Сеттеры
	void SetCompany(const char*);
	void SetModel(const char*);
	void SetUSB_Interface(const char*);

	void SetMemory(int);
	void SetReadingSpeed(int);
	void SetWriteSpeed(int);
	void SetPrice(int);
};