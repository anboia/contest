// Codeforces Round #214 (Div. 2)
// Verdict: Accepted
// By Andre Saboia [UFPE]

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <map>

#define db(x) cerr << #x << " == " << x << endl
#define _ << " _ " <<

using namespace std;

int main(){
	int n, a, b, c, d;
	cin >> n;
	for(int i=0;i<4;i++){
		cin>>a>>b>>c>>d;
		if((a+c)<=n){printf("%d %d %d\n", i+1, a, n-a);return 0;}
		else if((a+d)<=n){printf("%d %d %d\n", i+1, a, n-a);return 0;}
		else if((b+c)<=n){printf("%d %d %d\n", i+1, b, n-b);return 0;}
		else if((b+d)<=n){printf("%d %d %d\n", i+1, b, n-b);return 0;}
	}
	cout<<-1<<endl;
	
	return 0;
}
