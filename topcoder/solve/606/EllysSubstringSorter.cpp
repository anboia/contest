#include <algorithm>
#include <string>
#include <vector>
using namespace std;

char ss[55];
struct EllysSubstringSorter {
    string getMin(string s, int l) {
        vector<string> v;
        int n=s.length();
        for(int i=0;i<=n-l;i++){
            for(int j=0;j<n;j++)ss[j]=s[j];
            
            sort(ss+i,ss+i+l);
            ss[n]='\0';
            
            v.push_back(ss);
            
        }
        sort(v.begin(), v.end());
        return v[0];
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
			string S                  = "TOPCODER";
			int L                     = 4;
			string expected__         = "COPTODER";

			std::clock_t start__      = std::clock();
			string received__         = EllysSubstringSorter().getMin(S, L);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			string S                  = "ESPRIT";
			int L                     = 3;
			string expected__         = "EPRSIT";

			std::clock_t start__      = std::clock();
			string received__         = EllysSubstringSorter().getMin(S, L);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			string S                  = "AAAAAAAAA";
			int L                     = 2;
			string expected__         = "AAAAAAAAA";

			std::clock_t start__      = std::clock();
			string received__         = EllysSubstringSorter().getMin(S, L);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			string S                  = "ABRACADABRA";
			int L                     = 5;
			string expected__         = "AAABCRDABRA";

			std::clock_t start__      = std::clock();
			string received__         = EllysSubstringSorter().getMin(S, L);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 4: {
			string S                  = "BAZINGA";
			int L                     = 6;
			string expected__         = "ABGINZA";

			std::clock_t start__      = std::clock();
			string received__         = EllysSubstringSorter().getMin(S, L);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 5: {
			string S                  = "AAAWDIUAOIWDESBEAIWODJAWDBPOAWDUISAWDOOPAWD";
			int L                     = 21;
			string expected__         = "AAAAAABDDDEEIIIJOOSUWWWWDBPOAWDUISAWDOOPAWD";

			std::clock_t start__      = std::clock();
			string received__         = EllysSubstringSorter().getMin(S, L);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 6: {
			string S                  = ;
			int L                     = ;
			string expected__         = ;

			std::clock_t start__      = std::clock();
			string received__         = EllysSubstringSorter().getMin(S, L);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			string S                  = ;
			int L                     = ;
			string expected__         = ;

			std::clock_t start__      = std::clock();
			string received__         = EllysSubstringSorter().getMin(S, L);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 8: {
			string S                  = ;
			int L                     = ;
			string expected__         = ;

			std::clock_t start__      = std::clock();
			string received__         = EllysSubstringSorter().getMin(S, L);
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
// Elly has a string S of uppercase letters and a magic device that can modify the string. The strength of the device is an int L.

The device does the following: The user enters a 0-based index i such that 0 <= i <= length(S)-L. The device then takes L letters of S, starting at index i, and puts these letters into alphabetical order.
Formally, the letters that get reordered are the letters S[i], S[i+1], and so on, until and including S[i+L-1].

For example, let S="TOPCODER" and let L=4. If the user chooses i=0, the selected substring will be "TOPC". These letters are rearranged into alphabetical order ("COPT") while the rest of the string remains unchanged ("....ODER"). Thus, the result would be the string "COPTODER". If the user were to choose i=2 instead, the resulting string would be "TOCDOPER". Here, "TO....ER" was left unchanged, and "PCOD" was changed into "CDOP".

Elly's magic device has a flaw: it can only be used once and then it self-destructs. You are given the string S and the int L described above. Return the lexicographically smallest string Elly can create by using the device exactly once.


DEFINITION
Class:EllysSubstringSorter
Method:getMin
Parameters:string, int
Returns:string
Method signature:string getMin(string S, int L)


NOTES
-A string S1 is lexicographically smaller than a string S2 if S1 contains a smaller character than S2 at the first index where they differ.


CONSTRAINTS
-L will be between 2 and 50, inclusive.
-S will contain between L and 50 characters, inclusive.
-Each character of S will be an uppercase letter of the English alphabet ('A'-'Z').


EXAMPLES

0)
"TOPCODER"
4

Returns: "COPTODER"

The best we can do here is to sort the first 4 characters of the string.

1)
"ESPRIT"
3

Returns: "EPRSIT"

The best solution is obtained by choosing i=1, i.e., by sorting the letters in the substring "SPR".

2)
"AAAAAAAAA"
2

Returns: "AAAAAAAAA"

Sometimes sorting doesn't do anything.

3)
"ABRACADABRA"
5

Returns: "AAABCRDABRA"



4)
"BAZINGA"
6

Returns: "ABGINZA"



5)
"AAAWDIUAOIWDESBEAIWODJAWDBPOAWDUISAWDOOPAWD"
21

Returns: "AAAAAABDDDEEIIIJOOSUWWWWDBPOAWDUISAWDOOPAWD"



**/
// END CUT HERE
