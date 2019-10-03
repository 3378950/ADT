#include<iostream>
#include<vector>
#include<cstdlib>

using namespace std;

int main()
{
	const int n = 42;
	const int c = 1;

	vector<int>V1(n);//vector<int> v1;空向量
	vector<int>V2(n,c);//初始化
	vector<int>V3 = {1,2,3,4,5};//初始化 

	for(size_t i = 0;i<V3.size();++i) 
		cout<< V3[i]<<" ";
	cout<<endl;
	V3.push_back(6);  //尾部添加
	cout<<V3.size()<<endl;
	cout<<V3.front()<<" "<<V3.back()<<endl;
	V3.pop_back();  //尾部删除
	for(auto iter = V3.begin();iter!=V3.end();++iter)//DEV C++编译出错 
	{
	*iter = c;
	cout<<*iter<<" "<<endl;
	}
	system("pause");
	return 0;	
}
