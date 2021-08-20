#include<iostream>
#include<cmath>
#include<string>

using namespace std;

// takes input as integer
bool is_good_number(int num){
  // This function checks if the given number is a good number.
  // returns true if the number is a good number.

  while (1){
    if (num == 1){
      break;
    }else if (num % 3 == 0) {
      num = num / 3;
    }else if ((num -1) % 3 == 0) {
      num = (num -1) / 3;
    }else{
      break;
    }
  }

  if (num == 1) {
    return true;
  }else {
    return false;
  }
}


int find_good_number(int num){
  int result;
    while (1){
      num += 1;
      if (is_good_number(num)){
        result = num;
        break;
      }
    }
return result;
}



int main() {
  int n;
  int result;
  cout << "Enter the number n to be tested\n";
  cin >> n;
  if (is_good_number(n)){
    cout << "The given number is a good number: " << n;
  }else {
    result = find_good_number(n);
    cout <<"The smallest good number greater than n is: "<< result;
  }
}