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


int s[170][170];
int n;
double a[170][170], b[170][170];
int main(){
	cin>> n;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++){
		scanf("%d", &s[i][j]);
		
	}
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++){
		a[i][j]=a[j][i] = (s[i][j]+s[j][i])/2.0;
		if(i==j)continue;
		b[i][j] = s[i][j]-a[i][j];
		b[j][i] = -b[i][j];
	}
	for(int i=0;i<n;i++){
		printf("%.8lf", a[i][0]);
		for(int j=1;j<n;j++){
			printf(" %.8lf", a[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0;i<n;i++){
		printf("%.8lf", b[i][0]);
		for(int j=1;j<n;j++){
			printf(" %.8lf", b[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
