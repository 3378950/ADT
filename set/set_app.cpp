#include<iostream>
#include<set>
#include<cstdlib>

using namespace std;

int main() {
	set<int> s = {3, 2, 1, 4, 5};
	s.insert(1);
	s.insert(7);
	auto iter = s.find(3);
	if(iter != s.end())
		s.erase(iter);
	s.erase(5);
	for(auto iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << " ";
		cout << endl;
	
	for(const auto &x:s)
		cout << x << " ";
	cout << endl;
	
	system("pause");
	return 0;
}
