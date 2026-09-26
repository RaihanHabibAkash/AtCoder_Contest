// TLE -> Time limit exceeded
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int q; string s, sub;
    cin >> q >> s >> sub;

    while(q--) {
        int l, r; cin >> l >> r;
        string tmp = s.substr(l-1, r-l+1);

        if(tmp.find(sub) != string::npos) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}