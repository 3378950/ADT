#include <iostream>
#include <vector>
#include <queue>

using namespace std;

template<typename T>

void print_all(const T&data) {
	for(const auto&x: data)
		cout << x << " ";
	cout << endl;
}


int main() {
	vector<int> buffer;
	int C = 10;//capacity
	int N = C + 1;
	buffer.resize(N);
	int x = 0;
	int front = N / 2;//任选有效位置
	int rear = N / 2;
	while(rear + 1 < N ? rear + 1 != front : 0 != front)//buffer不满，连续放入
	{
		buffer[rear] = x++;
		//rear= (rear+1)%N
		if(rear < C) rear++;
		else rear = 0;
	}
	while(front != rear)//buffer非空
	{
		cout << buffer[front] << " ";
		//front = (front+1)%N; 
		if(front < C) ++front;
		else front = 0;
	}
	cout << endl;

	queue<int> Q;
	for(int x = 0;Q.size() != C; x++) {
		Q.push(x);
	}
	while(!Q.empty()) {
		cout << Q.front() << " ";
		Q.pop();
	}
	cout << endl;

    system("pause");
    return 0;
} 

