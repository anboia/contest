#include <bits/stdc++.h>
// c++ sol : https://codeforces.com/contest/1703/submission/167030185
// c solution: https://codeforces.com/contest/1703/submission/164000441

using namespace std;


void solve () {
    int n;
    
    scanf("%d", &n);
    
    vector<string> w(n);
    set<string> memo;
    vector<int> ans(n);

    for (int i=0;i<n;i++) {
        cin>>w[i];
        memo.insert(w[i]);
    }
    for (int i=0;i<n;i++) {
        int m = w[i].size();
        for (int j=0; j < m ;j++) {
            string a = w[i].substr(0,j+1);
            string b = w[i].substr(j+1, m);
            if (memo.count(a) && memo.count(b)) {
                ans[i] = 1;
                break;
            }
        }
        // --
    }
    for (int i=0;i<n;i++){
        cout << ans[i];
    }
    cout << "\n";

}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
}