#include <iostream>
#include <stdlib.h>
#include <vector>
#include <queue>

using namespace std;


vector<int> findTheNegative(int size, vector<int> arr, int k){
    vector<int> ans;
    queue<int> q;

    int i =0, j = 0;

    while(j < size){
         if (arr[j] < 0){
                q.push(arr[j]);
            }
        if (j - i + 1 < k){
            j++;
        }else if (j - i + 1 == k){
            if (q.size() == 0){
                ans.push_back(0);
            } else {
                ans.push_back(q.front());
                if (arr[i] == q.front()){
                    q.pop();
                }
            }
            i++;
            j++;
        }
        
    }


    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i< n; i++){
        int k;
        cin >> k;
        arr.push_back(k);
    }
    int k;
    cin >> k;

    vector<int> ans = findTheNegative(n, arr, k);

    for (int i =0; i< ans.size(); i++){
        cout << endl << ans[i] << "  ";
    }
}