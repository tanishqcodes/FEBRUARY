#include<bits/stdc++.h>
using namespace std;
int main(){
    // strtok is the function which can help us split a string around some delimiter 
    char str[100] = "I am insanely in love with coding! ";


    // Say we wanna break the string around all the spaces. 

    char* ptr = strtok(str, " ");
    cout<<ptr<<endl;
    while(ptr!=NULL){
        ptr = strtok(NULL, " ");
        cout<<ptr<<endl;
    }
}