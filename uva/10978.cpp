// https://onlinejudge.org/external/109/10978.pdf
// accepted
#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>

void testcases() {
	#ifndef ONLINE_JUDGE
	freopen("10978.in", "r", stdin);
	freopen("10978.out", "w", stdout);
	#endif
}


int n;
string tmp;

void solve() {
    vector<string> str(n);
    vector<int> len(n);
    vector<string> ans(n, "");

    for (int i=0; i<n; i++) {
        cin>>str[i]>>tmp;
        len[i] = tmp.length();
    }


    for (int j=0, x=-1; j < n; j++) {
        int c = len[j];
        while (c) {
            x = (x+1) % n;
            if(ans[x] == "") {
                c--;
            }
        }
        ans[x] = str[j];
    }

    for (int j=0; j<n; j++) {
        cout<<ans[j]<< (j==n-1?"\n": " ");
    }

}

int main () {
    testcases();

    cin>>n;
    while (n) {
        solve();
        cin>>n;
    }
    return 0;
}