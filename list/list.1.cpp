#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<string>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<cctype>
#include<list>
#include<forward_list>

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
    //forward_list
    forward_list<int> A = {1,2,3};
    auto ia = A.begin();
    cout<<*ia<<endl;
    ia++;
    cout<<*ia<<endl;

    for(const auto&x:A)
    cout<<x<<endl;

    //for(auto ib = A.begin();ia!=A.end();++ib)
    //cout<<*ib<<" ";
    
    //list
    list<int> B = {1,2,3};
    auto ic = B.begin();
    cout<<*ic<<endl;
    ic++;
    cout<<*ic<<endl;

    list<int> C = {1,2,3};
    *C.begin() = 0;
    *C.end() = 5;
    print_all(C);

	system("pause");
	return 0;
 } 
