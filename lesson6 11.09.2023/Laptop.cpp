#include <iostream>
#include "Laptop.h"
#include "CPU.h"
#include "GPU.h"
#include "RAM.h"
#include "SSD.h"
#include "Touchpad.h"
#include "Monitor.h"
#include "Keyboard.h"
#include "FlashDrive.h"
#include "ComputerMouse.h"

using namespace std;

// Статическое поле
unsigned int Laptop::numberOfLaptops = 0U;

Laptop::Laptop() {
	company = nullptr;
	model = nullptr;
	color = nullptr;

	price = 0;
	++numberOfLaptops;
}
Laptop::Laptop(const char* cpuCompany, const char* cpuModel, const char* cpuConntectorType, int cpuNumberOfCores, int cpuPrice,
	const char* gpuCompany, const char* gpuModel, const char* gpuMemoryType, int gpuVideoMemory, int gpuPrice,
	const char* ramCompany, const char* ramModel, const char* ramMemoryType, int ramMemory, int ramMemoryFrequency, int ramPrice, bool ramRGB_Backlight,
	const char* ssdCompany, const char* ssdModel, const char* ssdFormFactor, const char* ssdConnetcorPrice, int ssdMemory, int ssdReadingSpeed, int ssdWriteSpeed, int ssdPrice,
	const char* touchpadCompany, const char* touchpadModel, const char* touchpadColor, int touchpadWidth, int touchpadHeight, int touchpadPrice,
	const char* monitorCompany, const char* monitorModel, const char* monitorMatrix, int monitorDiagonal, int monitorMonitorFrequency, int monitorPrice,
	const char* keyboardCompany, const char* keyboardModel, double keyboardResponseTime, int keyboardPrice, bool keyboardRGB_Backlight,
	FlashDrive* flashDrive,
	ComputerMouse* computerMouse,
	const char* leptopCompany, const char* leptopModel, const char* leptopColor) :
	cpu(cpuCompany, cpuModel, cpuConntectorType, cpuNumberOfCores, cpuPrice),
	gpu(gpuCompany, gpuModel, gpuMemoryType, gpuVideoMemory, gpuPrice),
	ram(ramCompany, ramModel, ramMemoryType, ramMemory, ramMemoryFrequency, ramPrice, ramRGB_Backlight),
	ssd(ssdCompany, ssdModel, ssdFormFactor, ssdConnetcorPrice, ssdMemory, ssdReadingSpeed, ssdWriteSpeed, ssdPrice),
	touchpad(touchpadCompany, touchpadModel, touchpadColor, touchpadWidth, touchpadHeight, touchpadPrice),
	monitor(monitorCompany, monitorModel, monitorMatrix, monitorDiagonal, monitorMonitorFrequency, monitorPrice),
	keyboard(keyboardCompany, keyboardModel, keyboardResponseTime, keyboardPrice, keyboardRGB_Backlight),
	flashDrive(flashDrive),
	computerMouse(computerMouse) {
		cout << "Full initialization by 10 class: CPU, GPU, RAM, SSD, touchpad, monitor, keyboard, flashDrive, computerMouse, laptop" << endl;

		company = new char[strlen(leptopCompany) + 1];
		strcpy_s(company, strlen(leptopCompany) + 1, leptopCompany);

		model = new char[strlen(leptopModel) + 1];
		strcpy_s(model, strlen(leptopModel) + 1, leptopModel);

		color = new char[strlen(leptopColor) + 1];
		strcpy_s(color, strlen(leptopColor) + 1, leptopColor);

		int temp = flashDrive->GetPrice();
		temp += computerMouse->GetPrice();

		price += cpuPrice += gpuPrice += ramPrice += ssdPrice += touchpadPrice += monitorPrice += keyboardPrice += temp;
}

// Делегирование
Laptop::Laptop(const char* cp) {
	company = new char[strlen(cp) + 1];
	strcpy_s(company, strlen(cp) + 1, cp);
}
Laptop::Laptop(const char* cp, const char* md) : Laptop(cp) {
	model = new char[strlen(md) + 1];
	strcpy_s(model, strlen(md) + 1, md);
}
Laptop::Laptop(const char* cp, const char* md, const char* cl) : Laptop(cp, md) {
	color = new char[strlen(cl) + 1];
	strcpy_s(color, strlen(cl) + 1, cl);
}
Laptop::Laptop(const char* cp, const char* md, const char* cl, int pr) : Laptop(cp, md, cl) {
	cout << "Constructor 4 params" << endl;

	price = pr;
	++numberOfLaptops;
}
Laptop::~Laptop() {
	delete[] company;
	delete[] model;
	delete[] color;

	--numberOfLaptops;
}


