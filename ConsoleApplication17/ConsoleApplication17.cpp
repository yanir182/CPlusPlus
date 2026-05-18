#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    srand(time(NULL));
    const int x = 20;
    bool d;
    int chushka[x];
    for (int c = 0; c < 20; c++)
    {
        d = false;
        int a = rand() % 20;
        for (int j = 0; j < c; j++)
        {
            if (chushka[j] == a)
            {
                d = true;
                break;
            }
            if (d == false)
            {
                chushka[c] = d;

            }
        }
    }

    return 0;
}