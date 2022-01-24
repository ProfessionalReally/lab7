#include "Account.h"
#include "Figure.h"
#include "Friends.h"
#include "Music.h"
#include "Messages.h"
#include "Like.h"
#include "string"
#include "Windows.h"
Like* Like::lastLike = NULL;
int main()
{
	
	setlocale(LC_ALL, "Russian");
	cout << "1)" << endl;
	cout << "=================================================================" << endl;
	cout << "Тест возврата значения из метода класса Messages через ссылку (&)" << endl;
	Messages messages[1];
	string t = "Ivan Ivanov"; //Кому сообщение
	string f = "Anton Petrov"; //От кого сообщение
	string m = "Hello!"; //Текст сообщения

	messages->InitMessages(t, f, m);

	string toWhom;  string& TOWHOM = toWhom;  messages[0].GettoWhomLink(TOWHOM);
	string fromWhom; string& FROMWHOM = fromWhom; messages[0].GetfromWhomLink(FROMWHOM);
	string message; string& MESSAGE = message; messages[0].GetmessageLink(MESSAGE);

	cout << TOWHOM << endl;
	cout << FROMWHOM << endl;
	cout << MESSAGE << endl;

	cout << "\n" << endl;

	cout << "Тест возврата значения из метода класса Figure через указатель (*)" << endl;
	Figure fig[1];
	int figure = 2;
	int color = 1;

	fig->InitFigure(figure, color);

	int* figure_p = new int;
	int* color_p = new int;
	fig[0].GetcolorL(color_p);
	fig[0].GetfigureL(figure_p);
	cout << *figure_p << endl;
	cout << *color_p << endl;

	cout << "\n2)" << endl;
	cout << "=================================================================" << endl;
	cout << "Тест списка оценок с использованием указателя \'this\'" << endl;

	// Формирование объектов класса Like:
	Like A(2);
	Like B(3);
	Like C(4);
	Like D(5);

	// Вызов статической компанентной функции:
 	Like::reprint();

	// Включение созданных компанентов в двусвязанный список:
	A.Add(); B.Add(); C.Add(); D.Add();

	// Печать в обратном порядке значений элементов списка:
	Like::reprint();

	cout << "\n\n3)" << endl;
	cout << "=================================================================" << endl;
	cout << "Дружественная функция передачи данных классу Account \n из Figure, Friends, Music, Messages, Like:\n" << endl;
	Account MyAccount;
	Figure MyFigure;
	Friends MyFriends;
	Music MyMusic;
	Messages MyMessages;
	Like MyLike;

	MyAccount.InitAccount("Anton", "Petrov", "Petrov22@gmail.com", "111222333");

	MyAccount.OutputAccount();

	cout << "\n\nПередача данных:\n" << endl;
	MyFigure.InitFigure(2, 1);
	MyFriends.InitFriends("Ivan", "Ivanov");
	MyMusic.MUSICinit("Kukushka","Choi");
	MyMessages.InitMessages("Ivan Ivanov", "Anton Petrov", "Hello!");
	MyLike.Set(5);

	pushing(MyAccount, MyFigure, MyFriends, MyMusic, MyMessages, MyLike);

	MyAccount.OutputAccount();

	cout << "4)" << endl;
	cout << "=================================================================" << endl;
	cout << "Перегрузка оператора \'+\' для класса Like" << endl;
	Like likePoor(2);
	likePoor.Displayamount();
	cout << "Прибавим 2 лайка:" << endl;
	likePoor = likePoor + 2;
	likePoor.Displayamount();
	cout << "\n" << endl;
	cout << "Перегрузка оператора \'++\' (два варианта, префиксный и постфиксный) \n для класса Like" << endl;
	likePoor.Set(2);
	likePoor.Displayamount();
	cout << endl;
	cout << "Использование оператора \'++\' (префиксный):" << endl;
	++likePoor;
	likePoor.Displayamount();
	cout << endl;
	cout << "Использование оператора \'++\' (постфиксный):" << endl;
	likePoor++;
	likePoor.Displayamount();

	cout << "5)" << endl;
	cout << "=================================================================" << endl;
	cout << "Заменить массивы char на std::string, продемонстрировать работу с этим классом" << endl;
	cout << "Тест ввода в переменную типа std::string на примере ввода друга:" << endl;
	MyFriends.InputFriends();
	MyFriends.OutputFriends();

}