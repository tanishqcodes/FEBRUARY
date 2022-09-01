#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4] = {1,2,3,4};
    int key ;
    cin>>key;
    auto itr= find(arr, arr+4, key);
    int idx = itr - arr;
    cout<<idx<<endl;

}