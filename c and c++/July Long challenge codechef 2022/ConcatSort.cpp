#include <iostream>
#include <vector>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    vector<long long> arr;
	    for (int i = 0; i <n; i++){
	        long long k;
	        cin >> k;
	        arr.push_back(k);
	    }
	    long long index = -1, val = -1, limit;
	    
	    for (int i = 0; i< n-1;i++){
	        if (arr[i] > arr[i + 1]){
	            index = i + 1;
	            val = arr[index];
	            break;
	        }
	    }
	    if (index == -1 || index == n-1){
	        cout << "YES" << endl;
	        continue;
	    }
	    for (int i = 0; i < index; i++){
	        if (arr[i] > val) {
	            limit = arr[i];
	            break;
	        }
	    }
	    long long right = arr[index - 1];
	    int in;
	    for (in = index + 1;in < n; in++) {
	        if (arr[in] >= right){
	            right= arr[in];
	        }else if (arr[in] <= limit && arr[in] >= val) {
	            val = arr[in];
	        }else {
	            cout << "NO" << endl;
	            break;
	        }
	    }
	    if (in == n){
	        cout << "YES" << endl;
	    }
	}
	return 0;
}
