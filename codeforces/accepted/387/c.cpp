// Codeforces Round #227 (Div. 2)
// Verdict: Accepted
// By Andre Saboia [UFPE]

#include <cstdio>
#include <cstring>
#include <iostream>

#define db(x) cerr << #x << " == " << x << endl
#define _ << " _ " <<

using namespace std;

char s[100000];
int a[100000];

int main(){
	scanf("%s", s);
	int n = strlen(s);
	for(int i=0;i<n;i++) a[n-i-1] = s[i]-'0';
	
	
	int r=0;
	
	for(int i=0;i<n;i++){
		
		if( a[i] && (  i+2<n || (i+1<n && a[i+1]>=a[i])  ) )r++;
		
		if(!a[i]){
			int j=i;
			while(!a[++i]);
			int k = (i<<1)-j+1;
			if( k+1<n || (k<n && a[k]>=a[i]) )r++;
			else break;
		}
	}
	cout << r+1 << "\n";
	
	return 0;
}
