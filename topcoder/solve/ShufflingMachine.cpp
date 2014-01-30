#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cfloat>
#include <climits>
#include <cctype>
#include <cmath>
#include <cassert>
#include <ctime>

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <bitset>
#include <complex>
#include <limits>
#include <functional>
#include <numeric>

using namespace std;

template<class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; }

typedef long long ll;

#define fr(i,a,b) for(int i=a;i<b;++i)
#define rep(x,y) for(int(x)=(0);(x)<(y);(x)++)
#define dbg(x) cout << #x << " == " << x << endl
#define F first
#define S second
typedef pair<int,int> pii;
#define _ << " _ " <<

struct ShufflingMachine {
    double stackDeck(vector <int> shuffle, int maxShuffles, vector <int> cardsReceived, int K) {
        return double(0);
    }
};

// BEGIN CUT HERE
#include <algorithm>
#include <cmath>
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
	
	static const double MAX_DOUBLE_ERROR = 1e-9;
	static bool topcoder_fequ(double expected, double result) {
		if (std::isnan(expected)) {
			return std::isnan(result);
		} else if (std::isinf(expected)) {
			if (expected > 0) {
				return result > 0 && std::isinf(result);
			} else {
				return result < 0 && std::isinf(result);
			}
		} else if (std::isnan(result) || std::isinf(result)) {
			return false;
		} else if (std::fabs(result - expected) < MAX_DOUBLE_ERROR) {
			return true;
		} else {
			double mmin = std::min(expected * (1.0 - MAX_DOUBLE_ERROR), expected * (1.0 + MAX_DOUBLE_ERROR));
			double mmax = std::max(expected * (1.0 - MAX_DOUBLE_ERROR), expected * (1.0 + MAX_DOUBLE_ERROR));
			return result > mmin && result < mmax;
		}
	}
	double moj_relative_error(double expected, double result) {
		if (std::isnan(expected) || std::isinf(expected) || std::isnan(result) || std::isinf(result) || expected == 0) {
			return 0;
		}
		return std::fabs(result-expected) / std::fabs(expected);
	}
	
	int verify_case(int casenum, const double &expected, const double &received, std::clock_t elapsed) { 
		std::cerr << "Example " << casenum << "... "; 
		
		string verdict;
		vector<string> info;
		char buf[100];
		
		if (elapsed > CLOCKS_PER_SEC / 200) {
			std::sprintf(buf, "time %.2fs", elapsed * (1.0/CLOCKS_PER_SEC));
			info.push_back(buf);
		}
		
		if (topcoder_fequ(expected, received)) {
			verdict = "PASSED";
			double rerr = moj_relative_error(expected, received); 
			if (rerr > 0) {
				std::sprintf(buf, "relative error %.3e", rerr);
				info.push_back(buf);
			}
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
			int shuffle[]             = {1,0};
			int maxShuffles           = 3;
			int cardsReceived[]       = {0};
			int K                     = 1;
			double expected__         = 0.6666666666666666;

			std::clock_t start__      = std::clock();
			double received__         = ShufflingMachine().stackDeck(vector <int>(shuffle, shuffle + (sizeof shuffle / sizeof shuffle[0])), maxShuffles, vector <int>(cardsReceived, cardsReceived + (sizeof cardsReceived / sizeof cardsReceived[0])), K);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			int shuffle[]             = {1,2,0};
			int maxShuffles           = 5;
			int cardsReceived[]       = {0};
			int K                     = 2;
			double expected__         = 0.8;

			std::clock_t start__      = std::clock();
			double received__         = ShufflingMachine().stackDeck(vector <int>(shuffle, shuffle + (sizeof shuffle / sizeof shuffle[0])), maxShuffles, vector <int>(cardsReceived, cardsReceived + (sizeof cardsReceived / sizeof cardsReceived[0])), K);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			int shuffle[]             = {1,2,0,4,3};
			int maxShuffles           = 7;
			int cardsReceived[]       = {0,3};
			int K                     = 2;
			double expected__         = 1.0;

			std::clock_t start__      = std::clock();
			double received__         = ShufflingMachine().stackDeck(vector <int>(shuffle, shuffle + (sizeof shuffle / sizeof shuffle[0])), maxShuffles, vector <int>(cardsReceived, cardsReceived + (sizeof cardsReceived / sizeof cardsReceived[0])), K);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			int shuffle[]             = {0,4,3,5,2,6,1};
			int maxShuffles           = 19;
			int cardsReceived[]       = {1,3,5};
			int K                     = 2;
			double expected__         = 1.0526315789473684;

			std::clock_t start__      = std::clock();
			double received__         = ShufflingMachine().stackDeck(vector <int>(shuffle, shuffle + (sizeof shuffle / sizeof shuffle[0])), maxShuffles, vector <int>(cardsReceived, cardsReceived + (sizeof cardsReceived / sizeof cardsReceived[0])), K);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 4: {
			int shuffle[]             = {3,4,7,2,8,5,6,1,0,9};
			int maxShuffles           = 47;
			int cardsReceived[]       = {6,3,5,2,8,7,4};
			int K                     = 8;
			double expected__         = 6.297872340425532;

			std::clock_t start__      = std::clock();
			double received__         = ShufflingMachine().stackDeck(vector <int>(shuffle, shuffle + (sizeof shuffle / sizeof shuffle[0])), maxShuffles, vector <int>(cardsReceived, cardsReceived + (sizeof cardsReceived / sizeof cardsReceived[0])), K);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 5: {
			int shuffle[]             = ;
			int maxShuffles           = ;
			int cardsReceived[]       = ;
			int K                     = ;
			double expected__         = ;

			std::clock_t start__      = std::clock();
			double received__         = ShufflingMachine().stackDeck(vector <int>(shuffle, shuffle + (sizeof shuffle / sizeof shuffle[0])), maxShuffles, vector <int>(cardsReceived, cardsReceived + (sizeof cardsReceived / sizeof cardsReceived[0])), K);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			int shuffle[]             = ;
			int maxShuffles           = ;
			int cardsReceived[]       = ;
			int K                     = ;
			double expected__         = ;

			std::clock_t start__      = std::clock();
			double received__         = ShufflingMachine().stackDeck(vector <int>(shuffle, shuffle + (sizeof shuffle / sizeof shuffle[0])), maxShuffles, vector <int>(cardsReceived, cardsReceived + (sizeof cardsReceived / sizeof cardsReceived[0])), K);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			int shuffle[]             = ;
			int maxShuffles           = ;
			int cardsReceived[]       = ;
			int K                     = ;
			double expected__         = ;

			std::clock_t start__      = std::clock();
			double received__         = ShufflingMachine().stackDeck(vector <int>(shuffle, shuffle + (sizeof shuffle / sizeof shuffle[0])), maxShuffles, vector <int>(cardsReceived, cardsReceived + (sizeof cardsReceived / sizeof cardsReceived[0])), K);
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
// A card shuffling machine is a device designed to randomize the order of a deck of cards. A particularly poor (but unfortunately relatively common) design of machine works as follows: an integer N is selected uniformly at random between 1 and maxShuffles, inclusive, and a series of N exactly similar deterministic shuffles are performed. A deterministic shuffle is a fixed permutation of the cards. The randomness of the resulting ordering is clearly therefore only dependent on the number of shuffles chosen. After the deck has been shuffled N times, the cards are distributed to the players.
A particularly dishonest player has decided that he wishes to cheat. He has identified K cards in the deck that he wants to receive when the cards are distributed. He has managed to figure out both the fixed shuffle that the machine uses and also the maximum number of shuffles chosen. The fixed shuffle is given in a vector <int> shuffle, in which element i gives the position after the shuffle of the card that was initially in position i (both 0-based). The positions in the deck of the cards the player will receive after they have been shuffled are given in cardsReceived (0-based). Before the cards are shuffled, the player can order them in any way he wishes. Determine the initial ordering that will maximize the expected number of the K desired cards that he will receive and return this expected number.

DEFINITION
Class:ShufflingMachine
Method:stackDeck
Parameters:vector <int>, int, vector <int>, int
Returns:double
Method signature:double stackDeck(vector <int> shuffle, int maxShuffles, vector <int> cardsReceived, int K)


NOTES
-Your return value must be accurate to an absolute or relative tolerance of 1e-9.


CONSTRAINTS
-shuffle will contain between 1 and 50 elements, inclusive.
-shuffle will be a permutation of the numbers between 0 and M-1, inclusive, where M is the number of elements in shuffle.
-maxShuffles will be between 1 and 100, inclusive.
-cardsReceived will contain between 1 and M elements, inclusive.
-Each element of cardsReceived will be between 0 and M-1.
-The elements of cardsReceived will be distinct.
-K will be between 1 and M, inclusive.


EXAMPLES

0)
{1,0}
3
{0}
1

Returns: 0.6666666666666666

This deck contains only 2 cards and they swap positions after each shuffle. The cheating player receives first card in the deck after the shuffling is completed and he wants to receive 1 of the cards in the deck. If the deck is shuffled 1 or 3 times, he will receive the card that was initially in position 1. If the deck is shuffled 2 times, he will receive the card in position 0. It is therefore optimal to put the card that he wants in position 1 and he will receive it 2 times out of 3.

1)
{1,2,0}
5
{0}
2

Returns: 0.8

If he puts the cards he wants in positions 1 and 2, he will receive one of them 4 times out of 5.

2)
{1,2,0,4,3}
7
{0,3}
2

Returns: 1.0

If he puts the cards in positions 3 and 4, he will receive exactly one of them, regardless of how many shuffles are chosen.

3)
{0,4,3,5,2,6,1}
19
{1,3,5}
2

Returns: 1.0526315789473684



4)
{3,4,7,2,8,5,6,1,0,9}
47
{6,3,5,2,8,7,4}
8

Returns: 6.297872340425532

**/
// END CUT HERE
