#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m; cin >> n >> m;
    int arr[n+5];
    vector<int> srt;
    for(int i = 1; i <= n; i++) {
        int x; cin >> x;
        arr[i] = x;
        srt.push_back(x);
    }

    sort(srt.begin(), srt.end());

    bool flag = true;
    bool start = false;
    for(int i = 1; i <= n; i++) {
        if(srt[i-1] != arr[i]) start = true;

        if(start) {
            m--;
            if(m < 0 && srt[i-1] != arr[i]) flag = false;
        }
    }

    cout << (flag ? "Yes" : "No") << endl;

    return 0;
}