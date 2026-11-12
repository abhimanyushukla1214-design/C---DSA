#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> vec={1,2,1,4,6,6,7,7,2};
int answer=0;
for(int val:vec){
    answer^=val;
}
cout<<answer<<endl;

}