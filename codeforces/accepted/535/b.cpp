// Codeforces Round #299 (Div. 2)
// Verdict: ACC
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
char s[100];
int main(){
	scanf("%s", s);
	int n = strlen(s);
	int k = s[n-1] == '7' ? 1 : 0, x = 0;
	for (int i = n-2, j=2; i>=0; --i, j<<=1)
	{
		if(s[i] == '7') k+=j;
		x+=j;
	}
	printf("%d\n", k+x+1);

	return 0;
}
