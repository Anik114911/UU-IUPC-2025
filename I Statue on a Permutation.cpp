#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using ll = long long;
using ld = long double;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl '\n'
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define e4 signed main()
#define Infinite void 
#ifdef LOKAL
#include "Debug_Template.h"
#else
#define HERE
#define debug(args...) 
#endif 
using namespace std;
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const double PI = acos(-1.0);
const ll N = 1e9;

Infinite Void() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0,val = 1;
    if(s[0] == 'B') cnt++;
    for(int i=1;i<n;i++){
        if(s[i] == 'B' && s[i-1] == 'B'){
            cnt = 0;
            break;
        }
        if(s[i] == 'B') cnt++;
    }
    if(!cnt){
        cout << -1 << endl;
        return;
    }
    vector<int> a(n);
    int idx = -1;
    for(int i=0;i<n;i++){
        if(idx == -1 && s[i] == 'B') idx = i;
        if(s[i] == 'B'){
            a[i] = val;
            val++;
        }
    }
    for(int i=idx+1;i<n;i++){
        if(s[i] == 'A'){
            a[i] = val;
            val++;
        }
    }
    val = n;
    for(int i=0;i<idx;i++){
        if(s[i] == 'A'){
            a[i] = val;
            val--;
        }
    }
    for(auto x : a) cout << x << " ";
    cout << endl;
}

e4{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        // cout << "Case " << i << ": ";
        Void();
    }
    return 0;
}
