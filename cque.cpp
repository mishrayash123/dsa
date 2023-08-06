#include <bits/stdc++.h>
using namespace std;

// circular queue....
// full..........
// front=0 && rear=size-1
// rear = (front-1)% (size-1)

class CQueue
{
public:
    int* arr;
    int front;
    int rear;
    int size;

    CQueue(){
        size=100001;
        arr= new int[size];
        front=-1;
        rear=-1;
    }

    bool isempty(){
      if(front==-1){
        return true;
      }
      else{
        return false;
      }
    }

void enqueue(int data){
    if((front==0 && rear==size-1)|| (rear== (front-1)%(size-1))){
        cout<<"queue is full"<<endl;
    }
    else{
        if(front==-1){
            front=rear=0;
        }
        else{
            if(rear==size-1 && front!=0){
                rear=0;
            }
            else{
                rear++;
            }
        }
        arr[rear]=data; 
    }
}

void dequeue(){
    if(front==-1){
        cout<<"queue is empty"<<endl;
    }
    int ans = arr[front];
    arr[front]=-1;
    if(front==rear){
        front=rear=-1;
    }
    else{
        if(front==size-1){
            front=0;
        }
        else{
            front++;
        }
    }
}

};




int main(){

// CQueue q;
// q.enqueue(16);
// q.enqueue(17);
// q.enqueue(18);
// q.enqueue(19);
// q.dequeue();
// cout<<q.isempty()<<endl;

// Doubly ended que stl

deque<int>d;

d.push_front(12);
d.push_back(13);

cout<<d.front()<<endl;
cout<<d.back()<<endl;



    return 0;
}

// doubly ended que

// pushback
// popback
// pushfront
// popfront