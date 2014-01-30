#include <cstdio>
#include <iostream>

#define db(x) cerr << #x << " == " << x << endl
#define _ << " _ " <<
#define max(a,b) ((a)>(b)?(a):(b))

using namespace std;

int n, m;
int a[3003], b[3003];

int main(){
	scanf("%d%d", &n, &m);
	for(int i=0;i<n;i++)scanf("%d", a+i);
	for(int i=0;i<m;i++)scanf("%d", b+i);
	
	int r=0;
	for(int i=n-1, j=m-1;j>=0 && i>=0;j--, i--){
		if(b[j]<a[i])j++;
		else r++;
	}
	printf("%d\n", n-r);
	
	return 0;
}
