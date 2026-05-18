#include <iostream><cmath>
using namespace std;
int main()
{
    float a;
	char op;
    cout << "Vvedite dymu ili s  \n";
    cin >> a;
	cin >> op;
	switch (op)
	{
	case 'd':
		cout << a * 2.54;
		break;
	case 's':
		cout << a / 2.54;
		break;
	}
	return 0;
}
