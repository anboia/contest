#include <string>
#include <vector>


using namespace std;

struct FoxAndWord {
	bool ok(string a, string b){
		int n=a.length();
		if(a.length() != b.length())return 0;
		for(int j=1;j<n;j++){
			bool ok=1;
			for(int i=0;i<n && ok;i++){
				if( a[i]!=b[(j+i)%n] )ok =0;
			}
			if(ok) return 1;
		}
		return 0;
	}
    int howManyPairs(vector <string> words) {
		int r=0;
		for(int i=0;i<words.size();i++){
			for(int j=i+1;j<words.size();j++){
				if(ok(words[i], words[j])) r++;
			}
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
			string words[]            = {"tokyo", "kyoto"};
			int expected__            = 1;

			std::clock_t start__      = std::clock();
			int received__            = FoxAndWord().howManyPairs(vector <string>(words, words + (sizeof words / sizeof words[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			string words[]            = {"aaaaa", "bbbbb"};
			int expected__            = 0;

			std::clock_t start__      = std::clock();
			int received__            = FoxAndWord().howManyPairs(vector <string>(words, words + (sizeof words / sizeof words[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			string words[]            = {"ababab","bababa","aaabbb"};
			int expected__            = 1;

			std::clock_t start__      = std::clock();
			int received__            = FoxAndWord().howManyPairs(vector <string>(words, words + (sizeof words / sizeof words[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			string words[]            = {"eel", "ele", "lee"};
			int expected__            = 3;

			std::clock_t start__      = std::clock();
			int received__            = FoxAndWord().howManyPairs(vector <string>(words, words + (sizeof words / sizeof words[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 4: {
			string words[]            = {"aaa", "aab", "aba", "abb", "baa", "bab", "bba", "bbb"};
			int expected__            = 6;

			std::clock_t start__      = std::clock();
			int received__            = FoxAndWord().howManyPairs(vector <string>(words, words + (sizeof words / sizeof words[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 5: {
			string words[]            = {"top","coder"};
			int expected__            = 0;

			std::clock_t start__      = std::clock();
			int received__            = FoxAndWord().howManyPairs(vector <string>(words, words + (sizeof words / sizeof words[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 6: {
			string words[]            = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = FoxAndWord().howManyPairs(vector <string>(words, words + (sizeof words / sizeof words[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			string words[]            = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = FoxAndWord().howManyPairs(vector <string>(words, words + (sizeof words / sizeof words[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 8: {
			string words[]            = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = FoxAndWord().howManyPairs(vector <string>(words, words + (sizeof words / sizeof words[0])));
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
// One day, Fox Ciel looked at the words "tokyo" and "kyoto" and noticed an unusual property:
We can split "tokyo" into "to"+"kyo", and then swap those two parts to obtain "kyo"+"to" = "kyoto".


Formally, let S and T be two different strings.
We call the pair (S,T) interesting if there are two non-empty strings A and B such that S = A+B and T = B+A.
For example, according to this definition, if S="tokyo" and T="kyoto", then the pair (S,T) is interesting, because we can find A="to" and B="kyo".


You are given a vector <string> words.
Return the number of interesting pairs we can find among the elements of words.
Only count each pair once.
E.g., ("tokyo","kyoto") and ("kyoto","tokyo") is the same interesting pair.

DEFINITION
Class:FoxAndWord
Method:howManyPairs
Parameters:vector <string>
Returns:int
Method signature:int howManyPairs(vector <string> words)


CONSTRAINTS
-words will contain between 2 and 50 elements, inclusive.
-Each element of words will contain between 1 and 50 characters, inclusive.
-Each character in each element of words will be a lowercase letter ('a'-'z').
-All the elements in words will be pairwise distinct.


EXAMPLES

0)
{"tokyo", "kyoto"}

Returns: 1

As mentioned in the problem statement, ("tokyo", "kyoto") is an interesting pair.

1)
{"aaaaa", "bbbbb"}

Returns: 0

("aaaaa", "bbbbb") is not an interesting pair.

2)
{"ababab","bababa","aaabbb"}

Returns: 1

There is one interesting pair: ("ababab","bababa").
Note that for this interesting pair there is more than one way to choose the strings A and B.

3)
{"eel", "ele", "lee"}

Returns: 3



4)
{"aaa", "aab", "aba", "abb", "baa", "bab", "bba", "bbb"}

Returns: 6



5)
{"top","coder"}

Returns: 0

Different elements of words may have different lengths.


**/
// END CUT HERE
