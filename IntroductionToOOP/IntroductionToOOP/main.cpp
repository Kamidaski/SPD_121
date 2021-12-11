#include<iostream>
using namespace std;

#define tab "\t"

class Point
{
	double x;
	double y;
public:
	double get_x()const
	{
		return x;
	}
	double get_y()const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
		//this - ��� ��������� �� ������, ��� �������� ���������� �����
		//������� ������ ���������� ������ ��� �������, ��� �������� �� ����������
		//�� ������ ����� ������ ����� ����� �������.
	}
	void set_y(double y)
	{
		this->y = y;
	}
}A,B,C;

//#define STRUCT_POINT

void main()
{
	setlocale(LC_ALL, "");
#ifdef STRUCT_POINT
	//type name;
	int a;	//��������� ���������� 'a' ���� 'int'
	Point A;//��������� ���������� 'A' ���� 'Point'
			//������� ������ (���������) ��������� 'Point'
	A.x = 2;
	A.y = 3;
	cout << A.x << tab << A.y << endl;

	Point* pA = &A;	//������� ��������� �� ������ ����� ���������
	cout << pA->x << tab << pA->y << endl;
#endif // STRUCT_POINT

	Point A;
	A.set_x(2);
	A.set_y(3);
	cout << A.get_x() << tab << A.get_y() << endl;
}

/*
.  - �������� ������� ������� (Point operator)
-> - �������� ���������� ������� (Arrow operator)
*/
/*
1. ������������ (Encapsulation);
������������ �������:
private:	�������� ������ ������ ������.
public:		
protected:
get/set-������

get (�����, ��������)	 - ��������� ������ � ���������� ������ �� ������,
						   �.�., ���������� �������� �������� ��� ��� ���� 
						   ����������-�����.
set (������, ����������) - ��������� ������ � ���������� ������ �� ������,
						   �.�., ��������� ������ �������� ��� ��� ���� 
						   ����������-�����.



2. ������������ (Inheritance);
3. �����������  (Polymorphism);
*/