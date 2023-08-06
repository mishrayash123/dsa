#include <bits/stdc++.h>
using namespace std;

// Lifo

class Stack
{
 public :
 int *arr;
 int top;
 int size;

Stack (int size){
    this -> size=size;
    arr = new int[size];
    top =-1;
}

void push(int element){
    if(size-top>1){
        top++;
        arr[top]=element;
    }
    else{
        cout<<"overflow"<<endl;
    }

}
void pop(){
if(top >= 0){
    top--;
}
else{
    cout<<"underflow"<<endl;
}
}
int peek(){
 if(top >= 0){
    return arr[top];
 }
 else{
    cout<<"empty"<<endl;
 }
}

bool isempty (){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}

};



int main(){

Stack st(5);
st.push(5);
st.push(6);
st.push(9);
st.push(11);
st.push(45);

cout<<st.peek()<<endl;
st.pop();
cout<<st.peek()<<endl;
cout<<st.isempty()<<endl;


//    stack<int>s;
//    s.push(2);
//    s.push(3);
//    s.pop();

//    cout<<s.top()<<endl;
//    if(s.empty()){
//     cout<<"stack is empty"<<endl;
//    }
//    else{
//      cout<<"stack is not empty and size is "<<s.size()<<endl;
//    }

    return 0;
}