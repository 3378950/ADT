#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <list>
#include <forward_list>

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
    list<int> L = {-2,-1,1,2};
    //�ҵ�����λ��
    auto iter = L.begin();
    while(iter!=L.end()&&*iter<0) iter++;

    L.insert(iter,0);//iter֮ǰ����
    cout<<*iter<<endl;//����֮��iterλ�ò���
    print_all(L);

    //ĩβ����
    L.insert(L.end(),3);
    print_all(L);

    //ɾ������:ɾ�����д��������
    iter = L.begin();
    while(iter!=L.end())
        if(*iter>0)
            iter = L.erase(iter);//������һ��λ��
        else ++iter;
    print_all(L);

    //�ƶ�
    list<int> x = {-5,-4,-3};
    L.splice(L.begin(),x,++x.begin(),x.end());//x�еڶ����������ƶ���L.begin()
    print_all(L);

    //����
    iter = find(L.begin(),L.end(),0);
    if(iter!=L.end())
    L.erase(iter);
    print_all(L);

	system("pause");
	return 0;
} 
