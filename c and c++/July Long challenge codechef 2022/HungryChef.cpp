#include <iostream>
using namespace std;

void countBest(int x, int y, int n, int r) {
    int low = 0, high = n, mid;
    while(low <= high) {
        mid = low + (high - low)/2;
        if (r - (x*(n - mid) + y * mid) < 0){
            high = mid -1;
        }else if (r - (x*(n - mid) + y * mid) < y - x) {
            cout << n - mid << " " << mid << endl;
            break;
        }else if (r - (x*(n - mid) + y * mid) >= y-x) {
            low = mid + 1;
        }
    }
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int X, Y, N, R;
	    cin >> X >> Y >> N >> R;
	    if (X*N > R){
	        cout << -1 << endl;
	    }else if (R / Y >= N) {
	        cout <<"0 " << N << endl;
	    }else {
	        countBest(X, Y, N ,R);
	    }
	}
	return 0;
}
