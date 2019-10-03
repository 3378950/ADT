#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	cin>>name;
	cout<<"hello"<<name<<endl;
	cout<<name.size()<<endl;
	name = name+"and"+name;//拼接 
	cout<<name<<endl;
	string a = "c";
	string b = "++";
	auto c = a+b;//自动类型推导 
	cout<<c<<endl;//DEV c++编译器有问题； 
	return 0;
 } 
