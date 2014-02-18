// SRM #
// Verdict: unknown
// By Andre Saboia [UFPE]
#include <algorithm>

using namespace std;

struct MiniatureDachshund {
    int maxMikan(vector <int> mikan, int weight) {
		sort(mikan.begin(), mikan.end());
		int r =0 ;
		for(int i=0;i<mikan.size();i++)if(weight+mikan[i]<=5000){weight+=mikan[i];r++;}else break;
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
			int mikan[]               = {100, 100, 100, 100, 100};
			int weight                = 4750;
			int expected__            = 2;

			std::clock_t start__      = std::clock();
			int received__            = MiniatureDachshund().maxMikan(vector <int>(mikan, mikan + (sizeof mikan / sizeof mikan[0])), weight);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			int mikan[]               = {100, 100, 100, 100, 50};
			int weight                = 4750;
			int expected__            = 3;

			std::clock_t start__      = std::clock();
			int received__            = MiniatureDachshund().maxMikan(vector <int>(mikan, mikan + (sizeof mikan / sizeof mikan[0])), weight);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			int mikan[]               = {120, 90, 130, 100, 110, 80};
			int weight                = 3000;
			int expected__            = 6;

			std::clock_t start__      = std::clock();
			int received__            = MiniatureDachshund().maxMikan(vector <int>(mikan, mikan + (sizeof mikan / sizeof mikan[0])), weight);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			int mikan[]               = {50};
			int weight                = 5000;
			int expected__            = 0;

			std::clock_t start__      = std::clock();
			int received__            = MiniatureDachshund().maxMikan(vector <int>(mikan, mikan + (sizeof mikan / sizeof mikan[0])), weight);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 4: {
			int mikan[]               = {200, 50, 200, 50, 200, 50, 200, 50};
			int weight                = 4800;
			int expected__            = 4;

			std::clock_t start__      = std::clock();
			int received__            = MiniatureDachshund().maxMikan(vector <int>(mikan, mikan + (sizeof mikan / sizeof mikan[0])), weight);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 5: {
			int mikan[]               = ;
			int weight                = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = MiniatureDachshund().maxMikan(vector <int>(mikan, mikan + (sizeof mikan / sizeof mikan[0])), weight);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			int mikan[]               = ;
			int weight                = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = MiniatureDachshund().maxMikan(vector <int>(mikan, mikan + (sizeof mikan / sizeof mikan[0])), weight);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			int mikan[]               = ;
			int weight                = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = MiniatureDachshund().maxMikan(vector <int>(mikan, mikan + (sizeof mikan / sizeof mikan[0])), weight);
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
// Dachshund is a popular dog breed. In this problem, a miniature dachshund is defined as a dachshund whose weight is not more than 5,000 grams.


Lun the miniature dachshund loves mikan (satsuma oranges). She has just bought some mikan. You are given a vector <int> mikan. It gives the weight of all mikan she bought. For each valid i, mikan[i] is the weight of the i-th mikan in grams.


You are also given an int weight. Currently, Lun weighs weight grams. When she eats i-th mikan, her weight increases by mikan[i] grams. If she eats multiple mikan, her weight increases by their total weight. She cannot eat just a part of a mikan. In other words, if she chooses to eat a mikan, she eats it completely.


She wants to remain being a miniature dachshund. That is, she wants her weight not to exceed 5,000 grams. Under this condition, calculate and return the maximum number of mikan Lun can eat.

DEFINITION
Class:MiniatureDachshund
Method:maxMikan
Parameters:vector <int>, int
Returns:int
Method signature:int maxMikan(vector <int> mikan, int weight)


CONSTRAINTS
-mikan will contain between 1 and 50 elements, inclusive.
-Each element of mikan will be between 50 and 200, inclusive.
-weight will be between 3,000 and 5,000, inclusive.


EXAMPLES

0)
{100, 100, 100, 100, 100}
4750

Returns: 2

Here, Lun weighs 4,750 grams and has bought 5 mikan, each of which weighs 100 grams. When she eats 2 of these, her weight will be 4,950 grams. She should not eat more.

1)
{100, 100, 100, 100, 50}
4750

Returns: 3

This time, one of the mikan is smaller. She can eat it with 2 of the 100-gram mikan. Note that her weight is allowed to be exactly 5,000 grams.

2)
{120, 90, 130, 100, 110, 80}
3000

Returns: 6

When she is light enough, she can eat all of the mikan she has bought.

3)
{50}
5000

Returns: 0

When her weight is already 5,000 grams, she should not eat anything.

4)
{200, 50, 200, 50, 200, 50, 200, 50}
4800

Returns: 4



**/
// END CUT HERE
