// SRM #
// Verdict: unknown
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
#define maxn 32000 //sqrt(10^9) = 32000
bool p[maxn];
int prime[maxn], primeN;
unsigned long long pa[maxn], pc[maxn];
struct BigFatInteger2 {
	void init(){
		primeN = 0;
		memset(p,1, sizeof p);
		
		p[0]=p[1];
		for(int i=2;i<maxn;i++){
			if(p[i]){
				prime[primeN++] = i;
				for(int j=i*i;j<maxn;j+=i){
					p[j]=0;
				}
			}
		}
	}
	void factorize(int x, int * v){
		memset(v, 0, sizeof(unsigned long long )*maxn);
		for(int i=0;x>1;i++){
			while(x%prime[i] == 0){
				v[i]++;
				x/=prime[i];
			}
		}
	}
    string isDivisible(int A, int B, int C, int D) {
		init();
		
		factorize(A, pa);
		//factorize(B, pc);
		
		
		for(int i=0;i<primeN;i++){
			if(pa[i]*B>pc[i]*D)return "not divisible";
		}
		
        return "divisible";
    }
};

// BEGIN CUT HERE
#include <cstdio>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
namespace moj_harness {
	using std::string;
	using std::vector;
	int run_test_case(int);
	void run_test(int casenum = -1, bool quiet = false) {
		if (casenum != -1) {
			if (run_test_case(casenum) == -1 && !quiet) {
				std::cerr << "Illegal input! Test case " << casenum << " does not exist." << std::endl;
			}
			return;
		}
		
		int correct = 0, total = 0;
		for (int i=0;; ++i) {
			int x = run_test_case(i);
			if (x == -1) {
				if (i >= 100) break;
				continue;
			}
			correct += x;
			++total;
		}
		
		if (total == 0) {
			std::cerr << "No test cases run." << std::endl;
		} else if (correct < total) {
			std::cerr << "Some cases FAILED (passed " << correct << " of " << total << ")." << std::endl;
		} else {
			std::cerr << "All " << total << " tests passed!" << std::endl;
		}
	}
	
	int verify_case(int casenum, const string &expected, const string &received, std::clock_t elapsed) { 
		std::cerr << "Example " << casenum << "... "; 
		
		string verdict;
		vector<string> info;
		char buf[100];
		
		if (elapsed > CLOCKS_PER_SEC / 200) {
			std::sprintf(buf, "time %.2fs", elapsed * (1.0/CLOCKS_PER_SEC));
			info.push_back(buf);
		}
		
		if (expected == received) {
			verdict = "PASSED";
		} else {
			verdict = "FAILED";
		}
		
		std::cerr << verdict;
		if (!info.empty()) {
			std::cerr << " (";
			for (size_t i=0; i<info.size(); ++i) {
				if (i > 0) std::cerr << ", ";
				std::cerr << info[i];
			}
			std::cerr << ")";
		}
		std::cerr << std::endl;
		
		if (verdict == "FAILED") {
			std::cerr << "    Expected: \"" << expected << "\"" << std::endl; 
			std::cerr << "    Received: \"" << received << "\"" << std::endl; 
		}
		
		return verdict == "PASSED";
	}

	int run_test_case(int casenum__) {
		switch (casenum__) {
		case 0: {
			int A                     = 6;
			int B                     = 1;
			int C                     = 2;
			int D                     = 1;
			string expected__         = "divisible";

			std::clock_t start__      = std::clock();
			string received__         = BigFatInteger2().isDivisible(A, B, C, D);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			int A                     = 2;
			int B                     = 1;
			int C                     = 6;
			int D                     = 1;
			string expected__         = "not divisible";

			std::clock_t start__      = std::clock();
			string received__         = BigFatInteger2().isDivisible(A, B, C, D);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			int A                     = 1000000000;
			int B                     = 1000000000;
			int C                     = 1000000000;
			int D                     = 200000000;
			string expected__         = "divisible";

			std::clock_t start__      = std::clock();
			string received__         = BigFatInteger2().isDivisible(A, B, C, D);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			int A                     = 8;
			int B                     = 100;
			int C                     = 4;
			int D                     = 200;
			string expected__         = "not divisible";

			std::clock_t start__      = std::clock();
			string received__         = BigFatInteger2().isDivisible(A, B, C, D);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 4: {
			int A                     = 999999937;
			int B                     = 1000000000;
			int C                     = 999999929;
			int D                     = 1;
			string expected__         = "not divisible";

			std::clock_t start__      = std::clock();
			string received__         = BigFatInteger2().isDivisible(A, B, C, D);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 5: {
			int A                     = 2;
			int B                     = 2;
			int C                     = 4;
			int D                     = 1;
			string expected__         = "divisible";

			std::clock_t start__      = std::clock();
			string received__         = BigFatInteger2().isDivisible(A, B, C, D);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 6: {
			int A                     = ;
			int B                     = ;
			int C                     = ;
			int D                     = ;
			string expected__         = ;

			std::clock_t start__      = std::clock();
			string received__         = BigFatInteger2().isDivisible(A, B, C, D);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			int A                     = ;
			int B                     = ;
			int C                     = ;
			int D                     = ;
			string expected__         = ;

			std::clock_t start__      = std::clock();
			string received__         = BigFatInteger2().isDivisible(A, B, C, D);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 8: {
			int A                     = ;
			int B                     = ;
			int C                     = ;
			int D                     = ;
			string expected__         = ;

			std::clock_t start__      = std::clock();
			string received__         = BigFatInteger2().isDivisible(A, B, C, D);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
		default:
			return -1;
		}
	}
}
 

#include <cstdlib>
int main(int argc, char *argv[]) {
	if (argc == 1) {
		moj_harness::run_test();
	} else {
		for (int i=1; i<argc; ++i)
			moj_harness::run_test(std::atoi(argv[i]));
	}
}
// END CUT HERE

// BEGIN CUT HERE
/**
// PROBLEM STATEMENT
// This problem statement contains superscipts that may not display properly outside the applet.

You are given four ints A, B, C and D. Return "divisible" (quotes for clarity) if AB is divisible by CD. Return "not divisible" otherwise.

DEFINITION
Class:BigFatInteger2
Method:isDivisible
Parameters:int, int, int, int
Returns:string
Method signature:string isDivisible(int A, int B, int C, int D)


NOTES
-The return value is case-sensitive.
-Positive integer y divides a positive integer x if and only if there is a positive integer z such that y*z=x. In particular, for each positive integer x, both 1 and x divide x.


CONSTRAINTS
-A, B, C and D will each be between 1 and 1,000,000,000 (109), inclusive.


EXAMPLES

0)
6
1
2
1

Returns: "divisible"

Here, AB = 61 = 6 and CD = 21 = 2. 6 is divisible by 2.

1)
2
1
6
1

Returns: "not divisible"

2 is not divisible by 6.

2)
1000000000
1000000000
1000000000
200000000

Returns: "divisible"

Now the numbers are huge, but we can see that AB is divisible by CD from the fact that A=C and B>D.

3)
8
100
4
200

Returns: "not divisible"

We can rewrite 8100 as (23)100 = 2300.
Similarly, 4200 = (22)200 = 2400.
Thus, 8100 is not divisible by 4200.

4)
999999937
1000000000
999999929
1

Returns: "not divisible"

Here A and C are distinct prime numbers, which means AB cannot have C as its divisor.

5)
2
2
4
1

Returns: "divisible"



**/
// END CUT HERE
