#include <iostream>
#include <vector>
#include <algorithm>
#include <string> 
#include <cstdlib>

using namespace std;

int main() {
	const int n = 5;
	int a[n] = {2, 5, 3, 1, 4};
	
	sort(a, a + n);//由小到大 ，左闭右开 
	
	for(int i = 0; i < n; ++i) cout << a[i] << " ";
	cout << endl;
	
	sort(a, a+n, greater<int>());//由大到小 
	
	for(int i=0;i<n;++i) cout<<a[i]<<" ";
	cout << endl;
	
	string b[4] = {"www", "algorithm", "text", "wait"};
	sort(b, b + 4);
	
	for(int i = 0; i < 4; ++i) cout << b[i] << " ";
	cout << endl;
	
	sort(b, b + 4, greater<string>());
	
	for(int i = 0; i < 4; ++i) cout << b[i] << " ";
	cout << endl;
	
	vector<string> v = {"ww", "algorithm", "racer", "text", "wait"};
	
	sort(v.begin(), v.end());
	
	for(auto iter = v.begin(); iter != v.end(); ++iter) cout << *iter << " ";
	cout << endl;
	
	sort(v.rbegin(), v.rend());
	
	for(auto iter = v.begin(); iter != v.end(); ++iter) cout << *iter << " ";
	cout << endl;
	
    system("pause");
	return 0; 
}
