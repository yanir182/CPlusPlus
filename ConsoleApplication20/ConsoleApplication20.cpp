#include <iostream>
using namespace std;
void star (int a)
{
    cout << "***\n";
}
void body (int a)
{
    cout << "*" << " " << "*\n";
}
int main()
{
    setlocale(0, "rus");
    star(1);
    body(1); 
    body(1);
    body(1);
    star(1);
    return 0;
}