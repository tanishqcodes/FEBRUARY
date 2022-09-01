#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std; 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
int main(){
    pbds st;
    st.insert(1);
    st.insert(4);
    st.insert(13);
    st.insert(12);
    st.insert(7);
    st.insert(15);
    st.insert(12);

    set<int>s;
    s.insert(10)    ;
    s.insert(23);
    st.insert(3);
   

    // for(auto i : st) cout<<i<<endl;

    for(int i = 0; i < st.size(); i++){
        cout<<i<<" "<<*st.find_by_order(i)<<endl;
    }
}