// Глубокое копирование
Laptop::Laptop(const Laptop& obj):
	cpu(obj.cpu.GetCompany(), obj.cpu.GetModel(), obj.cpu.GetConnectorType(), obj.cpu.GetNumberOfCores(), obj.cpu.GetPrice()),
	gpu(obj.gpu.GetCompany(), obj.gpu.GetModel(), obj.gpu.GetMemoryType(), obj.gpu.GetVideoMemory(), obj.gpu.GetPrice()),
	ram(obj.ram.GetCompany(), obj.ram.GetCompany(), obj.ram.GetMemoryType(), obj.ram.GetMemory(), obj.ram.GetMemoryFrequency(), obj.ram.GetPrice(), obj.ram.GetRGB_Backlight()),
	ssd(obj.ssd.GetCompany(), obj.ssd.GetModel(), obj.ssd.GetFormFactor(), obj.ssd.GetConnectorType(), obj.ssd.GetMemory(), obj.ssd.GetReadingSpeed(), obj.ssd.GetWriteSpeed(), obj.ssd.GetPrice()),
	touchpad(obj.touchpad.GetCompany(), obj.touchpad.GetModel(), obj.touchpad.GetColor(), obj.touchpad.GetWight(), obj.touchpad.GetHeight(), obj.touchpad.GetPrice()),
	monitor(obj.monitor.GetCompany(), obj.monitor.GetModel(), obj.monitor.GetMatrix(), obj.monitor.GetDiagonal(), obj.monitor.GetMonitorFrequency(), obj.monitor.GetPrice()),
	keyboard(obj.keyboard.GetCompany(), obj.keyboard.GetModel(), obj.keyboard.GetResponseTime(), obj.keyboard.GetPrice(), obj.keyboard.GetRGB_Backlight()),
	flashDrive(obj.flashDrive),
	computerMouse(obj.computerMouse) {

	// Laptop
	company = new char[strlen(obj.company) + 1];
	strcpy_s(this->company, strlen(obj.company) + 1, obj.company);

	model = new char[strlen(obj.model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);

	color = new char[strlen(obj.color) + 1];
	strcpy_s(color, strlen(obj.color) + 1, obj.color);

	price = obj.price;
}


void Laptop::Input() {
	char buff[100];
	int TempPrice = 0;

	// Процессор
	cout << "Ввод данных о процессоре: " << endl;
	cpu.Input();
	cout << endl << endl;

	// Видео-карта
	cout << "Ввод данных о видео-карте: " << endl;
	gpu.Input();
	cout << endl << endl;

	// ОЗУ
	cout << "Ввод данных о ОЗУ: " << endl;
	ram.Input();
	cout << endl << endl;

	// Твёрдотельный накопитель
	cout << "Ввод данных о SSD: " << endl;
	ssd.Input();
	cout << endl << endl;

	// Тачпад
	cout << "Ввод данных о тачпаде: " << endl;
	touchpad.Input();
	cout << endl << endl;

	// Монитор
	cout << "Ввод данных о мониторе: " << endl;
	monitor.Input();
	cout << endl << endl;

	// USB флешка
	cout << "Ввод данных о USB флешке: " << endl;
	flashDrive->Input();
	cout << endl << endl;

	// Компьютерная мышь
	cout << "Ввод данных о Компьютерной мыши: " << endl;
	computerMouse->Input();
	cout << endl << endl;

	// Компания
	cout << "Введите компанию: ";
	cin >> buff;
	if (company != nullptr) {
		cout << "Delate company -> " << company << endl << endl;
		delete[] company;
	}
	company = new char[strlen(buff) + 1];
	strcpy_s(company, strlen(buff) + 1, buff);


	// Модель
	cout << "Введите модель: ";
	cin >> buff;
	if (model != nullptr) {
		cout << "Delate model -> " << model << endl << endl;
		delete[] model;
	}
	model = new char[strlen(buff) + 1];
	strcpy_s(model, strlen(buff) + 1, buff);

	// Цвет
	cout << "Введите цвет: ";
	cin >> buff;
	if (color != nullptr) {
		cout << "Delate color -> " << color << endl << endl;
		delete[] color;
	}
	color = new char[strlen(buff) + 1];
	strcpy_s(color, strlen(buff) + 1, buff);

	// Цена
	TempPrice += cpu.GetPrice();
	TempPrice += gpu.GetPrice();
	TempPrice += ram.GetPrice();
	TempPrice += ssd.GetPrice();

	price = TempPrice;
}
void Laptop::InputCPU() { cpu.Input(); }
void Laptop::InputGPU() { gpu.Input(); }
void Laptop::InputRAM() { ram.Input(); }
void Laptop::InputSSD() { ssd.Input(); }
void Laptop::InputTouchpad() { touchpad.Input(); }
void Laptop::InputMonitor() { monitor.Input(); }
void Laptop::InputKeyboard() { keyboard.Input(); }
void Laptop::InputFlashDrive() { flashDrive->Input(); }
void Laptop::InputComputerMouse() { computerMouse->Input(); }


void Laptop::Print() const {
	cout << "Компания: " << company << endl;
	cout << "Модель: " << model << endl;
	cout << "Цвет: " << color << endl;
	cout << "Цена: " << price << endl;
}
void Laptop::FullPrint() const {
	cout << "Ноутбук: " << endl;
	cout << "Компания: " << company << endl;
	cout << "Модель: " << model << endl;
	cout << "Цвет: " << color << endl;
	cout << endl;

	cout << "Процессор: " << endl;
	cpu.Print();
	cout << endl;

	cout << "Видео-карта: " << endl;
	gpu.Print();
	cout << endl;

	cout << "ОЗУ: " << endl;
	ram.Print();
	cout << endl;

	cout << "SSD-накопитель: " << endl;
	ssd.Print();
	cout << endl;

	cout << "Тачпад: " << endl;
	touchpad.Print();
	cout << endl;

	cout << "Монитор: " << endl;
	monitor.Print();
	cout << endl;

	cout << "Клавиатура: " << endl;
	keyboard.Print();
	cout << endl;

	cout << "USB флешка: " << endl;
	flashDrive->Print();
	cout << endl;

	cout << "Компьютерная мышь: " << endl;
	computerMouse->Print();
	cout << endl;

	cout << "Цена ноутбука: " << price << endl;
}
void Laptop::PrintInfoNumberOfLaptops() const {
	cout << "Кол-во ноутбуков: " << numberOfLaptops << endl;
}
void Laptop::PrintCPU() const { cpu.Print(); }
void Laptop::PrintGPU() const { gpu.Print(); }
void Laptop::PrintRAM() const { ram.Print(); }
void Laptop::PrintSSD() const { ssd.Print(); }
void Laptop::PrintTouchpad() const { touchpad.Print(); }
void Laptop::PrintMonitor() const { monitor.Print(); }
void Laptop::PrintKeyboard() const { keyboard.Print(); }
void Laptop::PrintFlashDrive() const { flashDrive->Print(); }
void Laptop::PrintComputerMouse() const { computerMouse->Print(); }


// Аксессоры
// Геттеры
char* Laptop::GetCompany() const { return company; }
char* Laptop::GetModel() const { return model; }
char* Laptop::GetColor() const { return color; }
int Laptop::GetPrice() const { return price; }


// Сеттеры
void Laptop::SetCompany(const char* cp) {
	if (cp != nullptr) {
		cout << "Delate company -> " << this->company << endl;
	}

	company = new char[strlen(cp) + 1];
	strcpy_s(company, strlen(cp) + 1, cp);
}
void Laptop::SetModel(const char* md) {
	if (md != nullptr) {
		cout << "Delate model -> " << this->model << endl;
	}

	model = new char[strlen(md) + 1];
	strcpy_s(model, strlen(md) + 1, md);
}
void Laptop::SetColor(const char* cl) {
	if (cl != nullptr) {
		cout << "Delate color -> " << this->color << endl;
	}

	color = new char[strlen(cl) + 1];
	strcpy_s(color, strlen(cl) + 1, cl);
}
void Laptop::SetPrice(int pr) {
	price = pr;
}
