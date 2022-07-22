#include <iostream>
#include <stdlib.h>
#include<vector>


using namespace std;

int main() {
    int n, k;
    vector<int> arr;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> k;
        arr.push_back(k);
    }
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++){
        cout << arr[i] << "  ";
    }
    int mid;
    int moves = 0;
    mid = (n)/2;
    cout << arr[mid] << endl;
    for (int i = 0; i < n; i++){
        moves = moves + abs(arr[mid] - arr[i]);
    }
    cout << moves <<endl;
}