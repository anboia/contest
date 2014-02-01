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

struct EllysCandyGame {
    int n;
    vector<int> s;
    int inx[10], in;
    char rec(int p, int j){
        for(int i=0;i<n;i++){
            if(s[i]){
                
            }
        }
    }
    string getWinner(vector <int> k) {
        s = k;
        n = k.size();
        
        in = 0;
        for(int i=n-1;i>=0;i--)if(k[i])inx[in++]=k[i];
        do{
            
            
        }while(next_permutation(inx, inx+in))
        
        int ans = rec(0, 0);
        if(ans == 1)return "Elly";
        if(ans == -1)return "Kris";
        
        return "Draw";
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
			int sweets[]              = {20, 50, 70, 0, 30};
			string expected__         = "Kris";

			std::clock_t start__      = std::clock();
			string received__         = EllysCandyGame().getWinner(vector <int>(sweets, sweets + (sizeof sweets / sizeof sweets[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			int sweets[]              = {42, 13, 7};
			string expected__         = "Elly";

			std::clock_t start__      = std::clock();
			string received__         = EllysCandyGame().getWinner(vector <int>(sweets, sweets + (sizeof sweets / sizeof sweets[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			int sweets[]              = {10, 20};
			string expected__         = "Draw";

			std::clock_t start__      = std::clock();
			string received__         = EllysCandyGame().getWinner(vector <int>(sweets, sweets + (sizeof sweets / sizeof sweets[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			int sweets[]              = {3, 1, 7, 11, 1, 1};
			string expected__         = "Kris";

			std::clock_t start__      = std::clock();
			string received__         = EllysCandyGame().getWinner(vector <int>(sweets, sweets + (sizeof sweets / sizeof sweets[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 4: {
			int sweets[]              = {41, 449, 328, 474, 150, 501, 467, 329, 536, 440};
			string expected__         = "Kris";

			std::clock_t start__      = std::clock();
			string received__         = EllysCandyGame().getWinner(vector <int>(sweets, sweets + (sizeof sweets / sizeof sweets[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 5: {
			int sweets[]              = {177, 131, 142, 171, 411, 391, 17, 222, 100, 298};
			string expected__         = "Elly";

			std::clock_t start__      = std::clock();
			string received__         = EllysCandyGame().getWinner(vector <int>(sweets, sweets + (sizeof sweets / sizeof sweets[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 6: {
			int sweets[]              = ;
			string expected__         = ;

			std::clock_t start__      = std::clock();
			string received__         = EllysCandyGame().getWinner(vector <int>(sweets, sweets + (sizeof sweets / sizeof sweets[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			int sweets[]              = ;
			string expected__         = ;

			std::clock_t start__      = std::clock();
			string received__         = EllysCandyGame().getWinner(vector <int>(sweets, sweets + (sizeof sweets / sizeof sweets[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 8: {
			int sweets[]              = ;
			string expected__         = ;

			std::clock_t start__      = std::clock();
			string received__         = EllysCandyGame().getWinner(vector <int>(sweets, sweets + (sizeof sweets / sizeof sweets[0])));
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
// Elly and Kris play the following game. In the beginning there are several boxes aligned in a row. The boxes may or may not contain candy. As a matter of fact, the girls know exactly how many candies each of them contains. This information is given to you in the vector <int> sweets.
Starting with Elly, the girls make moves in alternating order. A single move looks as follows: the player whose turn it is chooses one of the non-empty boxes and takes all the sweets from it. After that the amount of candy in the neighboring boxes is doubled. For example, suppose that there were five boxes with {20, 50, 70, 0, 30} sweets, respectively. If the girl whose turn it was chose box 0, then in the next turn the number of sweets in the boxes would be {0, 100, 70, 0, 30}. If she chose box 1, then it would be {40, 0, 140, 0, 30}. If she chose box 2, it would be {20, 100, 0, 0, 30}. If she chose box 4, it would be {20, 50, 70, 0, 0}. Note that the girl cannot choose box 3, because it is empty.
The game ends when all boxes are empty. The winner of the game is the girl who has more candies at the end of the game.

Return the name of the girl that will win the game if both girls play optimally, or "Draw" if they end up with the same number of candies.

DEFINITION
Class:EllysCandyGame
Method:getWinner
Parameters:vector <int>
Returns:string
Method signature:string getWinner(vector <int> sweets)


NOTES
-Playing optimally means that if there is a move, which guarantees that the girl whose turn it is will win no matter what the other girl does, she will play it. If there is no such move, but there is one, which would guarantee a draw, she will use it instead.
-The game always ends after a finite number of moves, because the number of empty boxes increases in each step.


CONSTRAINTS
-sweets will contain between 1 and 10 elements, inclusive.
-Each element of sweets will be between 0 and 1000, inclusive.


EXAMPLES

0)
{20, 50, 70, 0, 30}

Returns: "Kris"

If Elly takes the 20, then Kris can take the 30, leaving Elly the choice between 100 and 70. Elly should take the 100, but then Kris will take 140 and win.
If Elly takes the 30, then Kris can take the 20, leaving Elly the same choice.
If Elly takes the 50, then Kris can take the 140, leaving Elly the choice between a 40 and a 30.
If Elly takes the 70, then Kris can take the 100, leaving Elly the same choice.
In any case, Kris will take more than Elly and win.


1)
{42, 13, 7}

Returns: "Elly"

Here Elly can take the 42 in her first move and win, no matter whether Kris chooses the 26 or 7.


2)
{10, 20}

Returns: "Draw"

Elly cannot win, but she can force a draw by taking the 20 (and leaving 20 to her opponent).


3)
{3, 1, 7, 11, 1, 1}

Returns: "Kris"



4)
{41, 449, 328, 474, 150, 501, 467, 329, 536, 440}

Returns: "Kris"



5)
{177, 131, 142, 171, 411, 391, 17, 222, 100, 298}

Returns: "Elly"



**/
// END CUT HERE
