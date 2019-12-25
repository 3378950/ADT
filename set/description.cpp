#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<string>
#include<cstdlib>

using namespace std;

template<typename T>
void print_all(const T &data) {
	for(const auto&x:data)
	cout << x << " ";
	cout << endl;
}

int main() {
	set<int> A = {3, 2, 1, 4, 7, 8, 9, 11};
	set<int> B = {6, 2, 9};
	vector<int> v;
	
	for(auto iter = A.begin(); iter != A.end(); ++iter) {
		if(B.find(*iter) == B.end());
		v.push_back(*iter);
	}

	print_all(v);

	set<string> D = {"English", "Ability", "Algorithm", "Faith", "Data"};
	set<string> E;
	while(!D.empty()) {
		if((*D.begin()).size() % 2 == 0)
		E.insert(*D.begin());
		D.erase(*D.begin());
	}
	print_all(E);

	vector<string> F = {"English", "Ability", "Algorithm", "Faith", "Data"};
	vector<string> G;
	G.reserve(F.size());
	while(!F.empty()) {
		if((*F.begin()).size() % 2 == 0)
		G.push_back(*F.begin());
		F.erase(F.begin());

	}
	print_all(G);

	set<int> H = {3, 5, 1, 7, 2, 8, 0};
	while(H.size() > 1) {
		int first = *H.begin();
		H.erase(H.begin());
		int second = *H.begin();
		H.erase(H.begin());
		H.insert(first + second);
	}
	print_all(H);
	
	system("pause");
	return 0;
 } 
