#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

template<typename T>
void print_all(const T &data)
{
	for(const auto&x:data)
	cout<<x<<" ";
	cout<<endl;
}

int main()
{
	vector<int> A(10);
	for(size_t i=0;i<A.size();++i)
		A[i] = static_cast<int> (i);//��iת����int���ͣ�
	for(auto iter = A.begin();iter!=A.end();++iter)
		*iter = 1;
	
	vector<int>B(5,3);
	B.resize(B.size()+100,2);//5��3��,100��2
	B.push_back(4);

	auto iter = B.begin();
	for(size_t i=0;i<B.size();++i)
		*(iter+i) *= 2;//5��6��100��4,1��8

	while(!B.empty())
	{
		cout<<B.back()<<endl;
		B.pop_back();
	}

	vector<int> v = {7,4,5,1,3};//��ʼ���б�

	//��������
	vector<int> c;
	int data;
	for(cin>>data;data>=0;cin>>data)
		c.push_back(data);
	
	system("pause");
	return 0;
 } 
