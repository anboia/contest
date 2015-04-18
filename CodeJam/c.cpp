// Google Code Jam 2015
// Problem A. Standing Ovation
// Verdict: doing
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

int t, x, l;
char s[10010];
int op[256];
int d


int f(int i, int j){
	int s = op[s[i++]];

	while(i<=j)
	{
		s = d[s][op[s[i++]]];
	}
}
int main(){
	scanf("%d", &t);
	for (int c = 1; c <= t; ++c)
	{
		scanf("%d%d%s", &x, %l, s);
		int n = x*l;
		if(n<3){
			printf("NO\n");
		}
		else{
			int ok = 1;
			for (int i = 0; i < n-2 && ok; ++i)
			{
				for (int j = i+1; j < n-1 && ok; ++j)
				{
					int a = f(0,i);
					int b = f(i+1,j);
					int c = f(j+1,n-1);
					if(a ==1 && b ==2 && c == 3){
						ok = 0;
					}
				}
			}
			if(ok)printf("NO\n");
			else printf("YES\n");
		}
	}
	return 0;
}


/// 012345