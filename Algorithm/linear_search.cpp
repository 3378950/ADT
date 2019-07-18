#include<iostrem> 

using namespace std;

template<typename T>

int linar_search_array(const T &key,const T data[],int N)
{
	for(int i=0;i<N;++i)
	{
		if(data[i]==key)
		return i;
	}
	return N;
}

int linar_search_array_sentinel(const T &key, T data[],int N)
{
	int data[N] = key;
	int pos = 0;
	while(data[pos]!=key)
		pos++;
	return pos;
}

