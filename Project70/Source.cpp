#include "Source1.cpp"

class Calculator {
public :
	static int add(int a, int b) {
		return a + b;
	}
	static int add(int a, int b, int c) {
		return a + b + c;
	}
	static double add(double a, double b) {
		return a + b;
	}
};


int main() {
	Calculator calc;
	cout << calc.add(6, 4, 3) << endl;
	A* a = new A();
	a->test();
	delete a;

	return 0;
}