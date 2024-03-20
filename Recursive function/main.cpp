#include <iostream>
using namespace std; 
void func5(int);
void func6(int);
// Nested Recursion
int func7(int n) {
	if(n < 10) {
		cout << n << endl;
		n = func7(func7(n + 1)) + 2;
		cout << n << endl;
	} 
	return n + 1;
}
//Tree recursion in recursion
int func4(int n) {
	if (n > 0) {
		cout << n << " ";
		n = func4(n - 1);
		n = func4(n - 1);
		cout << n << " ";
	}
	return 0; 
}

//Static or Global variable in recursion
int func3(int n) {
	static int x{};
	if (n > 0) {
		x++; 
		return func3(n - 1) + x;
	}
	return 0;
}
//Simple recursion function or tail recursion
void recursive1(int n) {
	if (n > 0) {
		cout << n << endl;
		recursive1(--n);
	}
}

//simple recursion function or head recursion
void recursive2(int n)  {
	if (n > 0) {
		recursive2(--n);
		cout << n << endl; 
	}
}

int factorial(int x) {
	if (x > 1) {
		x *= factorial(x - 1);
	}
	return x;
}
int sum(int x) {
	if (x > 0)
		x += sum(x - 1);
	return x;
}
int main() {
	int x =5;
	cout << sum(x);
	return 0;
}

//Indirect recursion
void func5(int n) {
	if (n > 0) {
		cout << n << " ";
		func6(n - 1);
	}
}
void func6(int n) {
	if (n > 0) {
		cout << n << " ";
		func5(n - 1);
	}
}