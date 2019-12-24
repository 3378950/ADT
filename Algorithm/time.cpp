#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

inline double time(clock_t start, clock_t end) {
	return static_cast<double>(end - start) / static_cast<double>(CLOCKS_PER_SEC);
}

int main() {
	clock_t start, end;
	const size_t N = 100000000;
	vector<size_t> v(N);
	//线性时间
	start = clock();
	for(size_t i = 0; i < v.size(); ++i)
		v[i] = v.size() - i;
	end = clock();
	cout << "运行时间(s): " << time(start, end) << endl;
	//线对时间
	start = clock();
	sort(v.begin(), v.end());
	end = clock();
	cout << "运行时间(s): " << time(start, end) << endl;
	//对数时间
	start = clock();
	binary_search(v.begin(), v.end(),1);
	end = clock();
	cout << "运行时间(s): " << time(start, end) << endl;
	//平方时间
	const size_t M = 100000;
	for(size_t i = 0;i < M; ++i)
		for(size_t j = 0;j < M; ++j)
		v[i] *= j;
	end = clock();
	cout << "运行时间(s): " << time(start, end) << endl;
	
	system("pause");
	return 0;
 } 
