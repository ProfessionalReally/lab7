#include "Music.h"

Music::Music() //Конструктор
{
	title = ""; //Название
	executor = ""; //Исполнитель
}

// Функции получения данных из полей
string Music::Gettitle()
{
	return this->title;
}

string Music::Getexecutor()
{
	return this->executor;
}

void Music::MUSICinit(string EXECUTOR, string TITLE) //Инициализация музыки
{
	this->executor = EXECUTOR;
	this->title = TITLE;
}

void Music::MUSICinput() //Изменение данных о музыке
{
	printf_s("Please enter a executor: ");
	cin >> executor;
	printf_s("Please enter a title: ");
	cin >> title;
}

void Music::OutputMusic() //Вывод данных о музыке
{
	if ((executor[0] == 0) && (title[0] == 0))
	{
		printf_s("Empty - Empty");
	}
	else
	{
		cout << executor << " - " << title << endl;
	}
	printf_s("\n");
}

void Music::DeleteMusic() //Удаление музыки
{
	this->title = "";
	this->executor = "";
}

Music::~Music() //Деструктор
{
	;
}