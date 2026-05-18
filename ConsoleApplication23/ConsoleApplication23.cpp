#include <iostream>
using namespace std;
int is_valid_date(int d, int m, int y)
{
    return d, m, y;
}
int days(int a)
{
	switch (a)
	{
	case (1):
		return 30;
		break;
	case (2):
		return 28;
		break;
	
	
	case (3):
		return 31;
		break;
	
	
	case (4):
		return 30;
		break;
	case (5):
		return 31;
		break;
	case (6):
		return 30;
		break;
	case (7):
		return 31;
		break;
	case (8):
		return 31;
		break;
	case (9):
		return 30;
		break;
	case (10):
		return 31;
		break;
	case (11):
		return 30;
		break;
	case (12):
		return 31;
		break;
	}
}
int data(int d, int m, int y)
{
    d >= 1 && d <= 31;
    m >= 1 && m <= 12;
    y >= 0 && y <= 2024;
    return 0;
}
int main()
{
    setlocale(LC_ALL, "ru");

    int d, m, y;

    cin >> d;
    cin >> m;
    cin >> y;
    if (is_valid_date(d, m, y) == data(d,m,y)) 
    {
        cout << "ДА";
    }
    else 
    {
        cout << "НЕТ";
    }
}