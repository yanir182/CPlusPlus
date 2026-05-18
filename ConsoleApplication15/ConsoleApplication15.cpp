#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    int mass[5];
    int sum = 0;
    for (int i = 0, x = 0; i<5; i++)
    {
        cout << "Введите число\n";
        cin >> mass[i];
    }
    for (int j = 0; j < 5; j++)
    {
        sum = mass[j] + sum;
        cout << "сумма= " << sum << endl;
    }
}