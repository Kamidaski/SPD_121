#pragma once
#include<iostream>
#include<Windows.h>

using namespace std;
using std::cin;
using std::cout;
using std::endl;;

int StringLength(const char* str);

class String;
String operator+(const String& left, const String& right);

class String
{
	int size;	//������ ������
	char* str;	//��������� �� ������ � ������������ ������
public:
	int get_size()const
	{
		return size;
	}
	const char* get_str()const
	{
		return str;
	}
	char* get_str()
	{
		return str;
	}

	explicit String(int size = 80) :size(size), str(new char[size] {})
	{
		//��������� ������������ ��������� size �� ����� ��������� ������ ��������� �������
		cout << "DefaultConst:\t" << this << endl;
	}

	String(const char* str) :String(strlen(str) + 1)
	{
		for (int i = 0; i < size; i++)this->str[i] = str[i];
		cout << "Constructor:\t" << this << endl;
	}
	String(const String& other) :String(other.str)
	{
		//�������� ����������� (Deep copy)
		cout << "CopyConstructor:" << this << endl;
	}
	~String()
	{
		delete[] this->str;	//���� ����������� �������� ������ ��� ������ ��������� new,
		//�� ���������� ����������� ������ ����������� ��� ������ ���������� delete[],
		//� ��������� ������ ����� ��������� ������ ������.
		cout << "Destructor:\t" << this << endl;
	}

	//					Operators:
	String& operator=(const String& other)
	{
		if (this == &other)return *this;

		int a = 2;
		int b = 3;
		a = b;
		delete[] this->str;
		//�������� ����������� (Deep copy)
		this->size = other.size;
		this->str = new char[size] {};
		for (int i = 0; i < size; i++)this->str[i] = other.str[i];
		cout << "CopyAssignment:\t" << this << endl;
		return *this;
	}

	String& operator+=(const String& other)
	{
		return *this = *this + other;
	}

	const char& operator[](int i)const
	{
		return str[i];
	}
	char& operator[](int i)
	{
		return str[i];
	}


	//					Methods:
	void print()const
	{
		cout << "Size:\t" << size << endl;
		cout << "Str:\t" << str << endl;
	}
};
