// #include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

// int a[2] = {3, 5};
int x1 = 3;
int x2 = 5;
int main(){
	// printf("%d %d", a[0], a[1]);
    
    int sum = 0;
    for (int i=3;i<1000;i++) {
        if (i%x1 == 0 || i%x2==0) {
            sum += i;
        }
    }
    printf("%d\n",sum);
}