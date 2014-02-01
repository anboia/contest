#include <string>
using namespace std;

char stk[51];
int t;

struct ErasingCharacters {
    string simulate(string s) {
		int n = s.length();
		
		t = 0;
		
		for (int i=0; i<n ;i++){
			if(t==0){
				stk[t++] = s[i];
			}else{
				if( s[i] == stk[t-1] ){
					t--;
				}else{
					stk[t++]=s[i];
				}
			}
		}
		
		stk[t]='\0';
		
        return string(stk);
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
			string s                  = "cieeilll";
			string expected__         = "cl";

			std::clock_t start__      = std::clock();
			string received__         = ErasingCharacters().simulate(s);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			string s                  = "topcoder";
			string expected__         = "topcoder";

			std::clock_t start__      = std::clock();
			string received__         = ErasingCharacters().simulate(s);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			string s                  = "abcdefghijklmnopqrstuvwxyyxwvutsrqponmlkjihgfedcba";
			string expected__         = "";

			std::clock_t start__      = std::clock();
			string received__         = ErasingCharacters().simulate(s);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			string s                  = "bacaabaccbaaccabbcabbacabcbba";
			string expected__         = "bacbaca";

			std::clock_t start__      = std::clock();
			string received__         = ErasingCharacters().simulate(s);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 4: {
			string s                  = "eel";
			string expected__         = "l";

			std::clock_t start__      = std::clock();
			string received__         = ErasingCharacters().simulate(s);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 5: {
			string s                  = ;
			string expected__         = ;

			std::clock_t start__      = std::clock();
			string received__         = ErasingCharacters().simulate(s);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			string s                  = ;
			string expected__         = ;

			std::clock_t start__      = std::clock();
			string received__         = ErasingCharacters().simulate(s);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			string s                  = ;
			string expected__         = ;

			std::clock_t start__      = std::clock();
			string received__         = ErasingCharacters().simulate(s);
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
// Fox Ciel received a string as a birthday present. However, the string was too long for her, so she decided to make it shorter by erasing some characters.


The erasing process will look as follows:

Find the smallest i such that the i-th character and the (i+1)-th character of the string are same.
If there is no such i, end the process.
Remove the i-th and the (i+1)-th character of the string, and repeat from 1.



For example, if she receives "cieeilll", she will change the string as follows: "cieeilll" -> "ciilll" -> "clll" -> "cl". You are given a string s. Return the string she will get after she erases characters as described above.

DEFINITION
Class:ErasingCharacters
Method:simulate
Parameters:string
Returns:string
Method signature:string simulate(string s)


CONSTRAINTS
-s will contain between 1 and 50 characters, inclusive.
-Each character in s will be a lowercase letter ('a'-'z').


EXAMPLES

0)
"cieeilll"

Returns: "cl"

This is the example from the statement.

1)
"topcoder"

Returns: "topcoder"

She won't erase any characters at all.

2)
"abcdefghijklmnopqrstuvwxyyxwvutsrqponmlkjihgfedcba"

Returns: ""



3)
"bacaabaccbaaccabbcabbacabcbba"

Returns: "bacbaca"



4)
"eel"

Returns: "l"



**/
// END CUT HERE
