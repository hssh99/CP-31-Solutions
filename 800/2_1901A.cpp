#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin>>t;

    while(t--) {
        int n, x;
        cin>>n>>x;

        vector<int> a(n);
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }
        int ans=0, last=0;

        for(int i=0; i<n; i++) {
            ans = max(ans, a[i]-last);
            last = a[i];
        }
        ans = max(ans, 2 * (x-a[n-1]));
        cout<<ans<<endl;
    }
}


int main() {
    solve();
    return 0;
}