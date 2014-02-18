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
	int n, k, a[100000];
	cin >> n>> k;
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int r = 2000000000;
	int x=0;
	for(int i=0;i<k;i++){
		int sum=0;
		for(int j=i;j<n;j+=k){
			sum+=a[j];
		}
		if(sum<r){
			r = sum;
			x = i;
		}
	}
	
	cout<<x+1<<endl;
	
	
	return 0;
}
