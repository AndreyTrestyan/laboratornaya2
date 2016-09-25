#include "triangle.h"
#include <iostream>
using namespace std;

int Triangle::counter ;

	Triangle::Triangle()
	{
		cout << "\nКонструктор\n" << endl;
		Counter();
	}


	Triangle::Triangle(int x1, int x2, int x3, int y1, int y2, int y3)
	{
		cout << "\nКонструктор с параметрами\n" << endl;
		x_1 = x1;
		x_2 = x2;
		x_3 = x3;
		y_1 = y1;
		y_2 = y2;
		y_3 = y3;
		Counter();
	}


	Triangle::Triangle(const Triangle &obj)
	{
		cout << "\nКонструктор с копированием\n" << endl;
		Counter();
	}


	Triangle::~Triangle()
	{
		cout << "\nДеструктор\n" << endl;
		counter--;
	}



	void Triangle::SetXY(int X, int X2, int X3, int Y, int Y2, int Y3)
	{
		x_1 = X;
		x_2 = X2;
		x_3 = X3;
		y_1 = Y;
		y_2 = Y2;
		y_3 = Y3;
			}

	
	
	int Triangle::GetXY()
	{
		return x_1, x_2, x_3, y_1, y_2, y_3;
	}

	
	void Triangle::Counter()
	{
		counter++;
	}

	
	
	void Triangle::Length()
	{ 
		length1 = sqrt(pow((x_2 - x_1), 2) + pow(y_2 - y_1, 2));
	
		length2 = sqrt(pow((x_3 - x_2), 2) + pow(y_3 - y_2, 2));
		
		length3 = sqrt(pow((x_3 - x_1), 2) + pow(y_3 - y_1, 2));
		if (length1<0 | length2<0 | length3 <0)
		{
			cout <<"ERROR, one length less then 0" << endl;
		}

	}
	
	
	
	void Triangle::CheckTriangle()
	{
		if (length1 + length2 < length3 | length1 + length3 < length2 | length2 + length3 < length1)
		{
			cout << "Error, it's not triangle!!!" << endl;
		}

		if (length1 == length2 == length3)
		{
			a++;
		}

		if ( ((length1 == length2) & (length1!= length3)) |
			((length2 == length3) & (length2 != length1)) |
			((length1 == length3) & (length1 != length2)))
		{
			b++;
		}

		if (length1 == sqrt(pow(length2, 2) + pow(length3, 2)) |
			length2 == sqrt(pow(length1, 2) + pow(length3, 2)) |
			length3 == sqrt(pow(length2, 2) + pow(length1, 2)))
		{
			c++;
		}

		if (length1 != length2 & length1 != length3 & length3 != length2 & 
			(length1 != sqrt(pow(length2, 2) + pow(length3, 2)) &
			length2 != sqrt(pow(length1, 2) + pow(length3, 2)) &
			length3 != sqrt(pow(length2, 2) + pow(length1, 2))))
		{
			d++;
		}
	}

	   
	
		int Triangle::GetA()
	    {
			return a;
		} 
		int Triangle::GetB()
		{
			return b;
		}
		int Triangle::GetC()
		{
			return c;
		}
		int Triangle::GetD()
		{
			return d;
		}
		int Triangle::GetPer()
		{
			return length1 + length2 + length3;
		}





	

