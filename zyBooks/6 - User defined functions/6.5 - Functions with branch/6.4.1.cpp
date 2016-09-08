#include <iostream>
using namespace std;

/*
	Define stubs for the functions called by the below main(). Each stub should print "FIXME: Finish FunctionName()" followed by a newline, and should return -1. Example output:
	FIXME: Finish GetUserNum()
	FIXME: Finish GetUserNum()
	FIXME: Finish ComputeAvg()
	Avg: -1
*/

/* Your solution goes here  */

int main() {
   int userNum1 = 0;
   int userNum2 = 0;
   int avgResult = 0;

   userNum1 = GetUserNum();
   userNum2 = GetUserNum();

   avgResult = ComputeAvg(userNum1, userNum2);

   cout << "Avg: " << avgResult << endl;

   return 0;
}
