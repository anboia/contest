#include <vector>

using namespace std;

struct P8XCoinChangeAnother {
	int n;
    vector<long long> solve(int N, long long coins_sum, long long coins_count) {
		vector<long long> ans(N);
		vector<long long> m(64);

		// transforming coins_sum to a vector of bits
		long long x = coins_sum;
		for(int i = 0 ; i<64 ; i++, x>>=1 ) m[i] = x&1;
		
		int i = N-1, j=62;
		
		// start ans vecor, which will have the minimal number of coins
		//N[i] += M[j]*2^(j-i)  such that i<=j
		for(;j>=i;j--)m[j] = (m[j+1]<<1)+m[j];
		
		long long coins_total = ans[i] = m[i];
		
		for(;j>=0;j--)ans[j] += m[j], coins_total+= m[j]&1;
		
		//there is no way to have less coins....
		if(coins_count < coins_total )return vector<long long>(0);
		
		// distribute the coins in sucha a way that we can increase the number of coins..
		// from the right to the left.. to garantee the laxicographical order
		for(i-- ; i>=0 && coins_total < coins_count ; ){
			if(!ans[i+1]){
				i--;
				continue;
			}
			ans[i] += 2;
			ans[i+1] --;
			
			coins_total++;
		}
		
		
		if(coins_total == coins_count) return ans;
		
		
		return vector<long long>(0);
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
	
	template<typename T> std::ostream& operator<<(std::ostream &os, const vector<T> &v) { os << "{"; for (typename vector<T>::const_iterator vi=v.begin(); vi!=v.end(); ++vi) { if (vi != v.begin()) os << ","; os << " " << *vi; } os << " }"; return os; }

	int verify_case(int casenum, const vector<long long> &expected, const vector<long long> &received, std::clock_t elapsed) { 
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
			int N                     = 2;
			long long coins_sum       = 4;
			long long coins_count     = 3;
			long long expected__[]    = {2, 1};

			std::clock_t start__      = std::clock();
			vector<long long> received__ = P8XCoinChangeAnother().solve(N, coins_sum, coins_count);
			return verify_case(casenum__, vector<long long>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}
		case 1: {
			int N                     = 3;
			long long coins_sum       = 6;
			long long coins_count     = 3;
			long long expected__[]    = {0, 3, 0};

			std::clock_t start__      = std::clock();
			vector<long long> received__ = P8XCoinChangeAnother().solve(N, coins_sum, coins_count);
			return verify_case(casenum__, vector<long long>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}
		case 2: {
			int N                     = 2;
			long long coins_sum       = 8;
			long long coins_count     = 1;
			long long expected__[]    = {};

			std::clock_t start__      = std::clock();
			vector<long long> received__ = P8XCoinChangeAnother().solve(N, coins_sum, coins_count);
			return verify_case(casenum__, vector<long long>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}
		case 3: {
			int N                     = 1;
			long long coins_sum       = 10000000000LL;
			long long coins_count     = 10000000000LL;
			long long expected__[]    = {10000000000LL};

			std::clock_t start__      = std::clock();
			vector<long long> received__ = P8XCoinChangeAnother().solve(N, coins_sum, coins_count);
			return verify_case(casenum__, vector<long long>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}

		// custom cases

      case 4: {
			int N                     = 1;
			long long coins_sum       = 10000000000LL;
			long long coins_count     = 10000000000LL;
			long long expected__[]    = {10000000000LL};

			std::clock_t start__      = std::clock();
			vector<long long> received__ = P8XCoinChangeAnother().solve(N, coins_sum, coins_count);
			return verify_case(casenum__, vector<long long>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}
/*      case 5: {
			int N                     = ;
			long long coins_sum       = ;
			long long coins_count     = ;
			long long expected__[]    = ;

			std::clock_t start__      = std::clock();
			vector<long long> received__ = P8XCoinChangeAnother().solve(N, coins_sum, coins_count);
			return verify_case(casenum__, vector<long long>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}*/
/*      case 6: {
			int N                     = ;
			long long coins_sum       = ;
			long long coins_count     = ;
			long long expected__[]    = ;

			std::clock_t start__      = std::clock();
			vector<long long> received__ = P8XCoinChangeAnother().solve(N, coins_sum, coins_count);
			return verify_case(casenum__, vector<long long>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
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
// The Exponential kingdom has N types of coins. For each i from 0 to N-1, inclusive, there is a coin type worth 2^i (two to the power of i). For example, if N=3  then the coin values would be 2^0, 2^1, and 2^2.

You are given the int N and two long longs coins_sum and coins_count. Your task is to find a set of coins with two properties: First, it must contain exactly coins_count coins. Second, the sum of coins it contains must be exactly equal to coins_sum. Your method must return the solution as a vector<long long> containing exactly N elements. The i-th element of the return value must be the number of coins worth 2^i in your set. If there are multiple solutions, return the lexicographically smallest one. If there is no set that satisfies both properties, return an empty vector<long long> instead.

DEFINITION
Class:P8XCoinChangeAnother
Method:solve
Parameters:int, long long, long long
Returns:vector<long long>
Method signature:vector<long long> solve(int N, long long coins_sum, long long coins_count)


NOTES
-Given two different vector<long long>s A and B of equal length, let i be the smallest index such that A[i] and B[i] differ. If A[i] &lt B[i], we say that A is lexicographically smaller than B, and vice versa.


CONSTRAINTS
-N will be between 1 and 60, inclusive.
-coins_sum and coins_count will each be between 1 and 10^18, inclusive.


EXAMPLES

0)
2
4
3

Returns: {2, 1 }

We have N=2, which means that we can use coins worth 2^0 and coins worth 2^1. We are looking for a set of 3 coins worth 4 in total. There is a unique solution: use 2 coins worth 2^0 and 1 coin worth 2^1.

1)
3
6
3

Returns: {0, 3, 0 }

We have N=3, which means that we can use coins worth 2^0, 2^1, and 2^2. We are looking for a set of 3 coins worth 6 in total. There are two possible solutions: 2 coins of type 0 and 1 coin of type 2, or 3 coins of type 1. Since the latter is lexicographically smaller than the former, your method should return the latter.

2)
2
8
1

Returns: { }



3)
1
10000000000
10000000000

Returns: {10000000000 }



**/
// END CUT HERE

