#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<string>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<cctype>
#include<list>
#include<forward_list>

using namespace std;

struct snode{
	int data;
	snode* next;
};

template<typename T>

void print_all(const T&data){
	for(const auto&x:data)
		cout<<x<<" ";
	cout<<endl;
}

snode* build_list(vector<snode> &v){
	snode* header = &v[0];
	snode* p = &v[0];
	for(int i=1;i<v.size();++i){
		p->next = &v[i];
		p = p->next;
	}
	return header;
}

void print_list(snode* header){
	for(snode* p = header->next; p!=NULL; p = p->next)
		cout<<p->data<<" ";
		cout<<endl;
}

void snode_reverse(snode* header){
	snode* prev = NULL;
	snode* curr = header->next;
	while(curr!=NULL){
		snode* next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	header->next = prev;
}

int main()
{
	vector<snode> v = { {},{1,NULL},{2,NULL},{3,NULL} };
	struct snode*header = build_list(v);
	print_list(header);
	snode_reverse(header);
	print_list(header);

	forward_list<int> FL = {1, 2, 3};
	FL.reverse();
	print_all(FL);

	system("pause");
	return 0;
} 


