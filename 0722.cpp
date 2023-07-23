// 0722.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// A
class A
{
private:
	int a1;
	int a2, a3;
	int a4 = 4;
public:
	A() :a1(10), a2(2)
	{
		a1 = 1;
	}
	A(int n) 
	{
		cout << n << endl;
	}
	~A(){}
	void output()const
	{
		cout << "a1 = " << a1 << endl;
	}
};

// B
class B {
public:
	A a1;
	A a2;
public:
	B() :a2(2), a1(1) {
		cout << "B()" << endl;
	}
	B(int n) :a1(n) {
		cout << "B(int)" << endl;
	}
};

// Test
class Test {
public:
	Test(int n) :b(n), c(b + 1), a(c) {
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
		cout << "c = " << c << endl;
	}
private:
	int a;
	int b;
	int c;
};

// MyStruct
struct MyStruct
{
	MyStruct() {
		cout << "MyStruct()" << endl;
	}
	~MyStruct() {
		cout << "~MyStruct()" << endl;
	}
	void output() {
		cout << "MyStruct 1" << endl;
	}
};

//Point
class Point {
	int x, y;
	static int no;          // 类内定义
public:
	static void print();
	Point(int a, int b) :x(a), y(b) {
		++no;
	}
};
int Point::no = 1;         // 类外初始化
void Point::print()           
{
	cout << "no = " << no << endl;
}

// test
void test722_1() {
	A a;
	a.output();
}
void test722_2() {
	B b;
}
void test722_3() {
	Test t(6);
}
void test722_4() {
	MyStruct m1;
	m1.output();
}
void test722_5() {
	Point p1(1, 10);
	Point p2(2, 4);
	p1.print();
	Point::print();
}

////main
//int main()
//{
//	test722_5();
//   return 0;
//}
