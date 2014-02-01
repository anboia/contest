#include <vector>

using namespace std;

typedef long long ll;

#define fr(i,a,b) for(int i=a;i<b;++i)
#define rep(x,y) for(int(x)=(0);(x)<(y);(x)++)
#define dbg(x) cout << #x << " == " << x << endl
#define F first
#define S second
typedef pair<int,int> pii;
#define _ << " _ " <<



struct EllysNumberGuessing {
    int n;
    bool ok(vector <int> & g, vector <int>  & a, int p){
        for(int i=1;i<n;i++){
            if(!(g[i]-a[i]==p || g[i]+a[i]==p))return 0;
        }
        return 1;
    }
    
    int getNumber(vector <int> g, vector <int> a) {
        n = g.size();
        
        int p1 = g[0]-a[0];
        int p2 = g[0]+a[0];
        if(p1<1){
            if(ok(g,a,p2))return p2;
            else return -2;
        }
        
        if(p2>1000000000){
            if(ok(g,a,p1))return p1;
            else return -2;
        }
        
        if(n == 1)return -1;
        
        int q1 = g[1]-a[1];
        int q2 = g[1]+a[1];
        
        if(p1 == q1 || p1 == q2){
            if(ok(g,a,p1))return p1;
            else return -2;
        }
        
        if(p2 == q1 || p2 == q2){
            if(ok(g,a,p2))return p2;
            else return -2;
        }
        
        return int(0);
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
			int guesses[]             = {600, 594};
			int answers[]             = {6, 12};
			int expected__            = 606;

			std::clock_t start__      = std::clock();
			int received__            = EllysNumberGuessing().getNumber(vector <int>(guesses, guesses + (sizeof guesses / sizeof guesses[0])), vector <int>(answers, answers + (sizeof answers / sizeof answers[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			int guesses[]             = {100, 50, 34, 40};
			int answers[]             = {58, 8, 8, 2};
			int expected__            = 42;

			std::clock_t start__      = std::clock();
			int received__            = EllysNumberGuessing().getNumber(vector <int>(guesses, guesses + (sizeof guesses / sizeof guesses[0])), vector <int>(answers, answers + (sizeof answers / sizeof answers[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			int guesses[]             = {500000, 600000, 700000};
			int answers[]             = {120013, 220013, 79987};
			int expected__            = -2;

			std::clock_t start__      = std::clock();
			int received__            = EllysNumberGuessing().getNumber(vector <int>(guesses, guesses + (sizeof guesses / sizeof guesses[0])), vector <int>(answers, answers + (sizeof answers / sizeof answers[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			int guesses[]             = {500000000};
			int answers[]             = {133742666};
			int expected__            = -1;

			std::clock_t start__      = std::clock();
			int received__            = EllysNumberGuessing().getNumber(vector <int>(guesses, guesses + (sizeof guesses / sizeof guesses[0])), vector <int>(answers, answers + (sizeof answers / sizeof answers[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 4: {
			int guesses[]             = {76938260, 523164588, 14196746, 296286419, 535893832, 41243148, 364561227, 270003278, 472017422, 367932361, 395758413, 301278456, 186276934, 316343129, 336557549, 52536121, 98343562, 356769915, 89249181, 335191879};
			int answers[]             = {466274085, 20047757, 529015599, 246925926, 7318513, 501969197, 178651118, 273209067, 71194923, 175279984, 147453932, 241933889, 356935411, 226869216, 206654796, 490676224, 444868783, 186442430, 453963164, 208020466};
			int expected__            = 543212345;

			std::clock_t start__      = std::clock();
			int received__            = EllysNumberGuessing().getNumber(vector <int>(guesses, guesses + (sizeof guesses / sizeof guesses[0])), vector <int>(answers, answers + (sizeof answers / sizeof answers[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 5: {
			int guesses[]             = {42};
			int answers[]             = {42};
			int expected__            = 84;

			std::clock_t start__      = std::clock();
			int received__            = EllysNumberGuessing().getNumber(vector <int>(guesses, guesses + (sizeof guesses / sizeof guesses[0])), vector <int>(answers, answers + (sizeof answers / sizeof answers[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 6: {
			int guesses[]             = {999900000};
			int answers[]             = {100001};
			int expected__            = 999799999;

			std::clock_t start__      = std::clock();
			int received__            = EllysNumberGuessing().getNumber(vector <int>(guesses, guesses + (sizeof guesses / sizeof guesses[0])), vector <int>(answers, answers + (sizeof answers / sizeof answers[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

      case 7: {
			int guesses[]             = {1};
			int answers[]             = {10};
			int expected__            = 2;

			std::clock_t start__      = std::clock();
			int received__            = EllysNumberGuessing().getNumber(vector <int>(guesses, guesses + (sizeof guesses / sizeof guesses[0])), vector <int>(answers, answers + (sizeof answers / sizeof answers[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
/*      case 8: {
			int guesses[]             = ;
			int answers[]             = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = EllysNumberGuessing().getNumber(vector <int>(guesses, guesses + (sizeof guesses / sizeof guesses[0])), vector <int>(answers, answers + (sizeof answers / sizeof answers[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 9: {
			int guesses[]             = ;
			int answers[]             = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = EllysNumberGuessing().getNumber(vector <int>(guesses, guesses + (sizeof guesses / sizeof guesses[0])), vector <int>(answers, answers + (sizeof answers / sizeof answers[0])));
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
// Elly and Kris play the following game. In the beginning Kristina thinks of a number between 1 and 1,000,000,000, inclusive. After that Elly starts trying to guess it. In each round she says a number and Kristina says what is the absolute difference between the number she has thought of, and the number Elly guessed. Now Elly wonders if the guesses she has already made are sufficient to uniquely determine Kristina's number.

You are given a vector <int> guesses and a vector <int> answers of the same length. For each valid i, in round i of the game (0-based index) Elly guessed the number guesses[i] and Kristina answered answers[i]. If Kristina's number can be uniquely determined, return that number. If there are multiple possibilities that are consistent with the current set of guesses and answers, return -1. If it can be shown that at some point Kristina has lied (some of her answers were inconsistent), return -2.

DEFINITION
Class:EllysNumberGuessing
Method:getNumber
Parameters:vector <int>, vector <int>
Returns:int
Method signature:int getNumber(vector <int> guesses, vector <int> answers)


CONSTRAINTS
-guesses and answers will each contain between 1 and 50 elements, inclusive.
-guesses and answers will contain the same number of elements.
-Each element of guesses will be between 1 and 1,000,000,000, inclusive.
-Each element of answers will be between 1 and 999,999,999, inclusive.


EXAMPLES

0)
{600, 594}
{6, 12}

Returns: 606

Apparently Kristina has thought of the number of this SRM.

1)
{100, 50, 34, 40}
{58, 8, 8, 2}

Returns: 42

It is not guaranteed that Elly has used a perfect strategy so far.

2)
{500000, 600000, 700000}
{120013, 220013, 79987}

Returns: -2

The answers here are inconsistent. After the second guess we can conclude that the answer is below 500000. But the third one indicates that it is above 500000. Thus, Kristina is a liar and you should return -2.

3)
{500000000}
{133742666}

Returns: -1

There are multiple possibilities here, thus you should return -1.

4)
{76938260, 523164588, 14196746, 296286419, 535893832,
 41243148, 364561227, 270003278, 472017422, 367932361,
 395758413, 301278456, 186276934, 316343129, 336557549,
 52536121, 98343562, 356769915, 89249181, 335191879}
{466274085, 20047757, 529015599, 246925926, 7318513,
 501969197, 178651118, 273209067, 71194923, 175279984,
 147453932, 241933889, 356935411, 226869216, 206654796,
 490676224, 444868783, 186442430, 453963164, 208020466}

Returns: 543212345



5)
{42}
{42}

Returns: 84

Don't forget that the number Kris has thought of must be between 1 and 1,000,000,000.

6)
{999900000}
{100001}

Returns: 999799999

Don't forget that the number Kris has thought of must be between 1 and 1,000,000,000.

**/
// END CUT HERE
