#include <iostream>
#include <cmath>
#include "windows.h"

using namespace std;

double sum1(int N, int j, int n2, int max, int min, int rec);
double K2(int N, int j);



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int N;
	cout << "Введіть число: "; cin >> N;
	cout << "___________________________________" << endl;
	cout << "Сума: " << sum1(N, 0, 0, 0, 9, 0) << endl;
	cout << "Кількість цифр: " << K2(N, 1) << endl;
	cout << "___________________________________" << endl;
}

double sum1(int N, int j, int n2, int max, int min, int rec)
{
	
	if (N != 0)
	{
		j += N % 10;
		n2 = N % 10;
		if (n2 > max)
			max = n2;
		if (min > n2)
			min = n2;
		N /= 10;
		return sum1(N, j,n2,max,min, ++rec);
	}
	cout << "Максимальна цифра: " << max << endl;
	cout << "Мінімальна цифра: " << min << endl;
	cout << "Рівень рекурсії: " << rec << endl;
	return j;
	
}

double K2(int N, int j)
{
	N = N / 10.;
	if (1 <= N)
	{
		return K2(N, ++j);
	}
	else
		return j;
}

