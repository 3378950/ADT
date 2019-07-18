#include<iostream>
#include<set>

template<typename T>
void print_all(const T&s)
{
	for(const auto &x:s)
		cout<<x<<" ";
	cout<<endl;
}

void print_all_iter(iterator L,iterator R)
{
	while(L!=R)
	cout<<*L++<<" ";
	cout<<endl;
}

using namespace std;

int main()
{
	set<int> s = {1,2,3,4,5};
	s.clear();
	print_all(s);
	return 0;
} 
