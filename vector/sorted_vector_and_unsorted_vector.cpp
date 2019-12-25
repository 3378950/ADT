#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

template<typename T>
void print_all(const T &data) {
	for(const T&x:data)
	cout << x << " ";
	cout << endl;
}

int main() {
	vector<int> s = {1, 3, 6, 6, 8, 9};
	int k;
	cin >> k;
	auto iter = lower_bound(s.begin(), s.end(), k);
	cout << iter - s.begin() << endl;
	iter = upper_bound(s.begin(), s.end(), k);
	cout << iter - s.begin() << endl;

	s.insert(upper_bound(s.begin(), s.end(), k), k);
	print_all(s);

	if(binary_search(s.begin(),s.end(),k)) {
		iter = upper_bound(s.begin(), s.end(), k);
		s.erase(--iter);
	}

	vector<int> v = {9, 6, 1, 3, 8, 6};
	k = 0;
	v.push_back(k);
	auto riter = find(v.rbegin(), v.rend(), k);
	if(riter != v.rend()) {
		*iter = v.back();
		v.pop_back();
	}
	print_all(v);

	system("pause");
	return 0;
 } 
