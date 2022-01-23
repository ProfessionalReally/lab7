#include "Account.h"

Account::Account() //Конструктор
{
	fromWhom = ""; //Имя
	surfromWhom = ""; //Фамилия
	email = ""; //Почта
	password = ""; //Пароль
	FigureFigure = 0;
	FigureColor = 0;
	for (int i = 0; i < 2; i++)
	{
		FriendsfromWhom[i] = "";
		FriendsSurfromWhom[i] = "";
		MusicTitle[i] = "";
		MusicExecutor[i] = "";
	}
	MessagestoWhom = "";
	MessagesfromWhom = "";
	Messagesmessage = "";
}

// Функции получения данных из полей
string Account::GetfromWhom()
{
	return this->fromWhom;
}
string Account::GetsurfromWhom()
{
	return this->surfromWhom;
}
string Account::Getemail()
{
	return this->email;
}
string Account::Getpassword()
{
	return this->password;
}

void Account::InitAccount(string fromWhom, string SURfromWhom, string EMAIL, string PASSWORD) //Инициализация аккаунта
{
	this->fromWhom = fromWhom;
	this->surfromWhom = SURfromWhom;
	this->email = EMAIL;
	this->password = PASSWORD;
}

void Account::InputAccount() //Изменение данных о аккаунте
{
	printf_s("\nPlease enter a fromWhom: ");
	cin >> fromWhom;
	printf_s("\nPlease enter a surfromWhom: ");
	cin >> surfromWhom;
	printf_s("\nPlease enter a email: ");
	cin >> email;
	printf_s("\nPlease enter a password: ");
	cin >> password;
}

void Account::OutputAccount() //Вывод данных о аккаунте
{
	printf_s("\t\t\tACCOUNT\n");
	if ((fromWhom[0] == 0) && (surfromWhom[0] == 0) && (email[0] == 0) && (password[0] == 0))
	{
		printf_s("\nfromWhom: empty");
		printf_s("\nSurfromWhom: empty");
		printf_s("\nEmail: empty");
		printf_s("\nPassword: empty");
	}
	else
	{
		cout << "fromWhom: " << fromWhom << endl;
		cout << "SurfromWhom: " << surfromWhom << endl;
		cout << "Email: " << email << endl;
		cout << "Password: " << password << endl;
	}
	printf_s("\n\t\t\tFIGURE\n");
	if (FigureFigure == 0)
		printf_s("Figure: Empty\n");
	if (FigureFigure == 1)
		printf_s("Figure: Triangle\n");
	if (FigureFigure == 2)
		printf_s("Figure: Circle\n");
	if (FigureFigure == 3)
		printf_s("Figure: Square\n");
	if (FigureColor == 0)
		printf_s("Color: Empty\n");
	if (FigureColor == 1)
		printf_s("Color: Red\n");
	if (FigureColor == 2)
		printf_s("Color: Green\n");
	if (FigureColor == 3)
		printf_s("Color: Blue\n");
	printf_s("\n\t\t\tFRIENDS\n");
	for (int i = 0; i < 2; i++)
	{
		if ((FriendsfromWhom[i][0] == 0) && (FriendsSurfromWhom[i][0] == 0))
		{
			printf_s("%d\n", i + 1);
			printf_s("Your friend's fromWhom: Empty\n");
			printf_s("Your friend's surfromWhom: Empty\n");
		}
		else
		{
			printf_s("%d\n", i + 1);
			cout << "Your friend's fromWhom: " << FriendsfromWhom[i] << endl;
			cout << "Your friend's surfromWhom: " << FriendsSurfromWhom[i] << endl;
		}
	}
	printf_s("\n\t\t\tMUSIC\n");
	for (int i = 0; i < 2; i++)
	{
		if ((MusicExecutor[i][0] == 0) && (MusicTitle[i][0] == 0))
		{
			printf_s("%d\n", i + 1);
			printf_s("Empty - Empty\n");
		}
		else
		{
			printf_s("%d\n", i + 1);
			cout << MusicExecutor[i] << " - " << MusicTitle[i] << endl;
		}
	}
	printf_s("\n\t\t\tMESSAGES\n");
	if ((MessagestoWhom[0] == 0) && (MessagesfromWhom[0] == 0) && (Messagesmessage[0] == 0))
	{
		printf_s("To whom the message: Empty\n");
		printf_s("From whom the message: Empty\n");
		printf_s("Message: Empty\n");
	}
	else
	{
		cout << "To whom the message: " << MessagestoWhom << endl;
		cout << "From whom the message: " << MessagesfromWhom << endl;
		cout << "Message: " << Messagesmessage << endl;
	}
	printf_s("\n");
}

void Account::DeleteAccount() //Удаление аккаунта
{

	this->fromWhom = "";
	this->surfromWhom = "";
	this->email = "";
	this->password = "";
	this->FigureFigure = 0;
	this->FigureColor = 0;
	for (int i = 0; i < 2; i++)
	{
		this->FriendsfromWhom[i] = "";
		this->FriendsSurfromWhom[i] = "";
		this->MusicTitle[i] = "";
		this->MusicExecutor[i] = "";
	}
	this->MessagestoWhom = "";
	this->MessagesfromWhom = "";
	this->Messagesmessage = "";
}

Account::~Account() //Деструктор
{
	;
}