#include <bits/stdc++.h>
using namespace std;

// fifo
// front and rear

class Queue
{
public:
    int* arr;
    int front;
    int rear;
    int size;

    Queue(){
        size=100001;
        arr= new int[size];
        front=0;
        rear=0;
    }

    bool isempty(){
      if(front==rear){
        return true;
      }
      else{
        return false;
      }
    }

void enqueue(int data){
    if(rear==size){
        cout<<"queue is full"<<endl;
    }
    else{
        arr[rear]=data;
        rear++;
    }
}

void dequeue(){
    if(front==rear){
        cout<<"queue is empty"<<endl;
    }
    else{
        arr[front]=-1;
        front++;
        if(front==rear){
            front=0;
             rear=0;
        }
    }
}

int Front(){
    if(front==rear){
        return -1;
    }
    else{
        return arr[front];
    }
}

};




int main(){

Queue q;
q.enqueue(16);
q.enqueue(17);
q.enqueue(18);
q.enqueue(19);
q.dequeue();
cout<<q.Front()<<endl;



    // stl ..............................

// queue<int>q;
// q.push(15);
// q.push(16);
// q.push(17);
// q.push(18);

// cout<<q.size()<<endl;

// q.pop();

// cout<<q.size()<<endl;

// cout<<q.front()<<endl;
    return 0;
}