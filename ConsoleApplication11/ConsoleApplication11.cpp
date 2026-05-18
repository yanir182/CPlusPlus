#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    int a;
    cout << "Введите высоту\n";
    cin >> a;
    for (int i=0; i <= a; i++)
    {
        for (int j=0; j <= a; j++)
        {
            if (i + j >= a && i >= j)
                cout << "^";
            else
                cout << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}