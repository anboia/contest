// Codeforces Round #210 (Div. 2)
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
int n, k;
int main(){
	scanf("%d%d", &n, &k);
	int d = n-k;
	int ok = 0;
	if(d){
		int i = d&1;
		if(i){
			printf("1");
		}
		for (; i < d; i+=2)
		{
			if(i)printf(" ");
			printf("%d %d", i+2, i+1);
		}
		for (++i ; i <= n; ++i)
		{
			if(i)printf(" ");
			printf("%d", i);
		}
		printf("\n");
	}
	else {
		printf("-1\n");
	}

	return 0;
}
