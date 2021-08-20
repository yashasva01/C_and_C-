#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main(){
    int num;
    cin >> num;
    int sum = num % 10;
    while(num > 0){
        num /= 10;
        if (num >= 10){
            continue;
        }else {
            sum += num;
        }
    }
    cout << sum;
} 