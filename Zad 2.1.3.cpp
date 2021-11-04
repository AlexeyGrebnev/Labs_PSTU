#include <iostream>
using namespace std;

int main()
{
    int const a = 10; // Инициализировать константу a равную 10
    int b = a*2; // Инициализировать b равную умноженной на два константе a 
    cout << a << endl; //Вывод a
    cout << b << endl; //Вывод b
    cout << --b << endl; //Вывод b-1 (операция декремента)
    return 0;
}