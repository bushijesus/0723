#include "stdafx.h"
#include <iostream>
using namespace std;

class AA {
public:
	AA() {
		++count;
	}
	AA(const AA& a) {
		++count;
	}
	~AA() {
		--count;
	}
	static int count;
	static void print();
};
int AA::count = 0;
void AA::print() {
	cout << "count: " << count << endl;
}

void test(AA aa) {
	AA aa1, aa2, aa3;
	AA::print();
}

int main() {
	AA aa1, aa2, aa3;
	AA::print();
	test(aa1);
	AA::print();
	return 0;
}