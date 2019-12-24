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
    //找到插入位置
    auto iter = L.begin();
    while(iter!=L.end()&&*iter<0) iter++;

    L.insert(iter,0);//iter之前插入
    cout<<*iter<<endl;//插入之后iter位置不变
    print_all(L);

    //末尾插入
    L.insert(L.end(),3);
    print_all(L);

    //删除操作:删除所有大于零的数
    iter = L.begin();
    while(iter!=L.end())
        if(*iter>0)
            iter = L.erase(iter);//返回下一个位置
        else ++iter;
    print_all(L);

    //移动
    list<int> x = {-5,-4,-3};
    L.splice(L.begin(),x,++x.begin(),x.end());//x中第二个到结束移动到L.begin()
    print_all(L);

    //查找
    iter = find(L.begin(),L.end(),0);
    if(iter!=L.end())
    L.erase(iter);
    print_all(L);

	system("pause");
	return 0;
} 
