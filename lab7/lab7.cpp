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
	/*cout << "1)" << endl;
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
	*/
	/*cout << ("Лабораторная 8:\n\n");
	cout << ("=========\nМодифицировать ваши проекты на С++, C# и Java путем добавления в один из классов\nкак минимум одного статического поля и одного статического метода.\n=========\n\n");

	cout << ("(Использовались статический член класса\'Like\' \'lastLike\'и\nстатические методы класса \'NewL\' и \'reprint\')\n\n");

	
	// Формирование объектов класса Like:
	Like A(2);
	Like B(3);
	Like C(4);
	Like D(5);

	cout << ("Вызов статической компанентной функции: \'Новый список\'\n\n");
	Like::NewL();

	cout << ("Вызов статической компанентной функции: \'Напечатать список\'\n\n");
	// Вызов статической компанентной функции:
	Like::reprint();

	cout << ("\n\nДобавление элементов в список.\n\n");
	// Включение созданных компанентов в двусвязанный список:
	A.Add(); B.Add(); C.Add(); D.Add();

	cout << ("Вызов статической компанентной функции: \'Напечатать список\'\n\n");
	cout << ("===================================\n");
	// Печать в обратном порядке значений элементов списка:
	Like::reprint();
	cout << ("\n===================================\n");
	*/
	Account account1;
	Account account2("John");
	Account account3("Anton", "Petrov", "Petrov22@gmail.com", "111222333");

	Account* account4 = new Account();
	Account* account5 = new Account("Artur");
	Account* account6 = new Account("Nikolay", "Ivanov", "NikolayIvanov@yandex.ru", "123");

	cout << "Лабораторная 9" << endl;
	cout << "" << endl;
	cout << "Конструкторы класса Account для статических объектов:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	account1.OutputAccount();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	account2.OutputAccount();
	cout << "3) Конструктор с параметрами:" << endl;
	account3.OutputAccount();
	cout << "" << endl;
	cout << "Конструкторы класса Account для динамических объектов:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	account4->OutputAccount();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	account5->OutputAccount();
	cout << "3) Конструктор с параметрами:" << endl;
	account6->OutputAccount();
	cout << "\n\n" << endl;

	Figure figure1;
	Figure figure2(1);
	Figure figure3(2, 3);

	Figure* figure4 = new Figure();
	Figure* figure5 = new Figure(3);
	Figure* figure6 = new Figure(3, 1);

	cout << "\n\nЛабораторная 9" << endl;
	cout << "" << endl;
	cout << "Конструкторы класса Figure для статических объектов:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	figure1.OutputFigure();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	figure2.OutputFigure();
	cout << "3) Конструктор с параметрами:" << endl;
	figure3.OutputFigure();
	cout << "" << endl;
	cout << "Конструкторы класса Figure для динамических объектов:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	figure4->OutputFigure();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	figure5->OutputFigure();
	cout << "3) Конструктор с параметрами:" << endl;
	figure6->OutputFigure();
	cout << "\n\n" << endl;
	
	Friends friend1;
	Friends friend2("Egor");
	Friends friend3("Gloria", "Jean");

	Friends* friend4 = new Friends();
	Friends* friend5 = new Friends("Timur");
	Friends* friend6 = new Friends("Evangilion", "Tabuev");

	cout << "\n\nЛабораторная 9" << endl;
	cout << "" << endl;
	cout << "Конструкторы класса Friends для статических объектов:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	friend1.OutputFriends();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	friend2.OutputFriends();
	cout << "3) Конструктор с параметрами:" << endl;
	friend3.OutputFriends();
	cout << "" << endl;
	cout << "Конструкторы класса Friends для динамических объектов:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	friend4->OutputFriends();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	friend5->OutputFriends();
	cout << "3) Конструктор с параметрами:" << endl;
	friend6->OutputFriends();
	cout << "\n\n" << endl;

	Music music1;
	Music music2("Not Afraid");
	Music music3("Here We Go", "Eminem");

	Music* music4 = new Music();
	Music* music5 = new Music("Sorry");
	Music* music6 = new Music("Somebody To Love", "Queen");

	cout << "\n\nЛабораторная 9" << endl;
	cout << "" << endl;
	cout << "Конструкторы класса Music для статических объектов:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	music1.OutputMusic();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	music2.OutputMusic();
	cout << "3) Конструктор с параметрами:" << endl;
	music3.OutputMusic();
	cout << "" << endl;
	cout << "Конструкторы класса Music для динамических объектов:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	music4->OutputMusic();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	music5->OutputMusic();
	cout << "3) Конструктор с параметрами:" << endl;
	music6->OutputMusic();
	cout << "\n\n" << endl;

	Messages message1;
	Messages message2("John Lennon");
	Messages message3("My mother", "Son", "Hi, Mom");

	Messages* message4 = new Messages();
	Messages* message5 = new Messages("Nikolay Krasnov");
	Messages* message6 = new Messages("My teacher", "Student", "Good morning!");

	cout << "\n\nЛабораторная 9" << endl;
	cout << "" << endl;
	cout << "Конструкторы класса Messages для статических объектов:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	message1.OutputMessages();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	message2.OutputMessages();
	cout << "3) Конструктор с параметрами:" << endl;
	message3.OutputMessages();
	cout << "" << endl;
	cout << "Конструкторы класса Messages для динамических объектов:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	message4->OutputMessages();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	message5->OutputMessages();
	cout << "3) Конструктор с параметрами:" << endl;
	message6->OutputMessages();
	cout << "\n\n" << endl;

	Like like1, like2(2);
	Like* like3 = new Like(), * like4 = new Like(4);

	cout << "\n\nЛабораторная 9" << endl;
	cout << "" << endl;
	cout << "Конструкторы класса Like для статичечких объектов:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	like1.Displayamount();
	cout << "2) Конструктор с 1-им параметром, он же с параметрами:" << endl;
	like2.Displayamount();

	cout << "" << endl;
	cout << "Конструкторы класса Like для динамических объектов:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	like3->Displayamount();
	cout << "2) Конструктор с 1-им параметром, он же с параметрами:" << endl;
	like4->Displayamount();
	cout << "\n\n" << endl;
	
	cout << "\n\nЛабораторная 9" << endl;
	cout << "" << endl;
	Friends friends[3];
	for (int j = 0; j < 3; j++)
		friends[j] = Friends("Ivanov" + to_string(j + 1));
	cout << ("Инициализировать небольшой массив конструктором с одним параметром:") << endl;
	for (int j = 0; j < 3; j++)
		friends[j].OutputFriends();
	cout << ("\n\n") << endl;

	cout << ("Продемонстрировать различие между мелким и глубоким копированием:") << endl;

	

	Figure FigureTestCopy1 = Figure(1,2), FigureTestCopy2 = Figure(2, 3);


	cout << "\n\nЛабораторная 9" << endl;
	cout << ("") << endl;
	FigureTestCopy1 = FigureTestCopy2;

	cout << ("Поверхностная копия 1-го объекта во 2-ой для класса \'Figure\':") << endl;
	cout << ("") << endl;
	FigureTestCopy1.OutputFigure();
	cout << ("") << endl;
	FigureTestCopy2.OutputFigure();
	cout << ("") << endl;
	cout << ("Изменение 1-го объекта, а 2-ой не трогается:") << endl;
	FigureTestCopy1.Setfigure(2);
	FigureTestCopy1.Setcolor(3);
	cout << ("") << endl;
	FigureTestCopy1.OutputFigure();
	cout << ("") << endl;
	FigureTestCopy2.OutputFigure();
	cout << ("") << endl;

	Friends FriendsTestCopy1 = Friends("Anton", "Ivanov"), FriendsTestCopy2 = Friends("Yuriy", "Rudak");
	//FriendsTestCopy1.Set("4В", "2013", masStud, 2);
	FriendsTestCopy2 = FriendsTestCopy1;

	cout << ("Глубокая копия 1-го объекта во 2-ой для класса \'Friends\' с помощью перегрузки оператора \'=\':") << endl;
	cout << ("") << endl;
	FriendsTestCopy1.OutputFriends();
	cout << ("") << endl;
	FriendsTestCopy2.OutputFriends();
	cout << ("") << endl;
	cout << ("Изменение 1-го объекта, а 2-ой не трогается:") << endl;
	FriendsTestCopy1.Setname("Andrey");
	cout << ("") << endl;
	FriendsTestCopy1.OutputFriends();
	cout << ("") << endl;
	FriendsTestCopy2.OutputFriends();
	cout << ("\n\n") << endl;

}