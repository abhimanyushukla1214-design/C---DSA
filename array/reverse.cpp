#include<iostream>
using namespace std;
int main(){
    int arr[]={3,22,42,1,42,43,23,32,13};
    int size=9;
    int start = 0;
    int end=size - 1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
    cout<<"Reversed Array is: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}