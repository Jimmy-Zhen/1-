#include<iostream>

using namespace std;

class Base0//基类
{
public:
	int val;
	Base0()
	{
		cout << "Base0" << endl;
	}
	~Base0()
	{
		cout << "~Base0" << endl;
	}
};

class Base1:virtual public Base0//基类1
{
public:
	int val;
	Base1(int a0, int b0)
	{
		a = a0;
		b = b0;
		cout << "Base1:a=" <<a<<"    b="<<b<< endl;
	}
	~Base1()
	{
		cout << "~Base1" << endl;
	}
private:
	int a, b;
};

class Base2:virtual public Base0//基类2
{
public:
	int val;
	Base2(int c0)
	{
		c = c0;
		cout << "Base2:c="<<c << endl;
	}
	~Base2()
	{
		cout << "~Base2" << endl;
	}
private:
	int c;
};

class Pai :public Base1,public Base2//派生类
{
public:
	int val;
	Pai(int a0, int b0, int c0, int d0) : Base2(c0), Base1(a0, b0)
	{
		d = d0;
		cout << "Pai:d="<<d0 << endl;
	}
	~Pai()
	{
		cout << "~Pai" << endl;
	}
	void fun()
	{
		cout << "fun():val=" << val << endl;
	}
private:
	int d;
};




//ewrwerw
int main()
{
	Pai pi(10, 20, 90, 50);
	pi.val = 10;
	pi.fun();
	return 0;
}