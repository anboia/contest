// https://onlinejudge.org/external/121/12150.pdf
// Accepted
// 2022-08-06 08:42:33
#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>

void testcases() {
	#ifndef ONLINE_JUDGE
	freopen("12150.in", "r", stdin);
	freopen("12150.out", "w", stdout);
	#endif
}


int n;

void solve() {
    vector<int> ans(n);
    int ok = 1;
    int c, p;
    for (int i = 0; i<n ; i++) {
        scanf("%d %d", &c, &p);
        int pos = i + p;
        if (0 <= pos && pos < n && !ans[pos]) {
            ans[pos] = c;
        } else {
            ok = 0;
        }
    }
    if (ok) {
        for (int i = 0; i<n ; i++) {
            printf("%d%c", ans[i], i==n-1 ? '\n': ' ');
        }
    } else {
        printf("-1\n");
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