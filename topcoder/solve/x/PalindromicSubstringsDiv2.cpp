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
bool ok[2][10000];
struct PalindromicSubstringsDiv2 {
	
    int count(vector <string> S1, vector <string> S2) {
		memset(ok,0,sizeof ok);
		int n, r;
		string s;
		for(int i=0;i<S1.size();i++)s.append(S1[i]);
		for(int i=0;i<S2.size();i++)s.append(S2[i]);
		r = n = s.size();
		
		for(int i=1;i<n;i++){
			for(int j=0;j+i<n;j++){
				if(s[j]==s[j+i]&& !ok[i&1][j+1]){
					ok[i&1][j]=0;
					r++;
				}else ok[i&1][j]=1;
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
			string S1[]               = {"a","a",""};
			string S2[]               = {"a"};
			int expected__            = 6;

			std::clock_t start__      = std::clock();
			int received__            = PalindromicSubstringsDiv2().count(vector <string>(S1, S1 + (sizeof S1 / sizeof S1[0])), vector <string>(S2, S2 + (sizeof S2 / sizeof S2[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			string S1[]               = {"zaz"};
			string S2[]               = {};
			int expected__            = 4;

			std::clock_t start__      = std::clock();
			int received__            = PalindromicSubstringsDiv2().count(vector <string>(S1, S1 + (sizeof S1 / sizeof S1[0])), vector <string>(S2, S2 + (sizeof S2 / sizeof S2[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			string S1[]               = {"top"};
			string S2[]               = {"coder"};
			int expected__            = 8;

			std::clock_t start__      = std::clock();
			int received__            = PalindromicSubstringsDiv2().count(vector <string>(S1, S1 + (sizeof S1 / sizeof S1[0])), vector <string>(S2, S2 + (sizeof S2 / sizeof S2[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			string S1[]               = {};
			string S2[]               = {"daata"};
			int expected__            = 7;

			std::clock_t start__      = std::clock();
			int received__            = PalindromicSubstringsDiv2().count(vector <string>(S1, S1 + (sizeof S1 / sizeof S1[0])), vector <string>(S2, S2 + (sizeof S2 / sizeof S2[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 4: {
			string S1[]               = ;
			string S2[]               = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = PalindromicSubstringsDiv2().count(vector <string>(S1, S1 + (sizeof S1 / sizeof S1[0])), vector <string>(S2, S2 + (sizeof S2 / sizeof S2[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 5: {
			string S1[]               = ;
			string S2[]               = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = PalindromicSubstringsDiv2().count(vector <string>(S1, S1 + (sizeof S1 / sizeof S1[0])), vector <string>(S2, S2 + (sizeof S2 / sizeof S2[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			string S1[]               = ;
			string S2[]               = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = PalindromicSubstringsDiv2().count(vector <string>(S1, S1 + (sizeof S1 / sizeof S1[0])), vector <string>(S2, S2 + (sizeof S2 / sizeof S2[0])));
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
// Marco recently learned about palindromic strings.
A palindromic string is a string that reads the same forwards and backwards.
For example, "radar" and "racecar" are palindromic strings.

Now Marco is excited about palindromic strings.
In particular, he likes strings that have a lot of palindromic substrings.
For example, he really likes the string "aaa" because it has 6 palindromic substrings: "a" occurs three times, "aa" occurs twice, and "aaa" occurs once.

Right now, Marco has a string S composed of lowercase letters.
You are to reconstruct S from the given vector <string>s S1 and S2 as follows:

Concatenate in order all elements of S1 to make a string A.
Concatenate in order all elements of S2 to make a string B.
Finally, concatenate A and B to get S.



Return the number of palindromic substrings in S.

DEFINITION
Class:PalindromicSubstringsDiv2
Method:count
Parameters:vector <string>, vector <string>
Returns:int
Method signature:int count(vector <string> S1, vector <string> S2)


CONSTRAINTS
-S1 and S2 will each contain no more than 50 elements.
-Each element of S1 and S2 will contain no more than 50 characters.
-S will contain at least 1 character.
-S will contain only lowercase letters ('a' - 'z').


EXAMPLES

0)
{"a","a",""}
{"a"}

Returns: 6

This is the example given in the statement, "aaa".

1)
{"zaz"}
{}

Returns: 4



2)
{"top"}
{"coder"}

Returns: 8



3)
{}
{"daata"}

Returns: 7

There are five palindromic substrings of length 1, one of length 2 ("aa" starting at index 1), and one of length 3 ("ata" starting at index 2).

**/
// END CUT HERE
