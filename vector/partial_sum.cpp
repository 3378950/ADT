#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

template<typename T>
void print_all(const T &data) {
	for(const auto&x:data)
	cout << x << " ";
	cout << endl;
}

int main() {
	vector<int> range;
	vector<int> points = {0, 46, 56, 61, 75, 86, 101};
	if(points.size() < 2) return 0;
	vector<int> nums(points.size() - 1, 0);
	
	for(size_t i = 0; i < nums.size(); ++i) {
		for(size_t j = points[i]; j < points[i + 1]; ++j)
		nums[i] += range[i];
	}
	system("pause");
	return 0;
 } 
