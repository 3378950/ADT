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

const int matched = 1;
const int not_matched = 0;
const int illegal = -1;
const int start = -2;

using namespace std;

template<typename T>


void print_all(const T&data){
	for(const auto&x:data)
		cout<<x<<" ";
	cout<<endl;
}

int generalized_validator(const string& brackets, int status[])
{
	int n = brackets.length();
	stack<char> s;
	for(int i=0;i<n;i++){
		if(status[(int)brackets[i]]==illegal) return illegal;
		else if(status[(int)brackets[i]==start]) s.push(brackets[i]);
		else if(s.empty()||status[(int)brackets[i]!=s.top()]) return not_matched;
		else s.pop();
	}
	return s.empty()?matched:not_matched;
}

int main()
{
	const int N = 256;
	int status[N];
	for(int i=0;i<N;i++) status[i]=illegal;//

	status[(int)'('] = start;
	status[(int)')'] = '(';
	status[(int)'['] = start;
	status[(int)']'] = '[';
	status[(int)'{'] = start;
	status[(int)'}'] = '{';

	string brackets;
	cin>>brackets;
	int result = generalized_validator(brackets, status);
  	if (result == matched)
    cout << "matched" << endl;
  	else if (result == not_matched)
    cout << "not matched" << endl;
  	else
    cout << "illegal" << endl;

    system("pause");
    return 0;
} 

