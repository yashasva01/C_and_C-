#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int X, Y, min;
	    cin >> X >> Y >> min;
	    if (X % Y == 0){
	        cout << -1 << endl;
	    } else{
	        int fac = min / X;
	        int copy = fac * X;
	        if (min % X != 0){
	            fac += 1;
	            copy = fac * X;
	        }
	        while (!(copy % X == 0 && copy % Y != 0)){
	            fac += 1;
	            copy = fac * X;
	        }
	        cout << copy << endl;
	   }
    }
    return 0;
}
	
