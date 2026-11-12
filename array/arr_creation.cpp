#include <iostream>
#include <vector>
using namespace std;
int main() {
    cout<<"Array Creation";
    cout<<"\nEnter the size of Array:";
    int n;
    cin>>n;

    vector<int> arr(n);
    cout<<"\nEnter the elements of array:";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    for(int i = 0; i<n; i++) {
        cout<<arr[i]<<endl;
    }
    return 0;
    
}



