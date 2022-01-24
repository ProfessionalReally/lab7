#include "Account.h"

Account::Account() //Конструктор
{
	name = ""; //Имя
	surname = ""; //Фамилия
	email = ""; //Почта
	password = ""; //Пароль
	FigureFigure = 0;
	FigureColor = 0;
	FriendsName = "";
	FriendsSurname = "";
	MusicTitle = "";
	MusicExecutor = "";
	MessagestoWhom = "";
	MessagesfromWhom = "";
	Messagesmessage = "";
	LikeAmount = 0;
}

// Функции получения данных из полей
string Account::GetfromWhom()
{
	return this->name;
}
string Account::GetsurfromWhom()
{
	return this->surname;
}
string Account::Getemail()
{
	return this->email;
}
string Account::Getpassword()
{
	return this->password;
}

void Account::InitAccount(string NAME, string SURNAME, string EMAIL, string PASSWORD) //Инициализация аккаунта
{
	this->name = NAME;
	this->surname = SURNAME;
	this->email = EMAIL;
	this->password = PASSWORD;
}

void Account::InputAccount() //Изменение данных о аккаунте
{
	printf_s("\nPlease enter a name: ");
	cin >> name;
	printf_s("\nPlease enter a surname: ");
	cin >> surname;
	printf_s("\nPlease enter a email: ");
	cin >> email;
	printf_s("\nPlease enter a password: ");
	cin >> password;
}

void Account::OutputAccount() //Вывод данных о аккаунте
{
	printf_s("\t\t\tACCOUNT\n");
	if ((name[0] == 0) && (surname[0] == 0) && (email[0] == 0) && (password[0] == 0))
	{
		printf_s("\nName: empty");
		printf_s("\nSurname: empty");
		printf_s("\nEmail: empty");
		printf_s("\nPassword: empty");
	}
	else
	{
		cout << "fromWhom: " << name << endl;
		cout << "SurfromWhom: " << surname << endl;
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
	
		if ((FriendsName[0] == 0) && (FriendsSurname[0] == 0))
		{
			printf_s("Your friend's name: Empty\n");
			printf_s("Your friend's surname: Empty\n");
		}
		else
		{
			cout << "Your friend's name: " << FriendsName << endl;
			cout << "Your friend's surname: " << FriendsSurname << endl;
		}
	
	printf_s("\n\t\t\tMUSIC\n");
		if ((MusicExecutor[0] == 0) && (MusicTitle[0] == 0))
		{
			printf_s("Empty - Empty\n");
		}
		else
		{
			cout << MusicExecutor << " - " << MusicTitle << endl;
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
	printf_s("\n\t\t\tLIKE\n");
	if (LikeAmount == 0)
	{
		printf_s("Amount likes: Empty\n");
	}
	else
	{
		cout << "Amount likes: " << LikeAmount << endl;
	}
	printf_s("\n");
}

void Account::DeleteAccount() //Удаление аккаунта
{
	this->name = "";
	this->surname = "";
	this->email = "";
	this->password = "";
	this->FigureFigure = 0;
	this->FigureColor = 0;
	this->FriendsName = "";
	this->FriendsSurname = "";
	this->MusicTitle = "";
	this->MusicExecutor = "";
	this->MessagestoWhom = "";
	this->MessagesfromWhom = "";
	this->Messagesmessage = "";
	this->LikeAmount = 0;
}

Account::~Account() //Деструктор
{
	;
}

// Дружественная функция обмена полями классов Account, Figure, Friends, Music, Messages, Like
void pushing(Account& account, Figure& figure, Friends& friends, Music& music, Messages& message, Like& like)
{
	account.FigureFigure = figure.figure;
	account.FigureColor = figure.color;
	account.FriendsName = friends.name;
	account.FriendsSurname = friends.surname;
	account.MusicExecutor = music.executor;
	account.MusicTitle = music.title;
	account.MessagesfromWhom = message.fromWhom;
	account.MessagestoWhom = message.toWhom;
	account.Messagesmessage = message.message;
	account.LikeAmount = like.amount;
}


