#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int minSum = INT_MAX;
    int sum = 0;
    for (int i = 0; i< n; i++){
        sum = sum + arr[i];
        minSum = min(minSum, sum);

        if (sum > 0){
            sum = 0;
        }
    }
    cout << minSum;

    return 0;
}