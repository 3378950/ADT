#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;

template<typename T>

void print_all(const T&data) {
	for(const auto&x:data)
		cout << x << " ";
	cout << endl;
}
void convertor_with_stack(int number,size_t b) {
	string d2c = "0123456789ABCDEF";//max = 16
	string result;
	stack<char> S;
	if(number < 0) {
		result += '-';
		number = -number;
	}
	do {
		S.push(d2c[number%b]);
		number /= b;
	}while(number!=0);
	while(!S.empty()) {
		result += S.top();
		S.pop();
	}
	print_all(result);
}


void convertor_with_string(int number, size_t b) {
	string result;
	string d2c = "0123456789ABCDEF";//max = 16
	int start = 0;
	if(number<0) {
		result += '-';
		number = -number;
		start = 1;
	}
	do{
		result += d2c[number%b];
		number /= b;
	}while(number != 0);
	for(int i = start; i < (result.size() + start) / 2; i++) {
		swap(result[i], result[result.size() - i - 1 + start]);
	}
	print_all(result);

}
int main() {
    int number, b;
	cout << "number: "; // Numbers requiring conversion
	cin >> number;
	cout << "b:"; // the converted process (between 2 and 16)
	cin >> b;
	convertor_with_stack(number, b);
	convertor_with_string(number, b);
    system("pause");
    return 0;
} 

