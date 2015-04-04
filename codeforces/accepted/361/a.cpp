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
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(j)printf(" ");
			if(i == j)printf("%d", k);
			else printf("0");
		}
		printf("\n");
	}
	return 0;
}
