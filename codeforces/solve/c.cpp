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


int main(){
	int n;
	cin>>n;
	if(n<=3){
		cout<<(1<<(n+1));
	}else{
	int k=0;
	n-=2;
	for(int x=0, y=n;x<=n && y>0;x++){
		if((sqrt(double(x*x+y*y)))<=n+0.0000000001){
			k++;
			db(x _ y);
		}else{
			while(!((sqrt(double(x*x+y*y)))<=n+0.0000000001)){
				k++;
				y--;
			}
			k++;
		}
		
		
	}
	cout<<k*4<<endl;
	}
	return 0;
	
}
