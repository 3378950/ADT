#include <iostream>

using namespace std;

template<typename T>

int binary_search_arry(const T&key, const T data[], int N) {
	if (N < 0) return -1;
	int low = 0, high = N-1;
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (key < data[mid]) high = mid + 1;
		else if (key > data[mid]) low = mid-1;
		else return mid;
	}
	return -1;
}

int main() {
	int a[] = {1,2,3,4,5};
	int pos = binary_search_arry(2,a,5);
	printf("%d",pos+1);
}
