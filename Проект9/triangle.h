#pragma once

class Triangle
{
	private:
		int a=0; // ��������������
		int b=0; // ��������������
		int c=0; // �������������
		int d=0; // ������������
	double length1, length2, length3;
	static int counter;
	int GetXY();
	static void Counter();
	static const int numberlenght = 3; // ���������� ���� ������ ����������  == 3 
	int x_1, x_2, x_3, y_1, y_2, y_3;

	public:
	void Length(); // + lenght check (if < 0  - ERROR)
	void CheckTriangle();

	int GetA(); 
	int GetB();
	int GetC();
	int GetD();
	int GetPer();
	Triangle(int, int, int ,int ,int, int);
	Triangle(const Triangle &obj);
	Triangle();
	~Triangle();
    void SetXY(int X, int X2, int X3, int Y, int Y2, int Y3);

	
};