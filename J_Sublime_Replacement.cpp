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
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    ll cnt = 0, sum = 0, mx = 0, val = 0;
    for(int i=0;i<n;i++){
        if(a[i] == -1){
            cnt++;
            mx = max(mx,sum + (cnt * N));
        }
        else if(a[i] >= val){
            sum += (cnt + 1) * a[i];
            mx = max(mx,sum);
            cnt = 0;
            val = a[i];
        }
        else{
            sum = val = a[i];
            if(i && a[i-1] == -1) sum += val * cnt;
            mx = max(mx,sum);
            cnt = 0;
        }
    }
    cout << mx << endl;
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
