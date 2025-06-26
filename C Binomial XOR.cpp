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
const ll mod = 998244353;
const ll N = 1e6 + 5;
ll f[N];
ll num[N];

ll power(ll x, ll n){
    ll ans = 1;
    while(n > 0){
        if(n & 1){
            ans = ans * x % mod;
        }
        x = x * x % mod;
        n >>= 1;
    }
    return ans;
}

Infinite Void() {
    ll n;
    cin >> n;
    if(n & 1) cout << (num[n/2] ^ 1LL) << endl;
    else cout << num[n/2] << endl;
}

e4{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;
    f[0] = f[1] = 1;
    for(ll i=2;i<N;i++) f[i] = (i * f[i-1]) % mod;
    num[0] = 0;
    num[1] = 2;
    for(ll i=2;i<N/2;i++){
        ll ans = (f[i] * f[i]) % mod;
        ans = power(ans,mod-2);
        ans = (ans * f[i*2]) % mod;
        num[i] = ans ^ num[i-1];
    }
    for (ll i = 1; i <= t; ++i) {
        // cout << "Case " << i << ": ";
        Void();
    }
    return 0;
}
