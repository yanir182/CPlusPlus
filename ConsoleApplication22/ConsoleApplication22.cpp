#include <iostream>
using namespace std;
int nikto(int a, int b)
{
    cout << a % b;
    return a % b;
}
double nikto(double a, double b)
{
    cout << a * b;
    return a * b;
}
double nikto(double a, double b, double c)
{
    cout<< (a + b) - c;
    return (a + b)-c;
}
int nikto(int a, int b, int c, int d)
{
    int sr;
    sr = (a + b + c + d) % 4;
    cout << sr;
    return sr;
}
void nikto(char mass[])
{
    for (int i = 0; i < 10; i++)
    {
        cout << mass[i] << endl;
    }
}
int main()
{
    setlocale(0,"ru");
    char mass1[] = "Даня лох ";
    nikto(mass1);
    cout << endl;
}