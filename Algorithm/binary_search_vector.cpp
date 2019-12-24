#include <iostream>
#include <vector>

using namespace std;

template <typename T>

int binary_search_vector(const T &key, typename vector<T>::iterator data, size_t N) {
	size_t low = 0;
	size_t high = N;
	while (low < high) {
		size_t mid = low + (high - low) / 2;
		if (key < *(data+mid)) high = mid;
		else if(key > *(data+mid)) low = mid + 1;
		else return true;
	}
	return false;
}

template <typename T,typename iterator>

bool binary_search_iterator(const T&key, iterator L, iterator R) {
	while(L < R) {
		iterator M = L + (R - L) / 2;
		if (key < *M) R = M;
		else if (key > *M) L = M + 1;
		else return true;
	}
	return false;
}

int main() {
  	vector<int> v = {1, 2, 3, 4, 5};
  	cout << binary_search_vector(2, v.begin(), 5) << endl;
	cout << binary_search_iterator(2, v.begin(), v.end()) << endl;
	return 0; 
}
