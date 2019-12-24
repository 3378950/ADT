#include<iostream>
#include<vector>

using namespace std;

void f1(int &x)
{
	x = 1;
}

void f2(int *p)
{
	*p = 2;
}

void f3(int &a,int &b)
{
	a = 42;
	b = 43;
} // Multiple return values; 

int main()
{
	int a;
	cin >> a;
	f1(a);
	cout << a << endl; // 1
	f2(&a);
	cout << a << endl; // 2
	int b, c;
	f3(b, c);
	cout << b << " " << c << endl; // 42 43
	return 0;
} 


