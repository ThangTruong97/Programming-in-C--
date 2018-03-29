#include<iostream>
using namespace std;
#include<conio.h>

void stairCase(int);

void main()
{
	int n;
	cout << "Type in the number of row : ";
	cin >> n;
	stairCase(n);
	_getch();
}

void stairCase(int n)
{
	for (int i = 1; i <= n; i++)
	{
		int j = 1;
		while (j <= n)
		{
			if (j <= n - i) cout << ' ';
			else cout << '#';
			j++;
		}
		cout << endl;
	}
}