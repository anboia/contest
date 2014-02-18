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

struct CombinationLockDiv2 {
	int a[20];
    int minimumMoves(string S, string T) {
		int r=0, n=S.length();
		memset(a,0,sizeof a);
		for(int i=0;i<n;i++){
			a[S[i]-T[i]+10]=1;
		}
		for(int i=0;i<20;i++){
			r+=a[i];
		}
        return r;
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
	
	int verify_case(int casenum, const int &expected, const int &received, std::clock_t elapsed) { 
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
			std::cerr << "    Expected: " << expected << std::endl; 
			std::cerr << "    Received: " << received << std::endl; 
		}
		
		return verdict == "PASSED";
	}

	int run_test_case(int casenum__) {
		switch (casenum__) {
		case 0: {
			string S                  = "123";
			string T                  = "112";
			int expected__            = 1;

			std::clock_t start__      = std::clock();
			int received__            = CombinationLockDiv2().minimumMoves(S, T);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			string S                  = "1";
			string T                  = "7";
			int expected__            = 4;

			std::clock_t start__      = std::clock();
			int received__            = CombinationLockDiv2().minimumMoves(S, T);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			string S                  = "607";
			string T                  = "607";
			int expected__            = 0;

			std::clock_t start__      = std::clock();
			int received__            = CombinationLockDiv2().minimumMoves(S, T);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			string S                  = "1234";
			string T                  = "4567";
			int expected__            = 3;

			std::clock_t start__      = std::clock();
			int received__            = CombinationLockDiv2().minimumMoves(S, T);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 4: {
			string S                  = "020";
			string T                  = "909";
			int expected__            = 2;

			std::clock_t start__      = std::clock();
			int received__            = CombinationLockDiv2().minimumMoves(S, T);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 5: {
			string S                  = "4423232218340";
			string T                  = "6290421476245";
			int expected__            = 18;

			std::clock_t start__      = std::clock();
			int received__            = CombinationLockDiv2().minimumMoves(S, T);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 6: {
			string S                  = ;
			string T                  = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = CombinationLockDiv2().minimumMoves(S, T);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			string S                  = ;
			string T                  = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = CombinationLockDiv2().minimumMoves(S, T);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 8: {
			string S                  = ;
			string T                  = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = CombinationLockDiv2().minimumMoves(S, T);
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
// Andrew has a combination lock.
The lock consists of multiple dials that are placed next to each other.
Each dial contains the digits 0 through 9, in order.
At any moment, exactly one of the digits on each dial is visible.
The string formed by the currently visible digits is called the current combination.

The visible digit on a dial can be changed by rotating the dial up or down.
Rotating the dial up changes 0 to 1, 1 to 2, and so on.
Note that the digits on a dial wrap around: if we rotate up a dial that shows a 9, it will show a 0 again.
Naturally, rotating the dial down changes the digit in the other direction.

We are able to rotate multiple dials at the same time, as long as they are next to each other.
More precisely, in a single turn we can take an arbitrarily long segment of consecutive dials, and rotate all of them one step in the same direction (i.e., either all of them up, or all of them down).

For example, suppose that the current combination is "123".
In one step, we can change it to many different combinations, including "012" (all three dials down), "234" (all three dials up), "133" (middle dial up), and "013" (first two dials down).
Note that we cannot change "123" to "224" in a single step.

You are given two strings: S and T.
S is the current combination, T is the secret combination that unlocks the lock.
That is, to open the lock we need to change S into T by rotating some of the dials.
Return the smallest number of steps needed.

DEFINITION
Class:CombinationLockDiv2
Method:minimumMoves
Parameters:string, string
Returns:int
Method signature:int minimumMoves(string S, string T)


CONSTRAINTS
-S will contain between 1 and 50 characters, inclusive.
-S will contain the same number of characters as T.
-Each character in S and T will be a digit ('0'-'9').


EXAMPLES

0)
"123"
"112"

Returns: 1

Rotate the last two dials down.

1)
"1"
"7"

Returns: 4

Rotate the dial down 4 times: from 1 to 0, from 0 to 9, from 9 to 8, and from 8 to 7.

2)
"607"
"607"

Returns: 0



3)
"1234"
"4567"

Returns: 3



4)
"020"
"909"

Returns: 2



5)
"4423232218340"
"6290421476245"

Returns: 18



**/
// END CUT HERE
