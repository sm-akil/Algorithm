// author : 𝘀𝗮𝗱𝗶𝗸 𝗶𝗾𝗯𝗮𝗹 𝗮𝗸𝗶𝗹

#include <bits/stdc++.h>
#define INF 9999
#define n 4
using namespace std;
void Floyd_Warshall(int A[][n]){

   for (int k = 0; k < n; k++){
     for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){

     if (A[i][j] > A[i][k] + A[k][j]){
        A[i][j] = A[i][k] + A[k][j];

         }
      }
    }
}

   for (int i = 0; i < n; i++){
     for (int j = 0; j < n; j++){
       cout << A[i][j] << " ";
   }
      cout << endl;
  }
}

int main()
{
int A[n][n];
cout << "Enter the matrix :";

  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++)
     {
       cin >> A[i][j];
     }
  cout << endl;
  }
  Floyd_Warshall(A);
}


/*
#include <iostream>
using namespace std;
#define nV 4
#define INF 999     // defining the number of vertices

void printMatrix(int matrix[][nV]);


void floydWarshall(int graph[][nV]) {     // Implementing floyd warshall algorithm
  int matrix[nV][nV], i, j, k;

  for (i = 0; i < nV; i++)
    for (j = 0; j < nV; j++)
      matrix[i][j] = graph[i][j];


  for (k = 0; k < nV; k++) {     // Adding vertices individually
    for (i = 0; i < nV; i++) {
      for (j = 0; j < nV; j++) {
        if (matrix[i][k] + matrix[k][j] < matrix[i][j])
          matrix[i][j] = matrix[i][k] + matrix[k][j];
      }
    }
  }
  printMatrix(matrix);
}

void printMatrix(int matrix[][nV]) {
  for (int i = 0; i < nV; i++) {
    for (int j = 0; j < nV; j++) {
      if (matrix[i][j] == INF)
        printf("%4s", "INF");
      else
        printf("%4d", matrix[i][j]);
    }
    printf("\n");
  }
}


int main() {
  int graph[nV][nV] = {{0, 3, INF, 5},
             {2, 0, INF, 4},
             {INF, 1, 0, INF},
             {INF, INF, 2, 0}};
  floydWarshall(graph);
}
*/
