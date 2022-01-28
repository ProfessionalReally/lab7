#include "Messages.h"

Messages::Messages() //Конструктор
{
	toWhom = ""; //Кому сообщение
	fromWhom = ""; //От кого сообщение
	message = ""; //Текст сообщения
}

Messages::Messages(string TOWHOM) //Конструктор с одним параметром
{
	toWhom = TOWHOM; //Кому сообщение
	fromWhom = ""; //От кого сообщение
	message = ""; //Текст сообщения
}

Messages::Messages(string TOWHOM, string FROMWHOM, string MESSAGE) //Конструктор с параметрами
{
	toWhom = TOWHOM; //Кому сообщение
	fromWhom = FROMWHOM; //От кого сообщение
	message = MESSAGE; //Текст сообщения
}

void Messages::SettoWhom(string TOWHOM) //Установить кому сообщение
{
	toWhom = TOWHOM; //Кому сообщение
}

void Messages::SetfromWhom(string FROMWHOM) //Установить от кого сообщение
{
	fromWhom = FROMWHOM; //От кого сообщение
}

void Messages::Setmessage(string MESSAGE) //Установить текст сообщения
{
	message = MESSAGE; //Текст сообщения
}

// Функции получения данных из полей
string Messages::GettoWhom()
{
	return this->toWhom;
}

string Messages::GetfromWhom()
{
	return this->fromWhom;
}

string Messages::Getmessage()
{
	return this->message;
}
// Фун-ии получения данных из полей через ссылку
void Messages::GettoWhomLink(string& TOWHOM)
{
	TOWHOM = this->toWhom;
}

void Messages::GetfromWhomLink(string& FROMWHOM)
{
	FROMWHOM = this->fromWhom;
}

void Messages::GetmessageLink(string& MESSAGE)
{
	MESSAGE = this->message;
}

/*void Messages::InitMessages(string TOWHOM, string FROMWHOM, string MESSAGE) //Инициализация сообщения
{
	this->toWhom = TOWHOM;
	this->fromWhom = FROMWHOM;
	this->message = MESSAGE;
}*/

void Messages::InputMessages() //Изменение данных о сообщении
{
	printf_s("Please enter a to whom the message: ");
	cin >> toWhom;
	printf_s("Please enter a from whom the message: ");
	cin >> fromWhom;
	printf_s("Please enter a message: ");
	cin >> message;
}

void Messages::OutputMessages() //Вывод данных о сообщении
{
	if ((toWhom[0] == 0) && (fromWhom[0] == 0) && (message[0] == 0))
	{
		printf_s("To whom the message: Empty\n");
		printf_s("From whom the message: Empty\n");
		printf_s("Message: Empty\n");
	}
	else
	{
		cout << "To whom the message: " << toWhom << endl;
		cout << "From whom the message: " << fromWhom << endl;
		cout << "Message: " << message << endl;
	}
	printf_s("\n");
}

void Messages::DeleteMessages() //Удаление данных о сообщении
{
	this->toWhom = "";
	this->fromWhom = "";
	this->message = "";
}

Messages::~Messages() //Деструктор
{
	;
}