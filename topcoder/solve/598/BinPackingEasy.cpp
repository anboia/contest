#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

bool mark[50];
struct BinPackingEasy {
    int minBins(vector <int> item) {
		int ans = 0;
		memset(mark, 0, sizeof mark);
		
		sort(item.begin(), item.end());
		
		
		for(int i=item.size()-1; i>=0;i--){
			if(mark[i])continue;
			
			mark[i]=1;
			// db(item[i]);
			for(int j=i-1; j>=0;j--){
				if(mark[j])continue;
				if(item[j]+item[i]<=300){
					// db(item[j]);
					mark[j]=1;
					break;
				}
			}
			ans++;
		}
		
        return ans;
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
			int item[]                = {150, 150, 150, 150, 150};
			int expected__            = 3;

			std::clock_t start__      = std::clock();
			int received__            = BinPackingEasy().minBins(vector <int>(item, item + (sizeof item / sizeof item[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			int item[]                = {130, 140, 150, 160};
			int expected__            = 2;

			std::clock_t start__      = std::clock();
			int received__            = BinPackingEasy().minBins(vector <int>(item, item + (sizeof item / sizeof item[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			int item[]                = {101, 101, 101, 101, 101, 101, 101, 101, 101};
			int expected__            = 5;

			std::clock_t start__      = std::clock();
			int received__            = BinPackingEasy().minBins(vector <int>(item, item + (sizeof item / sizeof item[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			int item[]                = {101, 200, 101, 101, 101, 101, 200, 101, 200};
			int expected__            = 6;

			std::clock_t start__      = std::clock();
			int received__            = BinPackingEasy().minBins(vector <int>(item, item + (sizeof item / sizeof item[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 4: {
			int item[]                = {123, 145, 167, 213, 245, 267, 289, 132, 154, 176, 198};
			int expected__            = 8;

			std::clock_t start__      = std::clock();
			int received__            = BinPackingEasy().minBins(vector <int>(item, item + (sizeof item / sizeof item[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 5: {
			int item[]                = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = BinPackingEasy().minBins(vector <int>(item, item + (sizeof item / sizeof item[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			int item[]                = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = BinPackingEasy().minBins(vector <int>(item, item + (sizeof item / sizeof item[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			int item[]                = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = BinPackingEasy().minBins(vector <int>(item, item + (sizeof item / sizeof item[0])));
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
// Fox Ciel has some items. The weight of the i-th (0-based) item is item[i]. She wants to put all items into bins.


The capacity of each bin is 300. She can put an arbitrary number of items into a single bin, but the total weight of items in a bin must be less than or equal to 300.


You are given the vector <int> item. It is known that the weight of each item is between 101 and 300, inclusive. Return the minimal number of bins required to store all items.

DEFINITION
Class:BinPackingEasy
Method:minBins
Parameters:vector <int>
Returns:int
Method signature:int minBins(vector <int> item)


CONSTRAINTS
-item will contain between 1 and 50 elements, inclusive.
-Each element of item will be between 101 and 300, inclusive.


EXAMPLES

0)
{150, 150, 150, 150, 150}

Returns: 3

You have five items and each bin can hold at most two of them. You need at least three bins.

1)
{130, 140, 150, 160}

Returns: 2

For example, you can distribute the items in the following way:

Bin 1: 130, 150
Bin 2: 140, 160



2)
{101, 101, 101, 101, 101, 101, 101, 101, 101}

Returns: 5



3)
{101, 200, 101, 101, 101, 101, 200, 101, 200}

Returns: 6



4)
{123, 145, 167, 213, 245, 267, 289, 132, 154, 176, 198}

Returns: 8



**/
// END CUT HERE
