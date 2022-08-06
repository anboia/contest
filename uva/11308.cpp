// https://onlinejudge.org/external/109/10978.pdf
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

void solve() {
    string title;
    int m, n, b;
    map<string, int> ingredients;
    vector< pair<int, string> > recipes;

    getline(cin, title);
    cin >> m >> n >> b;
    for (int j=0; j<m; j++) {
        string ing;
        int val;
        cin>>ing;
        scanf("%d\n", &val);
        ingredients[ing] = val;
    }

    for (int j=0; j<m; j++) {
        string name;
        int total;
        getline(cin, name);
        // cout << name << "\n";
        int x;
        cin>>x;
        for (int k=0; k<x; k++) {
            string ing;
            int val;
            cin>>ing;
            scanf("%d\n", &val);
            total += (ingredients[ing]) * val;
        }
        recipes.push_back( make_pair( total, name ) );
    }

    sort(recipes.begin(), recipes.end());

    for (auto & c: title) c = toupper(c); //https://stackoverflow.com/questions/735204/convert-a-string-in-c-to-upper-case
    
    cout << title << "\n";

    if (recipes[0].first <= b) {
        for (int j=0; j<m; j++) {
            if (recipes[j].first <= b) {
                cout << recipes[j].second;
            } else {
                break;
            }
        }
    } else {
        cout << "Too expensive!\n";
    }
    cout <<"\n";
}

int main () {
    testcases();
    int t;
    scanf("%d\n", &t);
    while (t--) {
        solve();
    }
    return 0;
}