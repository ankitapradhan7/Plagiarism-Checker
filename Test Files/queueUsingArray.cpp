//Studied from myCodeSchool
#include<bits/stdc++.h>
#define n 5
using namespace std;

int front =-1, rear =-1;
int arr[5];

int isEmpty()
{
	if(front==-1 && rear==-1)
		return 1;
	return 0;
}
int isFull()
{
	if((rear+1)%n==front)
		return 1;
	return 0;
}
void enqueue(int x)
{
	if(isFull())
	{
		cout<<"\nQueue is Full, can't insert'";
		return;
	}
	else if(isEmpty())
		front=0, rear=0;
		
	else
		rear = (rear+1)%n;
	arr[rear] =x;
}
int dequeue()
{
	if(isEmpty())
	{
		cout<<"\nQueue is Empty, can't delete";
		return -1;
	}
	else if(front == rear)
	{
		int temp = arr[front];
		front=-1;
		rear=-1;
		return temp;
	}
	else 
	{
		int temp = arr[front];
		front = (front+1)%n;
		return temp;
	}
}
using namespace std;
int main()
{
	while(1)
	{
		int ch;
		cout<<"\n1.Enqueue\n2.Dequeue\n3.Front\n4.Rear\n9.Exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				int x;
				cout<<"\nEnter a number to insert : ";
				cin>>x;
				enqueue(x);
				break;
				
			case 2:
				cout<<"\n"<<dequeue();
				break;
				
			case 3:
				cout<<"\nElement at front is : "<<arr[front];
				break;
			
			case 4:
				cout<<"\nElement at rear is :"<<arr[rear];
				break;
			
			case 9:
				exit(1);
				
			default:
				break;
		}
	}
}
