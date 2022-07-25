#include <iostream>
#include <climits>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    long long N, M;
	    cin >> N >> M;
	    if (M % N == 0) {
	       cout << N << " " << M;
	    }else if (N * 2 > M){
	        cout << M << " " << M;
	    }else {
	        long long temp = INT_MIN;
	        long long ans1, ans2;
	        for (long long i = N; i<= N + M % N; i++){
	            long long b = ((int)(M/i)) * i;
	            long long diff = abs(b - i);
	            if (temp < diff){
	                temp = diff;
	                ans1 = i;
	                ans2 = b;
	            }
	        }
	        
	        cout << ans1 << " " << ans2;
	    }cout << endl;
	}
	return 0;
}
