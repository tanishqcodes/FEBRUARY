#include<bits/stdc++.h>
using namespace std;
int main(){
    // new way of inititalising a string 
    string str("hello");
    string sentence(
        "this is gon gonna be a pretty big string now"                        
    );

    int idx =  sentence.find("gonn");
    cout<<idx;

    // Now how to remove a word from a string 
    string word = "pretty";
    int idxx = sentence.find(word);
    sentence.erase(idxx, word.length() + 1);
    cout<<sentence<<endl;

    // Iterators in string 
    // here auto refers to a string iterator which can be written like this 
    // string::iterator
    // We can also replace the string::iterator with auto keyword 
    for(string::iterator itr = str.begin(); itr!=str.end(); itr++){
        cout<<*itr<<endl;
        // Getting the index by using the iterator

        if(*itr == 'h'){
            cout<<"Its index is "<<itr - str.begin()<<endl;
        }
    }
    // FOR EACH LOOP TO TRAVERSE 

    for(char ch : word)cout<<ch<<",";
}