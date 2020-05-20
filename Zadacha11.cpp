#include <iostream>
#include <cstdlib> 
using namespace std;// без этой строки не работает

int main() {
    long b, a;
    setlocale(LC_ALL, "Russian");
    cout << "Введите первое число  ";
    cin >> a;
    cout << "Введите второе число  ";
    cin >> b;

    while (b != a)
    {
        if (b > a)
        {
            b = b - a;
        }
        else
        {
            a = a - b;
        }
    }
    cout << "Наибольший общий делитель =  ";
    cout << b;
}