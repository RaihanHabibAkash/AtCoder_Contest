#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, v; cin >> n >> v;
    ll arr[n+5];
    for(int i = 1; i <= n; i++) cin >> arr[i];

    ll mx = 0;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            for(int k = 1; k <= n; k++)
                if(i != j && i != k && j != k && i+j+k <= v)
                    mx = max(mx, arr[i]+arr[j]+arr[k]);

    cout << mx << endl;

    return 0;
}