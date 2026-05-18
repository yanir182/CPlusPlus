#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "rus");
    int summ = 0;
    int mass[3][3];
for (int a = 0; a < 3; a++) 
{
        
    for (int b = 0; b < 3; b++) 
    {
        cout << "Введите число для строки " << a + 1 << " и столбца " << b + 1 << ": ";
        cin >> mass[a][b];
    }
        cout << endl;
    }
for (int a = 0; a < 3; a++)
{
    for (int b = 0; b < 3; b++)
    {
        cout << mass[a][b] << " ";
    }
    cout << endl;
}
for (int a = 0; a < 3; a++)
{
    for (int b = 0; b < 3; b++)
    {
        summ += mass[b][a];
    }
    cout << "Сумма в строке равна " << summ << endl;
    summ = 0;
}
    cout << endl;
}