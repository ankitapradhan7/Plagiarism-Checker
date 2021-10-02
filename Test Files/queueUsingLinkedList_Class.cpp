#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Node{
	public:
	T val;
	Node *next;
	Node(T x)
	{
		this->val = x;
		this->next = NULL;	
	}	
};
template<typename T>
class Queue{
	Node<T> *head,*tail;
	int cnt;
	public:
	Queue()
	{
		cnt = 0;
		head = NULL;
		tail = NULL;
	}
	void enqueue(T x)
	{
		Node<T> *temp = new Node<T>(x);
		if(head==NULL)
		{
			head = tail = temp;
		}
		else
		{
			tail->next = temp;
			tail=tail->next;
		}
		cnt++;
	}
	T dequeue()
	{
		if(head!=NULL)
		{
			Node<T> *temp = head;
			head= head->next;
			T x = temp->val;
			delete(temp);
			cnt--;
			return x;
		}
		else
			return -1;	
	}
	int size()
	{
		return cnt;
	}
	bool empty()
	{
		if(head==NULL)
			return 1;
		return 0;
	}
	T front()
	{
		if(head!=NULL)
			return head->val;
		return -1;
	}
};
int main()
{
	Queue<int> q;
	cout<<q.size()<<"\n";
    cout<<q.empty()<<"\n";
    cout<<q.front()<<"\n";
    cout<<q.dequeue()<<"\n";
    q.enqueue(10);
    q.enqueue(20);
    cout<<q.size()<<"\n";
    cout<<q.dequeue()<<"\n";
    cout<<q.front()<<"\n";
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    cout<<q.size()<<"\n";
    q.enqueue(70);
    cout<<q.dequeue()<<"\n";
    q.enqueue(70);
    cout<<q.front()<<"\n";
}
