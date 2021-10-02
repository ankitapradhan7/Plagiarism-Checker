#include<bits/stdc++.h>
using namespace std;
class Queue {
	public:
    /** Initialize your data structure here. */
    stack <int> s1,s2;
	Queue() {
        
    }
    
    /** Push element x to the back of queue. */
    void enqueue(int x) {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int dequeue() {
        if(s1.empty())
            return -1;
        int x = s1.top();
        s1.pop();
        return x;
    }
    
    /** Get the front element. */
    int front() {
        if(s1.empty())
            return -1;
        return s1.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return s1.empty();
    }
    int size()
    {
    	return s1.size();
	}
};
int main()
{
	Queue q;
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
