#include<iostream>
#include<cmath>
#include<string>

using namespace std;
/*
int main() {
  int radius;
  cout << "Enter the radius of the circle\n";
  cin >> radius;
  double pi = 2*acos(0.0);
  float area = pi * radius * radius;

  
  string name, roll_number;
  cout <<"Enter your name\n";
  getline(cin >> ws, name);
  
  cout <<"Enter your roll number\n";
  cin >> roll_number;
  cout << "\n\nArea of the circle is:  " << area;
  cout <<"\nHello:  "<< name;
  cout <<"\nYour roll number is:  "<<roll_number;
}


float final_balance(int withdraw, float bal){
  float trans_fees = 0.50;
  float value;
  if(bal - withdraw >= 0.50){
    if (withdraw % 5 == 0){
      bal = bal - withdraw;
    }else {
      value = bal;
      return value;
    }
  }else {
    value = bal;
    return value;
  }
  value = bal - trans_fees;
  return value;
}


int main(){
  float bal;
  int withdraw;
  cout << "Enter the amout to withdraw and account balance\n";
  cin >> withdraw >> bal;
  float mon = final_balance(withdraw, bal);
  printf("%.2f", mon);
}
*/


int digits(int num){
    int count=0, rem;
    while(num>0){
        rem =num%10;
        num/=10;
        count++;
    }
    return count;
}
int main() {
   int t, n, k;
   
   cin>>t;
   while(t--){
       int res=0, i=1;
       cin>>n;
       k=digits(n);
       while(1){
           if(i==k){
               res+= (n-pow(10,i-1)+1)*i;
               break;
           }
           else{
               res += 9*pow(10,i-1)*(i);
           } 
           i++;
           
       }
        cout<<res<<endl;
       }
   
   return 0;
}

