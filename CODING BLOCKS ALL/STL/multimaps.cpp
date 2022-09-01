#include<bits/stdc++.h>
using namespace std;
int main(){
    multimap<char, string> mp;
    int n; cin>>n;
    for(int i = 0; i < n; i++){
        char ch; string str;
        cin>>ch>>str;
        mp.insert(make_pair(ch, str));
    }

    auto itr = mp.find('m');
    cout<<itr->second<<endl;

    cout<<mp.count('m')<<endl;


    for(auto i : mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
}