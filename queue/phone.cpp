#include <iostream>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <list>
#include <forward_list>
#include <map>
#include <random>


using namespace std;

template<typename T>

void print_all(const T&data){
	for(const auto&x:data)
		cout<<x<<" ";
	cout<<endl;
}


int main()
{
	size_t L = 11;
	size_t B = 10;
	vector<string> phones_numbers(1000);
	vector< queue<string> > Q(B);
	size_t d = L;
	while(d>0){
		d--;
		for(const auto&x:phones_numbers) Q[x[d]-'0'].push(x);
		size_t i=0;
		for(int k=0;k<B;k++)
			while(!Q.empty()){
				phones_numbers[i++] = Q[k].front();
				Q[k].pop();
			}
	}
    system("pause");
    return 0;
} 

