#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<ctime>
#include<forward_list>

using namespace std;

template<typename T>

void print_all(const T&data) {
	for(const auto&x:data)
		cout<<x<<" ";
	cout<<endl;
}


inline double time(clock_t start, clock_t end) {
  return static_cast<double>(end - start) / static_cast<double>(CLOCKS_PER_SEC);
}

struct snode {
    int data;
    snode* next;
};

int main() {
    const size_t n = 100000000;//8G内存使用率96%
    //handwriting_push_back
    clock_t start1 = clock();
    snode* header = new snode;//动态申请空间
	snode* p = header;
    for(size_t i = 0; i < n; ++i) {
        snode* next = new snode;
        p->next = next;
        p = next;
    }
    p->next = NULL;
    clock_t end1 = clock();
    int a = time(start1, end1);
    cout <<"time1 is  "<< time(start1, end1) << endl;

    p = header;
    while(p != NULL){
        snode *next = p->next;
        delete p;
        p = next;
    }
    //push_back
    forward_list<int> FL1;
    clock_t start2 = clock();
    
    auto iter = FL1.before_begin();
    for(size_t i = 0;i < n; i++)   iter = FL1.insert_after(iter, 0);
    clock_t end2 = clock();
    
    int b = time(start2, end2);
    cout <<"time2 is  "<< time(start2, end2) << endl;
    
    //push_front
    forward_list<int> FL2;
    clock_t start3 = clock();
    
    for (size_t i = 0; i < n; ++i)
    FL2.push_front(0);
    clock_t end3 = clock();
    int c = time(start3, end3);
    cout <<"time3 is  "<< time(start3, end3) << endl;

    /* meastured results: a:107.978
                          b:131.21
                          c:111.857*/

    system("pause");
    return 0;
} 


