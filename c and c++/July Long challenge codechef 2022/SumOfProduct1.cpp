#include <iostream>
#include <vector> 
using namespace std;


void countSum(vector<int> arr, int n) {
    long long count = 0;
    long long ans = 0;
    for (int i: arr){
        if (i == 0){
            ans = 0;
        }else {
            ++ans;
            count += ans; 
        }
    }
    cout << count << endl;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    vector<int> arr;
	    for(int i = 0; i< n; i++) {
	        int k;
	        cin >> k;
	        arr.push_back(k);
	    }
	    countSum(arr, n);
	}
	return 0;
}
