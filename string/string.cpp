#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	cin>>name;
	cout<<"hello"<<name<<endl;
	cout<<name.size()<<endl;
	name = name+"and"+name;//ƴ�� 
	cout<<name<<endl;
	string a = "c";
	string b = "++";
	auto c = a+b;//�Զ������Ƶ� 
	cout<<c<<endl;//DEV c++�����������⣻ 
	return 0;
 } 
