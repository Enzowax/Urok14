#include <windows.h>
#include <iostream>
using namespace std;

void Kalk(string name, float a)
{
    cout << name << " " << a << endl;
}

float _SUM(float a, float b)
{
    return a + b;
}

float _SUB(float a, float b)
{
    return a - b;
}

float _MUL(float a, float b)
{
    return a * b;
}

float _DIV(float a, float b)
{
    if (b != 0)
        return a / b;
    else {
        cout << "Ошибка: деление на ноль!" << endl;
        return 0;
    }
}

void checkSign(float num)
{
    if (num > 0)
        cout << num << " — положительное число." << endl;
    else if (num < 0)
        cout << num << " — отрицательное число." << endl;
    else
        cout << num << " — это ноль." << endl;
}

float average(float a, float b)
{
    return (a + b) / 2;
}

void checkEvenOdd(int num)
{
    if (num % 2 == 0)
        cout << num << " — четное число." << endl;
    else
        cout << num << " — нечетное число." << endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Kalk("Сумма = ", _SUM(2.8, 3.3));

    Kalk("Разность = ", _SUB(10, 4));

    Kalk("Произведение = ", _MUL(7, 3));

    Kalk("Частное = ", _DIV(10, 2));
    Kalk("Деление на ноль = ", _DIV(10, 0));

    checkSign(5.7);
    checkSign(-3.5);
    checkSign(0);

    Kalk("Среднее = ", average(10, 20));

    checkEvenOdd(10);
    checkEvenOdd(7);

    return 0;
}
