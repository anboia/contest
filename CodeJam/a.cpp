// Google Code Jam 2015
// Problem A. Standing Ovation
// Verdict: acc
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

int t, m;
char s[1010];

int main(){
	scanf("%d", &t);
	for (int c = 1; c <= t; ++c)
	{
		scanf("%d%s", &m, s);
		int ans = 0, sum = s[0]-'0';

		for (int i = 1; s[i]; ++i)
		{
			int j = s[i]-'0';
			if( j && sum < i){
				ans += i-sum;
				j += i-sum;
			}
			sum += j;
		}
		printf("Case #%d: %d\n", c, ans);
	}
	return 0;
}
