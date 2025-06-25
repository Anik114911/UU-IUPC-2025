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
const ll mod = 1e9 + 7;

Infinite Void() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n >= 5){
        no return;
    }
    for(int j=2;j<=n;j++){
        int l = 0, r = 0;
        while(r < n){
            if(r - l + 1 == j){
                int ans = 0;
                for(int i=l;i<=r;i++) ans = ans * 10 + s[i] - '0';
                if(ans % j != 0){
                    no return;
                }
                l++;
            }
            r++;
        }
    } yes 
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
