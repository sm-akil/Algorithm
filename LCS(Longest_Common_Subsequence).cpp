

#include<bits/stdc++.h>
using namespace std;
int lcs(string sub_1, string sub_2,int a,int b){
int LCS[a][b];
int t = 0;
int s = 0;
for(int i = 0; i<=a; i++){
for(int j = 0; j<=b; j++){
if(i == 0 || j == 0){
LCS[i][j] = 0;
}
else if(sub_1[i]== sub_2[j]){
LCS[i][j] = LCS[i-1][j-1] + 1;
}
else{
t = LCS[i-1][j];
s = LCS[i][j-1];
LCS[i][j] = max(t,s);
}
}
}
cout<<"The comparison matrix\n";
for(int i = 0; i<=a; i++){
for(int j = 0; j<=b;j++){
printf("lcs[%d][%d] = %d ",i,j,LCS[i][j]);
}
cout<<"\n";
}
return LCS[a][b];
}
int main(){
int a,b, res;
string sub_1,sub_2;
cout<< "Input sub_1 : ";
cin>>sub_1;
cout<< "Input sub_2 : ";
cin>>sub_2;
a = sub_1.size();
b = sub_2.size();
printf("%d %d\n",a,b);
res = lcs(sub_1,sub_2,a,b);
printf("The lCS is %d",res);
}
