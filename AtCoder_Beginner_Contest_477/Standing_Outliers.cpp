#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, d; cin >> n >> d;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    vector<int> ans;

    for(int i = 0; i < n; i++) {
        bool flag = true;
        for(int j = 0; j < n; j++) {
            int dif = abs(arr[i] - arr[j]);
            if(i != j && dif < d) flag = false;
        }
        if(flag) ans.push_back(i+1);
    }

    cout << ans.size() << endl;
    if(!ans.empty() || d != 0) {
        sort(ans.begin(), ans.end());
        for(int x : ans) cout << x << " ";
        cout << endl;
    }

    return 0;
}