#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int task;
	cout << "������� � �������""\n";
	cin >> task;
	if (task == 1)

	{
		int a, d, q, r;
		cout << "������� ����� �""\n";
		cin >> a;
		cout << "������� ����� d""\n";
		cin >> d;
		q = a / d;
		r = a%d;
		cout << "������� q=" << q << "\n";
		cout << "������� �� ������� r = " << r << "\n";

	}
	else if (task == 2)

	{
		int x, y;
		cout << "������� ����� x""\n";
		cin >> x;
		cout << "������� ����� y""\n";
		cin >> y;
		if ((x = 0) && (y = 0))
			cout << "f= " << 0 << "\n";
		else if (y == 0)
			cout << "f= " << 12 / x << "\n";
		else if (x == 0)
			cout << "f= " << 12 / y << "\n";
		else
			cout << "f= " << 144 / (x*y) << "\n";
	}
	else if (task == 3)
	{
		int x, y;
		cout << "������� ����� x""\n";
		cin >> x;
		cout << "������� ����� y""\n";
		cin >> y;
		if (x > y)
			cout << "f= " << x - y << "\n";
		else
			cout << "f= " << y - x << "\n";

	}
	else if (task == 4)
	{
		double x, y;
		cout << "������� ����� x""\n";
		cin >> x;
		cout << "������� ����� y""\n";
		cin >> y;
		if (x > y)
			cout << "f= " << x / y << "\n";
		else
			cout << "f= " << y / x << "\n";
	}

	else if (task == 5)
	{
		double a, b, c, k, n, m;
		cout << "������� ����� �""\n";
		cin >> a;
		cout << "������� ����� b""\n";
		cin >> b;
		cout << "������� ����� c""\n";
		cin >> c;
		if ((a < b) && (a < c))
			k = a;
		else if ((b < a) && (b < c))
			k = b;
		else if ((c < a) && (c < b))
			k = c;

		if ((a > b) && (a > c))
			n = a;
		else if ((b > a) && (b > c))
			n = b;
		else if ((c > a) && (c > b))
			n = c;
		if ((a < b) && (a > c))
			m = a;
		else if ((b < a) && (b > c))
			m = b;
		else if ((c < a) && (c > b))
			m = c;
		cout << m*n / k << "\n";

	}
	else if (task == 6)
	{
		int a, b, c;
		cout << "������� ����� �""\n";
		cin >> a;
		cout << "������� ����� b""\n";
		cin >> b;
		cout << "������� ����� c""\n";
		cin >> c;
		if ((a < b) && (a < c))
			cout << "min= " << a << "\n";
		else if ((b < a) && (b < c))
			cout << "min= " << b << "\n";
		else cout << "min= " << c << "\n";
	}
	else if (task == 7)
	{
		int a, b, c;
		cout << "������� ����� �""\n";
		cin >> a;
		cout << "������� ����� b""\n";
		cin >> b;
		cout << "������� ����� c""\n";
		cin >> c;
		if ((a > b) && (a > c))
			cout << "max= " << a << "\n";
		else if ((b > a) && (b > c))
			cout << "max= " << b << "\n";
		else cout << "max= " << c << "\n";
	}
	else if (task == 8)
	{
		int x, y, z;
		cout << "������� ����� x""\n";
		cin >> x;
		cout << "������� ����� y""\n";
		cin >> y;
		cout << "������� ����� z""\n";
		cin >> z;
		if (x*x + y*y == z*z)
			cout << "true""\n";
		else cout << "false""\n";
	}
	else if (task == 9)
	{
		int x, y;
		cin>> x;
		cin>> y;
		if (x%y == 0)
			cout << "True""\n";
		else if (y%x == 0)
			cout << "True""\n";
		else
			cout << "False""\n";
	}
	else if (task == 10)
	{
		int x, y, z, f,d,s;
		cin >> x;
		cin >> y;
		cin >> z;
		f = max(max(x,y),(z));
		d = min(min(x, y),(z));
		s = (x>d&&x<f) ? x : (y>d&&y<f) ? y : z;
		cout << "max= " << f << "\n";
		cout << "min= " << d << "\n";
		cout << "mid= " << s << "\n";
		if (f<d+s)
			cout << "True""\n";
		else
			cout << "False""\n";
	}

	else
		cout << "������ ������� �� ����������""\n";



	return 0;

	system("pause");




}

