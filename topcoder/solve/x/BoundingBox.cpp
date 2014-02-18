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

struct BoundingBox {
    int smallestArea(vector <int> x, vector <int> y) {
		int n=x.size(),a=10000 , b=-10000, c=10000, d=-10000;
		for(int i=0;i<n;i++){
			a = min(x[i],a);
			c = min(y[i],c);
			b = max(x[i],b);
			d = max(y[i],d);
		}
        return (b-a)*(d-c);
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
			int X[]                   = {0,1};
			int Y[]                   = {1,0};
			int expected__            = 1;

			std::clock_t start__      = std::clock();
			int received__            = BoundingBox().smallestArea(vector <int>(X, X + (sizeof X / sizeof X[0])), vector <int>(Y, Y + (sizeof Y / sizeof Y[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			int X[]                   = {0,-2,-1};
			int Y[]                   = {-1,-1,-2};
			int expected__            = 2;

			std::clock_t start__      = std::clock();
			int received__            = BoundingBox().smallestArea(vector <int>(X, X + (sizeof X / sizeof X[0])), vector <int>(Y, Y + (sizeof Y / sizeof Y[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			int X[]                   = {0,0,1,0,-1,2};
			int Y[]                   = {0,1,2,-2,0,-1};
			int expected__            = 12;

			std::clock_t start__      = std::clock();
			int received__            = BoundingBox().smallestArea(vector <int>(X, X + (sizeof X / sizeof X[0])), vector <int>(Y, Y + (sizeof Y / sizeof Y[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			int X[]                   = {9,-88,-40,98,-55,41,-38};
			int Y[]                   = {-65,56,-67,7,-58,33,68};
			int expected__            = 25110;

			std::clock_t start__      = std::clock();
			int received__            = BoundingBox().smallestArea(vector <int>(X, X + (sizeof X / sizeof X[0])), vector <int>(Y, Y + (sizeof Y / sizeof Y[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 4: {
			int X[]                   = ;
			int Y[]                   = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = BoundingBox().smallestArea(vector <int>(X, X + (sizeof X / sizeof X[0])), vector <int>(Y, Y + (sizeof Y / sizeof Y[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 5: {
			int X[]                   = ;
			int Y[]                   = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = BoundingBox().smallestArea(vector <int>(X, X + (sizeof X / sizeof X[0])), vector <int>(Y, Y + (sizeof Y / sizeof Y[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			int X[]                   = ;
			int Y[]                   = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = BoundingBox().smallestArea(vector <int>(X, X + (sizeof X / sizeof X[0])), vector <int>(Y, Y + (sizeof Y / sizeof Y[0])));
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
// Andrew drew a bunch of points on a sheet of graph paper.
You are given the coordinates of these points in two vector <int>s: X and Y.
That is, for each valid i, there is a point at the coordinates (X[i], Y[i]).

Now Andrew wants to draw a rectangle.
The sides of the rectangle must be parallel to the coordinate axes.
(In other words, each side of the rectangle must be either horizontal or vertical.)
Additionally, each of Andrew's points must be inside the rectangle or on its boundary.

Return the area of the smallest possible rectangle Andrew can draw.

DEFINITION
Class:BoundingBox
Method:smallestArea
Parameters:vector <int>, vector <int>
Returns:int
Method signature:int smallestArea(vector <int> X, vector <int> Y)


CONSTRAINTS
-X will have between 2 and 50 elements, inclusive.
-X and Y will have the same number of elements.
-Each element of X and Y will be between -100 and 100, inclusive.
-The points described by X and Y will not be in a straight line horizontally or vertically. That is, the smallest rectangle will have a positive area.


EXAMPLES

0)
{0,1}
{1,0}

Returns: 1



1)
{0,-2,-1}
{-1,-1,-2}

Returns: 2



2)
{0,0,1,0,-1,2}
{0,1,2,-2,0,-1}

Returns: 12



3)
{9,-88,-40,98,-55,41,-38}
{-65,56,-67,7,-58,33,68}

Returns: 25110



**/
// END CUT HERE
