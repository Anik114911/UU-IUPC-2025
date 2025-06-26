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
const int N = 1e9;

struct node{
    int u,v,x;
};

Infinite Void() {
    int n,m;
    cin >> n >> m;
    vector<int> a(n+1,N);
    vector<node> vec(m);
    bool ok = true;
    for(int i=0;i<m;i++){
        int u,v,x;
        cin >> u >> v >> x;
        vec[i].u = u;
        vec[i].v = v;
        vec[i].x = x;
        a[u] = min(a[u],x);
        a[v] = min(a[v],x);
    }
    for(auto [x,y,z] : vec){
        int mx = max(a[x],a[y]);
        if(mx != z){
            cout << -1 << endl;
            return;
        }
    }
    for(int i=1;i<=n;i++) cout << a[i] << " ";
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
