#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    string s; cin >> s;
    sort(s.begin(), s.end());
    do {
        cout << s << "\n";
    } while(next_permutation(s.begin(), s.end()));
    return 0;
}
