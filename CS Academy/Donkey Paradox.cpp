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

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m; cin>>n>>m;
    int x1,y1; cin>>x1>>y1;
    int x2,y2; cin>>x2>>y2;
    int count=0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if(abs(x1-i)+abs(y1-j)==abs(y2-j)+abs(x2-i)) {
//                cout<<x1<<" "<<y2<<"\n";
//                cout<<x1<<" "<<y2<<"\n";
                count++;
            }
        }
    }
    cout << count << "\n";
    return 0;
}