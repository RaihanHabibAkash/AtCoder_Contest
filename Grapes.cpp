#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, apples; cin >> n >> apples;
    int ppl[105] = {0};

    for(int i = 1; i <= n; i++) {
        if(!apples) break;
        ppl[i]++; 
        apples--;
        if(i == n) i = 0;
    }

    for(int i = 1; i <= n; i++)
        cout << ppl[i] << endl;

    return 0;
}