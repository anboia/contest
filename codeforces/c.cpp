#include <cstdio>
#include <cstring>
#include <iostream>

#define db(x) cerr << #x << " == " << x << endl
#define _ << " _ " <<
#define max(a,b) ((a)>(b)?(a):(b))

using namespace std;

char s[10001];
int a[10000];

int main(){
	scanf("%s", s);
	int n = strlen(s);
	for(int i=0;i<n;i++) a[n-i-1] = s[i]-'0';
	
	
	int r=0;
	
	for(int i=0;i<n && j<n;){
		
		int j=1;
		int b=2;
		
		int k=i;
		int c=1
		
		while(i<n && j<n || !a[j]){
			//a[i]>a[j]
			i++;
			b<<=1;
			j=b-1;
			k++;
		}
		
	}
	
	
	
	
	return 0;
}
