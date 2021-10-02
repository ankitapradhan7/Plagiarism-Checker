#include<bits/stdc++.h>
#define n 5
using namespace std;
template<typename T>
class Queue
{
	public:
	T arr[n];
	int nextIndex,firstIndex,cnt;
	Queue()
	{
		nextIndex = 0;
		firstIndex = -1;	
		cnt = 0;
	}	
	void enqueue(T x)
	{
		if(cnt<n)
		{
			if(firstIndex==-1)
				firstIndex=0;
			arr[nextIndex] = x;
			nextIndex = (nextIndex+1)%n; 
			cnt++;
		}
		else
		{
			cout<<"\nQueue Full";
		}
	}
	T dequeue()
	{
		if(cnt==0)
			return -1;
		else
		{
			T x = arr[firstIndex];
			firstIndex = (firstIndex+1)%n;
			cnt--;
			return x;
		}
	}
	int size()
	{
		return cnt;
	}
	bool empty()
	{
		if(cnt==0)
			return true;
		return false;
	}
	T front()
	{
		if(firstIndex<0)
			return -1;
		else
			return arr[firstIndex];
	}
};
int main()
{
	Queue<int> q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	cout<<"\n"<<q.size();
	cout<<"\n"<<q.dequeue();
	cout<<"\n"<<q.dequeue();
	cout<<"\n"<<q.size();
	cout<<"\n"<<q.empty(); 
	cout<<"\n"<<q.dequeue();
	cout<<"\n"<<q.size();
	cout<<"\n"<<q.empty();
	q.enqueue(40);
	cout<<"\n"<<q.front();
	
}
