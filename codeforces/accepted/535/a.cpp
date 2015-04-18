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
string a[] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight","nine"
, "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", " eighteen", "nineteen"};
string b[]={
	"twenty",
	"thirty",
	"forty",
	"fifty",
	"sixty",
	"seventy",
	"eighty",
	"ninety"
};

int main(){
	int n;
	scanf("%d", &n);
	if(n<20) cout<<a[n];
	else {
		cout << b[n/10 - 2];
		if(n%10) cout << "-"<< a[n%10];
	}
	return 0;
}
