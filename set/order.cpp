#include<iostream>
#include<set>
#include<vector>
#include<cstdlib>

using namespace std;

int main()
{
	set<int> s = {3,2,1,4,5};
	int k;
	cin>>k;
	if(k<1||k>s.size())
		cout<<"³¬·¶Î§£¡"<<endl;
	else
	{
		auto iter = s.begin();
		for(int i=0;i<k-1;++i)
			++iter;
		cout<<*iter<<endl;
	} 

	vector<int> v;
	for(int i=0;i<k-1;++i)
	{
		v.push_back(*s.begin());
		s.erase(s.begin());
	}
	cout<<*s.begin()<<endl;
	s.insert(v.begin(),v.end());
	system("pause");
	return 0;
 } 
