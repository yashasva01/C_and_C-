#include <iostream>
#include <vector>
#include <map> 

using namespace std;

#define m 998244353

long long countSum(vector<int> arr, int n) {
    long long count = 0;
    long long seq = 0;
    for (int i: arr){
        if (i == 0){
            seq = 0;
        }else {
            ++seq;
            count = ((count) + (seq)); 
        }
    }
    return count;
}


void findAllPermutations(vector<int> arr, int n, int index, map< vector<int>, int> &mp) {
    if (index == n){
        if (mp.find(arr) != mp.end()) {
            mp[arr]++;
        }else {
            mp[arr] = 1;
        }
    }
    for (int i = index; i< n; i++){
        swap(arr[index], arr[i]);
        findAllPermutations(arr, n , index+ 1, mp);
        swap(arr[index], arr[i]);
    }
}

int main() {
	// your code goes here
	int t; 
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    vector<int> arr;
	    for (int i = 0; i < n ; i++){
	        int n;
	        cin >> n;
	        arr.push_back(n);
	    }
	    long long ans=0;
	    map< vector<int>, int> mp;
	    findAllPermutations(arr, n, 0, mp);
	    
	    map< vector<int>, int> :: iterator it = mp.begin();
	    
	   while (it != mp.end()) {
	       vector<int> vec = it -> first;
            ans = ((ans % m) + (countSum(vec, n)*it-> second)%m)%m;
            // for (int i = 0; i < n; i++){
            //     cout << vec[i] << " ";
            // }cout << it-> second << endl;
            it++;
        }
        
        cout<< ans << endl;
	}
	return 0;
}
