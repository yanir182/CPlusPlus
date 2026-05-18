#include <iostream>
using namespace std;
int main()
{
    int q1, q2, q3, q4, q5, i;
	i = 0;
    cout << "Welcome to the Bill Gates Knowledge Test\n";
    cout << "First question. When was Bill Gates born?\n";
	cout << "\n1-28.10.1955 \n2-22.06.1941 \n3-01.09.1939\n";
	cin >> q1;
	switch (q1)
	{
	case 1:
		cout << "Right. Most people wouldn't have passed already";
		i = i + 1;
		break;
	case 2:
		cout << "Wrong. On this date, the Great Patriotic War began.";
		break;
	case 3:
		cout << "Wrong. On this date, World War II began.";
		break;
	default:
		exit(0);
	}
	cout << "\nSecond question. Where was Bill Gates born?";
	cout << "\n1-Alaska \n2-Seattle \n3-Juneau\n";
	cin >> q2;
	switch (q2)
	{
	case 1:
		cout << "NOOOOOOOOO.You're stupid. This a state of AMERIMA";
		break;
	case 2:
		cout << "You really are cute. You guessed.";
		i = i + 1;
		break;
	case 3:
		cout << "NOOOOOOOOO.You're stupid. This a capital of Alaska";
		break;
	default:
		exit(0);
	}
	cout << "\n3? What was Bill Gates' nickname?";
	cout << "\n1-stupid boy \n2-trey \n3-Pushkin\n";
	cin >> q3;
	switch (q3)
	{
	case 1:
		cout << "NOOOOOOOOO.You're stupid.";
		break;
	case 2:
		cout << "You really are cute.";
		i = i + 1;
		break;
	case 3:
		cout << "You're STUPID.";
		break;
	default:
		exit(0);
	}
	cout << "\n4? Who helped Bill Gates found Microsoft?";
	cout << "\n1-Kirill Pozhidaev\n2-Lermontov \n3-Paul Gardner Allen\n";
	cin >> q4;
	switch (q4)
	{
	case 1:
		cout << "Eto legenda but wrong";
		break;
	case 2:
		cout << "Ti ne trogai poeta.";
		break;
	case 3:
		cout << "You PrAv";
		i = i + 1;
		break;
	default:
		exit(0);
	}
	cout << "\n5? Who overtook Bill in capital";
	cout << "\n1-Stalin \n2-Obama \n3-Jeff Bezos\n";
	cin >> q5;
	switch (q5)
	{
	case 1:
		cout << "No. This is USSSR";
		break;
	case 2:
		cout << "NOOOOOOOOOOOOOO THIS OBAMA";
		break;
	case 3:
		cout << "Yes. You Beautiful";
		i++;
		break;
	default:
		exit(0);
	}
	cout <<"\nV itoge u tebya ballov "<<i;
}