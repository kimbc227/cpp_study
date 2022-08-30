#include <iostream>


using namespace std;

int& func1(int& a) { return a; } 
int func2(int b) { return b; }

int main()
{
	int a = 3;
	func1(a) = 4;
	cout << &func1(a) << endl;
	cout << a << endl;
	int b = 2;
	a = func2(b); // 가능 
//	func2(b) = 5; // 오류1 
//	cout << &func2(b) << endl; // 오류 2 }



}
