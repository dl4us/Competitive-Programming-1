#pragma GCC optimize "Ofast"
#pragma GCC optimize "unroll-loops"
#pragma GCC optimize "omit-frame-pointer"
#pragma GCC optimize "prefetch-loop-arrays"
#pragma GCC target "sse,sse2,sse3,sse4,abm,avx,aes,sse4a,sse4.1,sse4.2,mmx,popcnt,tune=native"
#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define pb push_back
#define FILL(a, b) memset(a, b, sizeof(a))

typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef vector<int> vi;
typedef vector<pii> vii;

const int INF = 0x3f3f3f3f;
const ll INFL = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;

ll gcd(ll a, ll b){return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b){return a*b/gcd(a,b);}
ll fpow(ll b, ll exp, ll mod){if(exp == 0) return 1;ll t = fpow(b,exp/2,mod);if(exp&1) return t*t%mod*b%mod;return t*t%mod;}
ll divmod(ll i, ll j, ll mod){i%=mod,j%=mod;return i*fpow(j,mod-2,mod)%mod;}

vector<ll> collatz(ll n) {
    vector<ll> v;
    v.pb(n);
    while(n != 1) {
        if(n % 2 == 0) { n /= 2; }
        else { n = 3*n+1;  }
        v.pb(n);
    }
    return v;
}

int find(int n, vector<ll> v) {
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == n) {
            return i;
        }
    }
    return -1;
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    while(1) {
        ll a, b; cin >> a >> b;
        if(a == 0 || b == 0) { break; }
        vector<ll> va = collatz(a);
        vector<ll> vb = collatz(b);
        int i, j;
        for(i = 0; i < va.size(); i++) {
            j = find(va[i], vb);
            if(j != -1) { break; }
        }
        cout << a << " needs " << i << " steps, " << b << " needs " << j << " steps, they meet at " << va[i] << "\n";
    }
    return 0;
}
