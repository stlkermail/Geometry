#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//#define QUADRO
//#define TRIANGLE
//#define TRIANGLE_2
//#define TRIANGLE_3
#define TRIANGLE_4
void main()
{
	setlocale(LC_ALL, "Ru");
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
#ifdef QUADRO


	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << char(2) << " ";
		}
		cout << "\n";
	}
#endif // QUADRO

#ifdef TRIANGLE
	for (int j = 0; j <= n; j++)
	{
		for (int i = 0; i < j; i++)
		{
			cout << char(2) << " ";
		}
		cout << "\n";
	}
#endif // TRIANGLE

#ifdef TRIANGLE_2
	for (; n > 0; n--)
	{
		for (int i = 0; i < n; i++)
		{
			cout << char(2) << " ";
		}
		cout << "\n";
	}
#endif // TRIANGLE_2

#ifdef TRIANGLE_3

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i > j)
			{
				cout << " ";
			}
			else {
				cout << char(2);
			}
			cout << " ";
		}
		cout << "\n";
	}
#endif // TRIANGLE_3

#ifdef TRIANGLE_4

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < n; j++)
		{

			if (j < i)
			{
				cout << " ";
			}
			else {
				cout << char(2);
			}
		}

		cout << "\n";
	}

#endif // TRIANGLE_4
}