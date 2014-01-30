#include <cstdio>
#include <iostream>

#define db(x) cerr << #x << " == " << x << endl
#define _ << " _ " <<

using namespace std;

int main(){
	int a, b, c, d;
	scanf("%d:%d", &a, &b);
	
	scanf("%d:%d", &c, &d);
	
	int x = (b+a*60) - (d+c*60);
	if(x<0)x+=24*60;
	printf("%02d:%02d\n", x/60, x%60);
	
	
	return 0;
}
