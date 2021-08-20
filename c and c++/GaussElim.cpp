#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    int n,i,j,k;
    cout.precision(4);
    cout.setf(ios::fixed);
    cout << "\nEnter the number of equations\n";
    cin >> n;
    float a[n][n+1], x[n];
    cout << "\nEnter the elements of the arguement-matrix row wise\n";

    // input the array elemenet

    for (int i = 0;i<n;i++){
         for (int j = 0;j<=n;j++){
             cin>>a[i][j];
         }
    }

    //Pivotization
    for (i =0; i<n; i++){
        for (k=i+1; k<n; k++){
            if (a[i][j] < a[k][i]){
                for (j=0;j<=n;j++){
                    double temp = a[i][j];
                    a[i][j] = a[k][j];
                    a[k][j] = temp;
                }
            }
        }
    }

    for (i=0;i<n;i++){
        for (k = i+1; k<n;k++){
            double t = a[k][i] / a[i][i];
            for (j = 0; j< n;j++){
                a[k][j]= a[k][j] - t*a[i][j];
            }
        }
    }
    cout << "\n\n The matrix after gauss - elemination is: \n";
    for (i=0;i<n;i++){
        for (j = 0; j<=n;j++){
            cout << a[i][j]<<setw(16);
        }cout << "\n"; 
    }
    for(i=n-1;i>=0;i--){
        x[i] =a[i][n];
        for(j=0;j<n;j++){
            if (j != i){
                x[i] = x[i] - a[i][j] * x[j];
            }
        }x[i] = x[i] / a[i][i];
    }

    cout <<"\nThe values of the variable are\n";
    for(i=0;i<n;i++){
        cout << x[i] <<endl;
    }
    return 0;
}