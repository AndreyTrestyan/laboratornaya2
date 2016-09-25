#include "triangle.h"
#include <iostream>
#include <windows.h>
using namespace std; 


void Enter(int &x_1, int  &x_2, int &x_3,
		   int &y_1, int &y_2, int  &y_3);

	void main()
	{
		int x_1, x_2, x_3;
		int y_1, y_2, y_3;
		double perimetr = 0;
		double max = 0;

		int a=0, b=0, c=0, d=0;
		setlocale(LC_ALL, "Russian");
		int n;
		cout << "Введите колличество треугольников " << endl;
		cin >> n;
		Triangle *p;
		p = new Triangle[n];

		int l,k = 0;
		for (int i = 0; i < n; i++)
		{
			cout << "--------Создание треугольника--------" << endl;
			Enter(x_1, x_2, x_3, y_1, y_2, y_3);
			p[i].SetXY(x_1, x_2, x_3, y_1, y_2, y_3);
			p[i].Length();
			p[i].CheckTriangle();
			a =  a + p[i].GetA();
			b += p[i].GetB();
			c += p[i].GetC();
			d += p[i].GetD();	
			if (p[i].GetPer() > max)
			{
				max = p[i].GetPer();
				l = i;
		
			}
		}

		double min = p[0].GetPer();
		for (int i = 0; i < n; i++) 
		{
			if (p[i].GetPer() < min)
			{
				min = p[i].GetPer();
				k = i;
			}
		}

		cout << a << "Равносторонних треугольников" << endl;
		cout << b << "Равнобедренных треугольников" << endl;
		cout << c << "Прямоугольных треугольников" << endl;
		cout << d << "Произвольных треугольников" << endl;
		cout << "Самый большой по периметру треугольник №" << l+1 << " с общей длинной " << max << endl;
		cout << "Самый маленький по периметру треугольник №" << k + 1 << " с общей длинной " << min << endl;


		delete[] p;
		system("pause");
	}


	void Enter(int &x_1, int  &x_2,  int &x_3,
			   int &y_1,  int &y_2, int  &y_3)
	{
		cout << "Введите x1" << endl;
		cin >> x_1;
		cout << "Введите y1" << endl;
		cin >> y_1;
	    cout << "Введите x2" << endl;
		cin >> x_2; 
		cout << "Введите y2" << endl;
		cin >> y_2;
		cout << "Введите x3" << endl;
		cin >> x_3;
		cout << "Введите y3" << endl;
		cin >> y_3;
		
	}

