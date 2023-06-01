#include "Header.h"

class A {
public:
	virtual void test() {
		cout << "AAAA" << endl;
	}

};

class B : public A {
	void test() {
		cout << "BBBBB" << endl;
	}
};