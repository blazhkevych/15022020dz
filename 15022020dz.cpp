/*
Вывести на экран фигуры заполненные звездочками.Диалог с пользователем реализовать при помощи меню.
*/
#include <iostream>
using namespace std;
//А)
/*
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			cout << " ";
		for (int j = 0; j < n - i; j++)
			cout << "*";
		cout << endl;
	}
}
*/
/*
Б)
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
			cout << "*";
		cout << endl;
	}
}
*/
/*
В)
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			cout << " ";
		for (int j = 0; j < n - i; j++)
			cout << "*";
		for (int j = 0; j < n - i - 1; j++)
			cout << "*";
		cout << endl;
	}
}
*/
/*
Г)
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
			cout << ' ';
		for (int k = n; k >= n - (2 * i); k--)
			cout << '*';
		cout << endl;
	}
	return 0;
}
*/
/*
Д)
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			cout << " ";
		for (int j = 0; j < n - i; j++)
			cout << "*";
		for (int j = 0; j < n - i - 1; j++)
			cout << "*";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = i; j < n - 1; j++)
				cout << ' ';
			for (int j = n; j >= n - (2 * i); j--)
				cout << '*';
			cout << endl;
		}
		return 0;
	}
}
*/
/*

Е)
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			cout << "*";
		for (int j = 0; j < n - i; j++)
			cout << " ";
		for (int j = 0; j < n - i; j++)
			cout << " ";
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
			cout << "*";
		for (int j = 0; j < i; j++)
			cout << " ";
		for (int j = 0; j < i; j++)
			cout << " ";
		for (int j = 0; j < n - i; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}
*/
/*
Ж)
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}
*/
/*
З)
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			cout << " ";
		for (int j = 0; j < n - i; j++)
			cout << " ";
		for (int j = 0; j < n - i; j++)
			cout << " ";
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
			cout << " ";
		for (int j = 0; j < i; j++)
			cout << " ";
		for (int j = 0; j < i; j++)
			cout << " ";
		for (int j = 0; j < n - i; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}
*/
/*
И)
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
			cout << "*";
		cout << endl;
	}
}
*/
/*
К)
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			cout << " ";
		for (int j = 0; j < n - i; j++)
			cout << " ";
		for (int j = 0; j < n - i; j++)
			cout << " ";
		for (int j = 0; j < i + 1; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}
*/