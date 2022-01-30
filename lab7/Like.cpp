#include "Like.h"
// �����������
Like::Like()
{
    amount = 0;
}

// �����������
Like::Like(int AMOUNT)
{
    this->amount = 0;
    if (IsRightLike(AMOUNT))
        this->amount = AMOUNT;

}

void Like::Setamount(int AMOUNT) //���������� ���������� ������
{
    this->amount = 0;
    if (IsRightLike(AMOUNT))
        this->amount = AMOUNT;
}

// ������������� ��������� 
/*void Like::Set(int v)
{
    amount = v;
}*/

// ��������� ����������
int Like::Get()
{
    return this->amount;
}

// ���� ������ � ��������� 
void Like::InpLike()
{
    string Lik;
    cout << "Please enter a amount likes: ";
    cin >> Lik;
    try                                                 // ���� ���������� ������ ����� ����� � ���������� �� � ��������������� ���������� catch          
    {
        for (int i = 0; i < Lik.length(); i++) 
        {
            if ((Lik[i] < '0') || (Lik[i] > '9'))
                throw "It string is not number!";       // ������������� ���������� ���� const char*
        }
        Setamount(stoi(Lik));
    }
    catch (const char* exception)                       // ���������� ���������� ���� const char*
    {
        std::cerr << "Error: " << exception << '\n';
    }
    cout << endl;
}

// �������� ����� �� ���������� ��� ������
bool Like::IsRightLike(int like)
{
    bool res = true;
    try                                     // ���� ���������� ������ ����� ����� � ���������� �� � ��������������� ���������� catch
    {
        if (like < 0)          // ���� ������������ ���� �������� �����, �� ������������� ����������
            throw "Incorrect amount.";       // ������������� ���������� ���� const char*
    }
    catch (const char* exception)           // ���������� ���������� ���� const char*
    {
        std::cerr << "Error: " << exception << '\n';
        res = false;
        return res;
    }
    return res;
}


// ����� ������ �� ���������
void Like::Displayamount()
{
    cout << "Amount likes: " << amount << endl;

}


// ���������� �������� � ����� ������
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

// ����� �� ������� ����������� ������
void Like::reprint(void)
{
    Like* uk;   // ��������������� ���������
    uk = lastLike;
    if (uk == NULL)
    {
        cout << "List is empty!";
        return;
    }
    else
        cout << "\nList content :\n";

    // ���� ������ � �������� ������� �������� ��������� ������:
    while (uk != NULL)
    {
        cout << uk->amount << '\t';
        uk = uk->prev;
    }
}

// �������� ������ ������
void Like::NewL()
{
    lastLike = NULL;
}

// ����������
Like::~Like()
{
    ;
}

// ���������� ��������� '+' (Like + int)
Like operator+(const Like& like, int AMOUNT)
{
        return Like(like.amount + AMOUNT);
}

// ���������� ����������� ��������� '++'
Like& Like::operator++()
{
    amount += 1;
    return *this;
}
// ���������� ������������ ��������� '++'
Like Like::operator++ (int)
{
    Like m1 = *this;
    ++* this;
    return m1;
}
