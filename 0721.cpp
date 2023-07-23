// 0721.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <set>
#include <string>
#include <iostream>
using namespace std;

// 排序
class MyCompare {
public:
	bool operator()(int v1, int v2) {
		return v1 > v2;
	}
};

void testSet01() {
	set<int>s1;
	s1.insert(10);
	s1.insert(50);
	s1.insert(40);
	s1.insert(90);
	// 打印
	for (set<int>::iterator it = s1.begin(); it != s1.end(); ++it)
	{
		cout << *it << ' ';     // 10 40 50 90
	}
	cout << endl;

	set<int, MyCompare>s2;
	s2.insert(10);
	s2.insert(20);
	s2.insert(30);
	s2.insert(40);
	// 打印
	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); ++it)
	{
		cout << *it << ' ';     // 40 30 20 10
	}
	cout << endl;
}

void testSet02() {

	class Person {
	public:
		string Name;
		int Age;
	};

}
//int main()
//{
//	testSet01();
//    return 0;
//}

