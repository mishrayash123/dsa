#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[8]={2,3,6,1,5,7,6,9};
    int start=0,end=7,key=7;
    int mid=(start+end)/2;
    while(start<=end){
        if(key==arr[mid]){
            cout<<mid<<endl;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }

    return 0;
}

// linear search ---------  o(n) worst case
// binary search ---------- 
// only valid on monotonic functions
// o(logn) N/2^k
// mid = s+ (e-s)/2  for large  int value