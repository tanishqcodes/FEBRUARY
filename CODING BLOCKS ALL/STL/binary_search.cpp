#include<bits/stdc++.h>
using namespace std;
int main(){
    int key; cin>>key;
    vector<int> ar = {1,2,3,4, 6, 11,11,11, 19, 21, 45, 124};
    bool present = binary_search(ar.begin(), ar.end(), key);
    cout<<present<<endl;

    

    auto itr = lower_bound(ar.begin(), ar.end(), key);


    auto itr = upper_bound(ar.begin(), ar.end(),6);
    cout<<itr-ar.begin()<<endl; 


    // UPPER BOUND HAMESHA JO ELEMENT FIND KARNA HAI USSE BADE ELEMENT KA ADDRESS DETA HAI AUR LOWER BOUND HAMESHA JO ELEMENT DHOONDNA AGAR WO PRESENT HUA TOH USKA ADDRESS NAHI TOH JO ELEMENT BADA HAI USKA ADDRESS DETA HAI ! 
    

}