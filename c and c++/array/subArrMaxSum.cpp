#include<iostream>
#include<stdlib.h>
#include<map>
#include<vector>

using namespace std;



vector<int> subarraySum(vector<int> arr, int n, int s)
    {
        int cur_sum = 0;
        int start = 0;
        int end = -1;
        
        vector<int> ans;
        map<int, int> sum_index;
        map<int,int>::iterator it;
        
        for (int i = 0; i < n; i++) {
            cur_sum += arr[i];
            
            if (cur_sum - s == 0) {
                start = 0; end = i;
                break;
            }
          // it = sum_index.find(cur_sum - s);
            if (sum_index.find(cur_sum - s) != sum_index.end()) {
                start = sum_index[cur_sum-s] + 1;
                end = i;
                break;
            }
            sum_index.insert(make_pair(cur_sum, i));
        }
        if (end == -1){
            ans.push_back(-1);
            return ans;
        }
        ans.push_back(start + 1);
        ans.push_back(end + 1);
        return ans;
    }
int main() {
    int n;
    cin >> n;

    vector<int> arr;
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        arr.push_back(k);
    }

    int target;
    cin >> target;

    vector<int> ans = subarraySum(arr, n, target);
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}