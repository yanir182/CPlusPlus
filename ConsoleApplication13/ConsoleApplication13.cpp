#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    short int chislo[10], a=0;
    
    for (int b = 0; b<10; b++)
    {
        cout << "Введите число в масив\n";
        cin >> chislo[b];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << chislo[i];
    }
}