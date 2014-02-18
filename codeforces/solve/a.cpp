// Codeforces Round #
// Verdict: Unknown
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


int d[256];
int a[256];
char s[200];
int main(){
	cin>> s;
	d['n']=2;
	d['e']=3;
	d['i']=1;
	d['t']=1;

	for(int i=0;s[i];i++){
		a[s[i]]++;
	}
	int r=0;
	while(1){
		a['n']-=d['n'];
		a['e']-=d['e'];
		a['i']-=d['i'];
		a['t']-=d['t'];
		
		if(a['n']>=0 &&a['e']>=0 &&a['i']>=0 &&a['t']>=0)r++;
		else break;
	}
	a['n']++;
	if(a['n']<0)r--;
	
	cout<<r;
	return 0;
}