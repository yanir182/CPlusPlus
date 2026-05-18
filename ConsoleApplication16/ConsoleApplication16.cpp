#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b;
    double spam[]{-5.7,6,2,0,-4.7,6,8.1,-4, 0};
    for (int i = 0; i < 7;i++)
    {
        if (spam[i] < 0)
        {
            spam[i];
            a = spam[i];
            break;
        }
    }
    for(int j=7; j>0; j--)
    {
        if (spam[j] > 0)
        {
            spam[j];
            b = spam[j];
            break;
        }
    }
    cout << a << endl;
    cout << b << endl;
}