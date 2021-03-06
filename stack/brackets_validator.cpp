#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>

using namespace std;

template<typename T>

void print_all(const T&data) {
	for(const auto&x:data)
		cout << x << " ";
	cout << endl;
}

bool validator(const string& brackets) {
	stack<char> s;
	int n = brackets.length();
	for(int i = 0; i < n; i++) {
		switch(brackets[i]) {
			//'(' and ')'
			case '(':
				s.push(brackets[i]);
				break;
			case ')':
				if(s.empty() || s.top() != '(')
					return false;
				else s.pop();
				break;
			//'[' and ']'
			case '[':
				s.push(brackets[i]);
				break;
			case ']':
				if(s.empty() || s.top() != '[')
					return false;
				else s.pop();
				break;
			//'{' and '}'
			case '{':
				s.push(brackets[i]);
				break;
			case '}':
				if(s.empty() || s.top() != '{')
					return false;
				else s.pop();
				break;
			//illegal input
			default: return false;
		}
	}
	return s.empty();
}
int main() {
	string brackets;
	cin >> brackets;
	cout << (validator(brackets) ? "legal" : "illegal") << endl;
    system("pause");
    return 0;
} 

