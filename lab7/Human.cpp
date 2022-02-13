#include "Human.h"

//Конструктор
Human::Human()
{
	surname = "";
	name = "";
}
//Конструктор с параметрами
Human::Human(string NAME, string SURNAME)
{
	surname = SURNAME;
	name = NAME;
}
// Установить фамилию
void Human::SetSurname(string SURNAME)
{
	surname = SURNAME;
}
// Установить имя
void Human::SetName(string NAME)
{
	name = NAME;
}
// Фун-ии получения данных из полей
string Human::GetSurname()
{
	return this->surname;
}
string Human::GetName()
{
	return this->name;
}

// Фун-ии получения данных из полей через ссылку
void Human::GetSurnameLink(string& SURNAME)
{
	SURNAME = this->surname;
}
void Human::GetNameLink(string& NAME)
{
	NAME = this->name;
}

// Деструктор
Human::~Human()
{
	;
}

// Инициализация класса Human
void Human::Set(string NAME, string SURNAME)
{
	this->name = NAME;
	this->surname = SURNAME;
}

// Ввод человека
void Human::InpHuman()
{
	printf_s("\nPlease enter a name: ");
	cin >> name;
	printf_s("\nPlease enter a surname: ");
	cin >> surname;
}
// Вывод на экран
void Human::DisplayInfo()
{
	cout << "Name and surname: " << name << " " << surname << endl;
}

// Виртуальная функция вывода сообщения на экран, кем является человек (неизвестный, пользователь, друг)
string Human::WhoIs()
{
	return "неизвестный";
}

//Сказать привет
void Human::SayHello()
{
	cout << WhoIs() << " говорит привет!" << endl;
}
