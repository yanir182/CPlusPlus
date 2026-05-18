#include <iostream><cmath>
using namespace std;
int main()
{
	float a;
	int b;
	cout << "Vvedite chislo";
	cin >> a;
	cout << "Vvedite stepen";
	cin >> b;
	switch(b)
	{
	case 0:
		cout << pow(a, 0);
		break;
	case 1:
		cout << pow(a, 1);
		break;
	case 2:
		cout << pow(a, 2);
		break;
	case 3:
		cout << pow(a, 3);
		break;
	case 4:
		cout << pow(a, 4);
		break;
	case 5:
		cout << pow(a, 5);
		break;
	case 6:
		cout << pow(a, 6);
		break;
	case 7:
		cout << pow(a, 7);
		break;
	}
}