#include "stdafx.h"
#include <iostream>
#include <string>
#include <set>
#include <map>
using namespace std;

class Person {
public:
	Person(string name, int age) {
		m_name = name;
		m_age = age;
	}
	string m_name;
	int m_age;
};

class comparePerson {
public:
	bool operator()(const Person & p1, const Person & p2) {
		return p1.m_age > p2.m_age;
	}
};
void test01() {
	set<Person, comparePerson>s;
	Person p1("aa", 18);
	Person p2("bb", 8);
	Person p3("cc", 16);
	Person p4("dd", 34);
	Person p5("ee", 1);
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	s.insert(p5);
	for (set<Person, comparePerson>::iterator it = s.begin(); it !=s.end(); ++it)
	{
		cout << "姓名： " << it->m_name << " 年龄： " << it->m_age << endl;
	}
	cout << endl;
}

void printMap(map<int, int> m) {
	for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
}
void test02() {
	map<int, int> m;
	// 插入匿名对象
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 30));
	m.insert(pair<int, int>(3, 20));
	m.insert(pair<int, int>(4, 40));
	printMap(m);

	// 拷贝构造
	map<int, int>m2(m);
	printMap(m2);

	// 赋值
	map<int, int> m3;
	m3 = m2;
	printMap(m3);
}
int main()
{
	test02();
	return 0;
}