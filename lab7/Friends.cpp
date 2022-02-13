#include "Friends.h"

Friends::Friends() //Конструктор
{
	name = ""; //Имя
	surname = ""; //Фамилия
}

Friends::Friends(string NAME) : Human(NAME, "") //Констуктор с одним параметром
{
	name = NAME; //Имя
	surname = ""; //Фамилия
}

Friends::Friends(string NAME, string SURNAME) : Human(NAME, SURNAME) //Конструктор с параметрами
{
	name = NAME; //Имя
	surname = SURNAME; //Фамилия
}

//Конструктор копии
Friends::Friends(const Friends& Friend)
{
	// Поверхностное копирование, т.к. это не указатель
	name = Friend.name;

	// Поверхностное копирование, т.к. это не указатель
	surname = Friend.surname;
}

// Перегрузка функции присваивания
Friends& Friends::operator=(const Friends& Friend)
{
	// Проверка на самоприсваивание
	if (this == &Friend)
		return *this;

	name = Friend.name;

	surname = Friend.surname;

	return *this;

}

/*void Friends::Setname(string NAME) //Установить имя
{
	name = NAME; //Имя
}

void Friends::Setsurname(string SURNAME) //Установить фамилию
{
	surname = SURNAME; //Фамилия
}*/

// Функции получения данных из полей
/*string Friends::Getname()
{
	return this->name;
}

string Friends::Getsurname()
{
	return this->surname;
}*/

/*void Friends::InitFriends(string NAME, string SURNAME) //Инициализация друзей
{
	this->name = NAME;
	this->surname = SURNAME;
}*/

void Friends::InputFriends() //Изменение данных о друзьях
{
	//printf_s("\nPlease enter your friend's name: ");
	//cin >> name;
	//printf_s("\nPlease enter your friend's surname: ");
	//cin >> surname;
	Human::InpHuman();
}

void Friends::OutputFriends() //Вывод данных о друзьях
{
	//Human::DisplayInfo();
	if ((name[0] == 0) && (surname[0] == 0))
	{
		printf_s("Your friend's name: Empty\n");
		printf_s("Your friend's surname: Empty\n");
	}
	else
	{
		cout << "Your friend's name: " << name << endl;
		cout << "Your friend's surname: " << surname << endl;
	}
	printf_s("\n");
}

/*void Friends::DeleteFriends() //Удаление друзей
{
	this->name = "";
	this->surname = "";
}*/

// Виртуальная функция вывода сообщения на экран, кем является человек (неизвестный, пользователь, друг)
string Friends::WhoIs()
{
	return "друг";
}

// Перегрузка оператора '=' (Friends = Persone)
Friends& Friends::operator=(Human & human) 
{
	this->name = human.GetName();
	this->surname = human.GetSurname();

	return *this;
}

// Расширение действий оператора <<
std::ostream& operator<< (std::ostream& out, const Friends& Friend)
{
	// Поскольку operator<< является другом класса Friends, то мы имеем прямой доступ к членам Friends
	out << "Name and Surname: " << Friend.name << " " << Friend.surname;

	return out;
}

Friends::~Friends() //Деструктор
{
	;
}