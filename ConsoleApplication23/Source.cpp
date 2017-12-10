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
	cout << "Введите № задания""\n";
	cin >> task;
	if (task == 1)
//1.	Дано натуральное (целое неотрицательное) число, а и целое положительное число d. 
//Вычислить частное q и остаток r при делении, а на d
	{
		int a, d, q, r;
		cout << "Введите число а""\n";
		cin >> a;
		cout << "Введите число d""\n";
		cin >> d;
		q = a / d;
		r = a%d;
		cout << "Частное q=" << q << "\n";
		cout << "Остаток от деления r = " << r << "\n";

	}
	else if (task == 2)
//2.	Напишите функцию int f(int x, int y), которая возвращает 0, если значения x и y оба равны нулю,
//12 / x, если y равен 0, 12 / y, если x равен 0, иначе 144 / (x*y).
	{
		int x, y;
		cout << "Введите число x""\n";
		cin >> x;
		cout << "Введите число y""\n";
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
	//3.	Напишите функцию int f(int x, int y), которая возвращает x-y, если x больше y,
	//иначе возвращает y-x
	{
		int x, y;
		cout << "Введите число x""\n";
		cin >> x;
		cout << "Введите число y""\n";
		cin >> y;
		if (x > y)
			cout << "f= " << x - y << "\n";
		else
			cout << "f= " << y - x << "\n";

	}
	else if (task == 4)
	//4.	Напишите функцию double f(double x, double y), которая возвращает x/y, если x больше y, 
	//иначе возвращает y/x. Предполагается, что значения параметров больше нуля.
	{
		double x, y;
		cout << "Введите число x""\n";
		cin >> x;
		cout << "Введите число y""\n";
		cin >> y;
		if (x > y)
			cout << "f= " << x / y << "\n";
		else
			cout << "f= " << y / x << "\n";
	}

	else if (task == 5)
	//5.	Напишите функцию double f(double x, double y, double z), которая возвращает m*n / k, 
	//где k есть меньшее из чисел x, y, z, а m и n есть среднее и большее из этих чисел.
	//Предполагается, что значения параметров больше нуля
	{
		double a, b, c, k, n, m;
		cout << "Введите число a""\n";
		cin >> a;
		cout << "Введите число b""\n";
		cin >> b;
		cout << "Введите число c""\n";
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
	//6.	Напишите функцию int f(int a, int b, int c), которая возвращает наименьшее из значений a, b, c.	
	{
		int a, b, c;
		cout << "Введите число a""\n";
		cin >> a;
		cout << "Введите число b""\n";
		cin >> b;
		cout << "Введите число c""\n";
		cin >> c;
		if ((a < b) && (a < c))
			cout << "min= " << a << "\n";
		else if ((b < a) && (b < c))
			cout << "min= " << b << "\n";
		else cout << "min= " << c << "\n";
	}
	else if (task == 7)
	//7.	Напишите функцию int f(int a, int b, int c), которая возвращает наибольшее из значений a, b, c.	
	{
		int a, b, c;
		cout << "Введите число a""\n";
		cin >> a;
		cout << "Введите число b""\n";
		cin >> b;
		cout << "Введите число c""\n";
		cin >> c;
		if ((a > b) && (a > c))
			cout << "max= " << a << "\n";
		else if ((b > a) && (b > c))
			cout << "max= " << b << "\n";
		else cout << "max= " << c << "\n";
	}
	else if (task == 8)
	//8.	Напишите функцию bool f(int x, int y, int z), которая возвращает true, если х2+у2= z2, иначе возвращает false.	
	{
		int x, y, z;
		cout << "Введите число x""\n";
		cin >> x;
		cout << "Введите число y""\n";
		cin >> y;
		cout << "Введите число z""\n";
		cin >> z;
		if (x*x + y*y == z*z)
			cout << "true""\n";
		else cout << "false""\n";
	}
	else if (task == 9)
	//9.	Напишите функцию bool f(int x, int y), которая возвращает true, если x делится нацело на y, 
	//или наоборот, y делится нацело на x, иначе возвращает false. Предполагается, что значения параметров больше нуля.	
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
	//10.	Положительные числа x, y, z могут быть сторонами треугольника, если большее из них меньше суммы двух других. 
	//Напишите функцию bool f(int x, int y, int z), которая возвращает true, если числа x, y, z могут быть 
	//сторонами треугольника, иначе возвращает false. Предполагается, что значения параметров больше нуля	
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
		cout << "Òàêîãî çàäàíèÿ íå ñóùåñòâóåò""\n";



	return 0;

	system("pause");




}

