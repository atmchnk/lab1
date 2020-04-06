/*Завдання 3 аналогічне завданню 5.
  Додати, помножити, та поділити між собою два числа(типу signed int) так, щоб при виході за
  діапазон, програма друкувала помилку, а результат відповідно не виводився.*/

#include <iostream>
#include <limits>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251); //встановлення кодової сторінки win-cp 1251 до потік введення
    SetConsoleOutputCP(1251); //встановлення кодової сторінки win-cp 1251 до потік виведення
    setlocale(LC_ALL, "RUS");

	signed int a, b;
    cout << "Максимальне значення INT: " << INT_MAX << endl;
    cout << "Мінімальне значення INT: " << INT_MIN << endl;

    cout << "Введіть значення а: ";
    cin >> a;
    cout << "Введіть значення b: ";
    cin >> b;

    if (a > INT_MAX || b > INT_MAX || a < INT_MIN || b < INT_MIN)
    {
        cout << "Помилка: введіть інші значення a i b" << endl;
    }
    else
    {
        if (((a > 0) && (b > (INT_MAX - a))) || ((a < 0) && (b < (INT_MIN - a))) || 
            ((b > 0) && (a > (INT_MAX - b))) || ((b < 0) && (a < (INT_MIN - b))))
            cout << "Помилка: неможливо здійснити a + b" << endl;
        else
            cout << "a + b = " << (a + b) << endl;

        if ((a > 0 && ((b > 0 && a > (INT_MAX / b)) || b < (INT_MIN / a))) || 
           ((b > 0 && ((a > 0 && b > (INT_MAX / a)) || a < (INT_MIN / b))) ||
           ((a > 0 && b < (INT_MIN / a)) || (b != 0) && (a < (INT_MAX / b)))) ||
           ((b > 0 && a < (INT_MIN / b)) || (a != 0) && (b < (INT_MAX / a))))
            cout << "Помилка: неможливо здійснити a * b" << endl;
        else
            cout << "a * b = " << (a * b) << endl;

        if ((b == 0) || ((a == INT_MIN) && (b == -1)))
            cout << "Помилка: неможливо здійснити a / b" << endl;
        else
            cout << "a / b = " << (a / b) << endl;
    }
}