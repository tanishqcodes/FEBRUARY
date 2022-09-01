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

int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}
ll ncr(int n, int r)
{
    long long p = 1, k = 1;
    if (n - r < r)
        r = n - r;
    if (r != 0)
    {
        while (r)
        {
            p *= n;
            k *= r;
            long long m = __gcd(p, k);
            p /= m;
            k /= m;
            n--;
            r--;
        }
    }
    else
        p = 1;
    return p;
}
bool comp(const pll &a, const pll &b)
{
    return a.first < b.first;
}

vector<int> fn(int k)
{
}

vector<vector<int>> fnn(int n)
{
}


void solve()
{
    // vi a{1,2,4};
    // vi c (5, -1);
    // vi b = c;
    // printf(b.size());


    // // Using iterators 

    // for(vector<int>::iterator itr = a.begin(); itr!=a.end(); itr++){
    //     cout<<*itr<< " ";
    // }

    // // 
    // cout<<endl<<endl;

    // vi ar(2);
    // vi arr;

    // arr.pb(4);
    // cout<<arr.capacity()<<" "<<arr.size()<<endl;
    // arr.pb(3);
    // cout<<arr.capacity()<<" "<<arr.size()<<endl;
    // arr.pb(3);
    // cout<<arr.capacity()<<" "<<arr.size()<<endl;
    // arr.pb(34);
    // cout<<arr.capacity()<<" "<<arr.size()<<endl;
    // arr.pb(23);
    // cout<<arr.capacity()<<" "<<arr.size()<<endl;
    // arr.pb(3);
    // cout<<arr.capacity()<<" "<<arr.size()<<endl;
    // arr.pb(34);
    // cout<<arr.capacity()<<" "<<arr.size()<<endl;
    // arr.pb(23);
    // cout<<arr.capacity()<<" "<<arr.size()<<endl;
    // arr.pb(3);
    // cout<<arr.capacity()<<" "<<arr.size()<<endl;
    // arr.pb(34);
    // cout<<arr.capacity()<<" "<<arr.size()<<endl;
    // arr.pb(23);
    // cout<<arr.capacity()<<" "<<arr.size()<<endl;
    // cout<<arr.capacity()<<" "<<arr.size()<<endl;
    // arr.pb(3);
    // cout<<arr.capacity()<<" "<<arr.size()<<endl;
    // arr.pb(3);
    // cout<<arr.capacity()<<" "<<arr.size()<<endl;
    // arr.pb(34);
    // cout<<arr.capacity()<<" "<<arr.size()<<endl;
    // arr.pb(23);
    // cout<<arr.capacity()<<" "<<arr.size()<<endl;
    // arr.pb(3);
    // cout<<arr.capacity()<<" "<<arr.size()<<endl;
    // arr.pb(34);
    // cout<<arr.capacity()<<" "<<arr.size()<<endl;
    // arr.pb(23);
    // cout<<arr.capacity()<<" "<<arr.size()<<endl;
    // arr.pb(3);
    // cout<<arr.capacity()<<" "<<arr.size()<<endl;
    // arr.pb(34);
    // cout<<arr.capacity()<<" "<<arr.size()<<endl;
    // arr.pb(23);



    // --//  NOW LET'S LEARN ABOUT VECTORS METHODS ---


    vi vec{1,2,5,7,11,3,9};
    // 1) PUSH BACK = O(1)
    vec.pb(7);
    // 2) POP _BACK O(1)
    vec.pop_back();

    // INSERT IN THE VECTOR  o(N)
    vec.insert(vec.begin()+1,{100,100,100});
    // print(vec);

    // erase some element from the vector takes two argument or one 

    vec.erase(vec.begin()+1, vec.begin() + 4); 
    print(vec);

    cout<<vec.capacity()<<endl;

    vec.resize(3);

    cout<<vec.capacity()<<endl;
    print(vec);


    //  Then we have empty function and clear method and erase 
    vec.clear();
    if(vec.empty()) cout<<"NONE";

    // RESERVE METHOD FOR VECTORS 
    
    
}

int main()
{
    fastio;
    solve();
}
