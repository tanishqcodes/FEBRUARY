#include<bits/stdc++.h>
using namespace std;






bool comp(int a, int b){
    // Any doubts then please refer love babbar video, Jis order me tujhe chaiye usi order me likh do bas 
    // bade se chota chahiye agar toh likho a > b a is bada b is chota hoga hamesha aur agar chote se bada chahiye toh a < b phle aayega chota which is a aur fir aayega bada which is b 
    return a < b;
}
int main(){
    
    int ar[5] = {1, 5, 3, 2, 7};

    sort(ar, ar+5, comp);
    for(int i = 0; i < 5; i++){
        cout<<ar[i]<<" ";
    }

}