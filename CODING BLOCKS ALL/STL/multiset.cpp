/*

You can have the world under your feet,
But all you do is cry,
I know you are scared of failing,
But Oh My Darlin, Give it a try.

    IWRITESOMETIMES | Maansi :)

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define F first
#define S second
#define all(v) v.begin(), v.end()
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define RFOR(i, a, b) for (int i = a; i >= b; i--)
#define rep(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, n, 0)
#define mod 1000000007
#define inf 1000000000
#define endl "\n"
#define srt(ar) sort(ar.begin(), ar.end())
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define pq priority_queue
#define rpq priority_queue<int, vi, greater<int>>
#define init std::fill(hash.begin(), hash.end(), -1)
#define FAST_IO(n)         \
    cout.setf(ios::fixed); \
    cout.precision(n);
#define print(v)        \
    rep(i, v.size())    \
            cout        \
        << v[i] << " "; \
    cout << endl;
#define cin(ar)        \
    for (auto &i : ar) \
    cin >> i
#define mii map<int, int>
#define printf(ans) \
    cout << ans << endl;

int main(){
    vi ar{1,2,3,5,4,65,65,7,65,76};
    multiset<int> s(ar.begin(), ar.end());



    s.insert(12);
    s.erase(65);
    // IT HAS FUNCTIONS SUCH AS FIND, COUNT, make_range, insert, upper_bound, lower_bound, and yeah that's most of it, appearance can be in a sorted order 
    


    for(auto i : s) cout<<i<<" ";




}