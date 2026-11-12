#include <iostream>
#include<climits>
using namespace std;
int main() {
    int arr[] = {1,3,4,2,13,4,1,2};
    int size=8;
    int smallest = INT_MAX;
    for(int i = 0; i<size; i++){
        smallest= min(arr[i],smallest);
    }
    cout<<"Smallest Element in the array is: "<<smallest<<endl;
    return 0;

}