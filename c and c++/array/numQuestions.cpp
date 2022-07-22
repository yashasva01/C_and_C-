#include<iostream>
#include<algorithm>>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    // vector<int> arr;

    // for(int i = 0; i< 0; i++) {
    //     int k;
    //     cin >> k;
    //     arr.push_back(k);
    // }
    int hunQues = 0;
    int oneQues = 0;

    hunQues = n / 100;
    oneQues = n % 100;

    if (hunQues + oneQues > 10){
        cout << -1 << " ";
    }else {
        cout << oneQues + hunQues;
    }
    
}