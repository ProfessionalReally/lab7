#include "Like.h"
// Конструктор
Like::Like()
{
    amount = 0;
}

// Конструктор
Like::Like(int AMOUNT)
{
    this->amount = 0;
    if (IsRightLike(AMOUNT))
        this->amount = AMOUNT;

}

void Like::Setamount(int AMOUNT) //Установить количество оценок
{
    this->amount = 0;
    if (IsRightLike(AMOUNT))
        this->amount = AMOUNT;
}

// Инициализация структуры 
/*void Like::Set(int v)
{
    amount = v;
}*/

// Получение количества
int Like::Get()
{
    return this->amount;
}

// Ввод данных в структуру 
void Like::InpLike()
{
    string Lik;
    cout << "Please enter a amount likes: ";
    cin >> Lik;
    try                                                 // ищем исключения внутри этого блока и отправляем их в соответствующий обработчик catch          
    {
        for (int i = 0; i < Lik.length(); i++) 
        {
            if ((Lik[i] < '0') || (Lik[i] > '9'))
                throw "It string is not number!";       // выбрасывается исключение типа const char*
        }
        Setamount(stoi(Lik));
    }
    catch (const char* exception)                       // обработчик исключений типа const char*
    {
        std::cerr << "Error: " << exception << '\n';
    }
    cout << endl;
}

// Проверка числа на подходящее для оценки
bool Like::IsRightLike(int like)
{
    bool res = true;
    try                                     // ищем исключения внутри этого блока и отправляем их в соответствующий обработчик catch
    {
        if (like < 0)          // Если пользователь ввел неверное число, то выбрасывается исключение
            throw "Incorrect amount.";       // выбрасывается исключение типа const char*
    }
    catch (const char* exception)           // обработчик исключений типа const char*
    {
        std::cerr << "Error: " << exception << '\n';
        res = false;
        return res;
    }
    return res;
}


// Вывод данных из структуры
void Like::Displayamount()
{
    cout << "Amount likes: " << amount << endl;

}


// Добавление элемента в конец списка
void Like::Add(void)
{
    if (lastLike == NULL)
        this->prev = NULL;
    else
    {
        lastLike->next = this;
        prev = lastLike;
    }
    lastLike = this;
    this->next = NULL;
}

// Вывод на дисплей содержимого списка
void Like::reprint(void)
{
    Like* uk;   // Вспомогательный указатель
    uk = lastLike;
    if (uk == NULL)
    {
        cout << "List is empty!";
        return;
    }
    else
        cout << "\nList content :\n";

    // Цикл печати в обратном порядке значений элементов списка:
    while (uk != NULL)
    {
        cout << uk->amount << '\t';
        uk = uk->prev;
    }
}

// Создание нового списка
void Like::NewL()
{
    lastLike = NULL;
}

// Деструктор
Like::~Like()
{
    ;
}

// Перегрузка оператора '+' (Like + int)
Like operator+(const Like& like, int AMOUNT)
{
        return Like(like.amount + AMOUNT);
}

// Перегрузка префиксного оператора '++'
Like& Like::operator++()
{
    amount += 1;
    return *this;
}
// Перегрузка постфиксного оператора '++'
Like Like::operator++ (int)
{
    Like m1 = *this;
    ++* this;
    return m1;
}
