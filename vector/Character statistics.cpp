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
    string DNA  = "AGCGCT";
    vector<int> nums(26,0);
    for(const auto&x:DNA)
    nums[x-'A']++;
    cout<<nums['C'-'A'];
    cout<<nums['G'-'A'];
    cout<<nums['T'-'A'];
    cout<<nums['A'-'A'];
// 三联子计数
    const int N = 4;
    int triple[N][N][N] ;
    memset(triple,0,sizeof(triple));

    int a2n[26];
    a2n['A'-'A'] = 0;
    a2n['C'-'A'] = 1;
    a2n['G'-'A'] = 2;
    a2n['T'-'A'] = 3;

    for(size_t i=0;i<DNA.size();i++)
    ++triple[a2n[DNA[3*i]-'A']]
            [a2n[DNA[3*i+1]-'A']]
            [a2n[DNA[3*i+2]-'A']];
    
    char n2a[N] = {'A','C','G','T'};
    
	system("pause");
	return 0;
 } 
