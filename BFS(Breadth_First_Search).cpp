// author : 𝘀𝗮𝗱𝗶𝗸 𝗶𝗾𝗯𝗮𝗹 𝗮𝗸𝗶𝗹

#include <bits/stdc++.h>
using namespace std;
vector<int> G[10];
int tn;
void BFS(int S)
{
bool visited[tn];
queue<int> Q;
vector<int> R;
memset(visited, 0, sizeof(visited));
Q.push(S); // passing the starting node as source
visited[S] = 1;
while (!Q.empty())
{
int front = Q.front();
for (int i = 0; i < G[front].size(); i++)
{
int value = G[front][i];
if (!visited[value])
{
visited[value] = 1;
Q.push(value);
}
}
R.push_back(front);
Q.pop(); // deleting the front to change the front of the queue
}
// cout<<R;
cout << "BFS: " << endl;
for (int i = 0; i < R.size(); i++)
{
cout << R.at(i) << " ";
}
}
int main()
{
int E, u, v, src = 0;
cout << "Enter the total number of node : ";
cin >> tn;
cout << "Enter the total number of edge : ";
cin >> E;
for (int i = 0; i < E; i++)
{
cin >> u >> v;
G[u].push_back(v);
G[v].push_back(u);
}
cout << endl;
cout << "printing the adjacency list:" <<endl;
for (int i = 0; i < tn; i++)
{
int n = G[i].size();
cout << i << " > ";
for (int j = 0; j < n; j++)
{
cout << G[i][j] << " ";
}
cout << endl;
}
BFS(src);
return 0;
}


/*
Inputs:
5
5
0 1
0 2
0 3
1 2
2 4
Output:
Adjacency List:
0 > 1 2 3
1 > 0 2
2 > 0 1 4
3 > 0
4 > 2
BFS:
0 1 2 3 4
*/

