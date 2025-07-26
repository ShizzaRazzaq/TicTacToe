#include<iostream>
using namespace std;
int main()
{
	int x, z;
	char p, p1, a1 = '1', a2 = '2', a3 = '3', b1 = '4', b2 = '5', b3 = '6', c1 = '7', c2 = '8', c3 = '9';
	p = '1';
	p1 = 'O';
	for (z = 1; z <= 9; z++)
	{
		cout << a1 << " | " << a2 << " | " << a3 << " | " << "\n" << "-----------\n" << b1 << " | " << b2 << " | " << b3 << " | " << "\n" << "-----------\n" << c1 << " | " << c2 << " | " << c3 << " | " << "\n";
		cout << "Player " << p << ", Please enter the number of your choice: ";
		cin >> x;
		if (x == 1 && a1 == '1')
			a1 = p1;
		else if (x == 2 && a2 == '2')
			a2 = p1;
		else if (x == 3 && a3 == '3')
			a3 = p1;
		else if (x == 4 && b1 == '4')
			b1 = p1;
		else if (x == 5 && b2 == '5')
			b2 = p1;
		else if (x == 6 && b3 == '6')
	  	b3 = p1;
		else if (x == 7 && c1 == '7')
			c1 = p1;
		else if (x == 8 && c2 == '8')
			c2 = p1;
		else if (x == 9 && c3 == '9')
			c3 = p1;
		else if (x <= 0 || x > 9)
		{
			cout << "INVALID INPUT!\n";
			z = z - 1;
		}
		else
		{
			cout << "THIS POSITION IS NOT AVAILABLE!\n";
			z = z - 1;
		}
		if ((a1 == p1 && a2 == p1 && a3 == p1) || (b1 == p1 && b2 == p1 && b3 == p1) || (c1 == p1 && c2 == p1 && c3 == p1) || (a1 == p1 && b2 == p1 && c3 == p1) || (a1 == p1 && b1 == p1 && c1 == p1) || (c2 == p1 && a2 == p1 && b2 == p1) || (a3 == p1 && b3 == p1 && c3 == p1) || (c1 == p1 && b2 == p1 && a3 == p1))
		{
			cout << a1 << " | " << a2 << " | " << a3 << " | " << "\n" << "-----------\n" << b1 << " | " << b2 << " | " << b3 << " | " << "\n" << "-----------\n" << c1 << " | " << c2 << " | " << c3 << " | " << "\n";
			cout << "Player " << p << " WINS!!\n ";
			break;
		}
		if (z == 9)
		{
			cout << a1 << " | " << a2 << " | " << a3 << " | " << "\n" << "-----------\n" << b1 << " | " << b2 << " | " << b3 << " | " << "\n" << "----------\n" << c1 << " | " << c2 << " | " << c3 << " | " << "\n";
			cout << "ITS A DRAW!!";
		}
		if (p == '1')
		{
			p = '2';
			p1 = 'X';
		}
		else
		{
			p = '1';
			p1 = 'O';
		}
	}
	return 0;
	system("pause");
}
