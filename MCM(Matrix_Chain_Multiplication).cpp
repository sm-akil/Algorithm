

#include <bits/stdc++.h>
using namespace std;
int matrix_chain_order(int p[], int n)
  {
    int m[n][n];
// int s[][];
   for (int i = 1; i <= n; i++){
    m[i][i] = 0;
   }

    for (int l = 2; l <= n; l++){
     for (int i = 1; i <= n - l + 1; i++){
       int j = i + l - 1;
       m[i][j] = INT_MAX;

    for (int k = i; k <= j - 1; k++){
    int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];

    if (q < m[i][j]){
        m[i][j] = q;
// s[i][j] = k;
       }
     }
   }
 }

 return m[1][n];
}


int main(){
int n, x;
cout << "Enter the number of matrices: ";
cin >> n;
int p[n + 1];
cout << "Enter the dimensions:\n";
for (int i = 0; i <= n; i++){
cin >> p[i];
}
x = matrix_chain_order(p, n); b
cout << "Minimum number of multiplication needed is: " << x;
return 0;
}

