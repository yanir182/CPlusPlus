#include <iostream><cmath>
using namespace std;
int main()
{
	char a;
	cout << "Vvedite osenku";
	cin >> a;
	switch (a)
	{
	case'A':
	case'a':
		cout << 5;
		break;
	case 'B':
	case 'b':
		cout << 4;
		break;
	case 'C':
	case 'c':
		cout << 3;
		break;
	case 'D':
	case 'd':
		cout << 2;
		break;
	case 'E':
	case'e':
		cout << 1;
		break;
	}
}