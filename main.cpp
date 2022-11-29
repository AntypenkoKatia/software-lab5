#include <fstream>
#include <locale>
#include <iostream>
#include <math.h>
using namespace std;
void checkValidInput()
{
	if (cin.fail())
	{
		throw "Incorrect input";
	}
}
void checkValidParams(int n)
{
	if (n < 1)
	{
		throw "Input correct data";
	}
}
int calculate(int n, int x)
{
	if (x >= 0)
	{
		double y = 0;
		for (int i = 1; i <= n - 1; i++)
		{
			y += (x / i);
		}
		return y;
	}
	else
	{
		double y = 0;
		for (int i = 1; i <= n - 1; i++)
			for (int j = 1; j <= n; j++)
			{
				y += (x - i + j);
			}
		return y;
	}
}
int main()
{
	int a, n, b, h;
	try
	{
		cout << "Enter n>=1, n=";
		cin >> n;
		checkValidInput();
		checkValidParams(n);
		cout << "Enter a=";
		cin >> a;
		double x = a;
		checkValidInput();
		cout << "Enter b =";
		cin >> b;
		cout << "Enter h=";
		cin >> h;
		while (x <= b)
		{
			cout << "x=" << x << ";" << "y=" << calculate(n, x) << endl;
			x = x + h;
		}
	}
	catch (const char* ex)
	{
		cout << ex << endl;
		return-1;
	}
	catch (...)
	{
		cout << "Unknown error" << endl;
		return -2;
	}
}