#include<iostream>
#include<vector>

using namespace std;

size_t memorized_Collatz(vector<size_t> &v,size_t n) 
{
	size_t D = 0;
	while(n >= v.size())
	{
		n = (n%2 == 0) ? n/2 : 3 * n + 1;
		++D;
	}
	if(v[n]==0&&n>0)
	{
		v[n] = memorized_Collatz(v,(n%2==0) ? n / 2 : 3 * n + 1) + 1;
	}
	return v[n] + D;
}
int main()
{
	const size_t m = 10000;
	vector<size_t> v (m,0);
	v[1] = 1;
	int x = memorized_Collatz(v,5);
	cout << x << endl;
	for(int i = 0; i < v.size(); ++i)
	cout << v[i] << " ";
	cout << endl;
	return 0;
}
