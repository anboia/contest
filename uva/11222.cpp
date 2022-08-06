// https://onlinejudge.org/external/112/11222.pdf
// 
// 
#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>

void testcases() {
	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif
}

/*
count -> 1 - 10000
step 1
    - read input
    - increment 'count' for each problem
step 2
    - for each list check unique problems
    - create a list of unique
    - memorize the max solved at the end of each list created - x
step 3
    - just pring the list that match x solved uniquely, sorted
*/

int n, c;

void solve() {
    vector<int> a[3];
    vector<int> count(10001);
    vector<int> memo[3];

    for (int j=0; j<3; j++) {
        int m;
        cin>>m;
        // a[j].resize(m);
        for(int h=0; h<m; m++) {
            // cin>>a[j][h];
            // count[a[j][h]]++;
            int temp;
            cin>>temp;
            a[j].push_back(temp);
            count[temp]++;
        }
    }

    // int nmax = 0;
    
    for (int j=0; j<3; j++) {
        for (int h=0; h<a[j].size(); h++) {
            if (count[a[j][h]] == 1) {
                memo[j].push_back(a[j][h]);
            }
        }
        if (memo[j].size() > nmax) {
            nmax = memo[j].size();
        }
    }

    cout << "Case #" << c << ":\n";
    // print the guys with max unique probles

    for (int j=0; j<3; j++) {
        if (memo[j].size() == nmax) {
            cout << j+1 << " " << nmax;
            sort (memo[j].begin(), memo[j].end());
            for (int h=0; h<nmax; h++) {
                cout << " " << memo[j][h];
            }
            cout << "\n";
        }
    }
}

int main () {
    testcases();

    cin>>n;
    for(c=1; c<=n; c++) {
        solve();
    }
    return 0;
}