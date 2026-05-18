#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int a, b, summ=0;
    int z;
    const int size = 10;
    int mass[size];
    setlocale(0, "rus");
    cout << "Введите число в диапозон от:\n";
    cin >> a;
    srand(a);
    cout << "до\n";
    cin >> b;
    for (int i = 0; i < size; i++)
    {
        mass[i] = a + rand() % (b - a);
        cout << mass[i] << endl;
    }
    cout << "Ниже какого числа вы хотите просумировать\n";
    cin >> z;
    for (int j = 0; j < size; j++)
    {
        if (mass[j] < z)
        {
            summ = summ + mass[j];
        }
    }
    cout << "Сум= " << summ;
}