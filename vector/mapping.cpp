#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

template<typename T>
void print_all(const T &data)
{
	for(const auto&x:data)
	cout<<x<<" ";
	cout<<endl;
}

int main()
{
	vector<int> scores;
	//多路分支
	vector<int>nums(11,0);
	for(size_t i=0;i<scores.size();++i){
		if(scores[i]<10)      nums[0]++;
		else if(scores[i]<20) nums[1]++;
		else if(scores[i]<30) nums[2]++;
		else if(scores[i]<40) nums[3]++;
		else if(scores[i]<50) nums[4]++;
		else if(scores[i]<60) nums[5]++;
		else if(scores[i]<70) nums[6]++;
		else if(scores[i]<80) nums[7]++;
		else if(scores[i]<90) nums[8]++;
		else nums[9]++;
	}
	//优化
	for(size_t i=0;i<scores.size();++i)
	++nums[scores[i]/10];
	//基于范围
	for(const auto &x:scores)
	++nums[x/10];
	nums[9]+=num[10];
	nums.pop_back();
	//每种数字出现的次数
	vector<int>nums2(101,0);
	for(size_t i = 0;i<scores.size();++i)
	nums2[scores[i]]++;

	for(const auto&x:scores)
	nums2[x]++;

	system("pause");
	return 0;
 } 
