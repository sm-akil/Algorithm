// author : 𝘀𝗮𝗱𝗶𝗸 𝗶𝗾𝗯𝗮𝗹 𝗮𝗸𝗶𝗹

#include <bits/stdc++.h>
using namespace std;
vector<int> G[10];
int tn;
void dfs(int s)
{
bool visited[tn];
stack<int> S;
vector<int> R;
memset(visited, 0, sizeof(visited));
S.push(s);
visited[s] = 1;
while (!S.empty())
{
int u = S.top();
S.pop();
int n = G[u].size();
for (int i = 0; i < G[u].size(); i++)
{
int value = G[u][i];
if (!visited[value])
{
visited[value] = 1;
S.push(value);
}
}
R.push_back(u);
}
cout << "DFS: " << endl;
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
cout << "Printing the adjacency list :" <<endl;
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
dfs(src);
return 0;
}

/*
Enter the total number of node : 5
Enter the total number of edge : 5
0 1
0 2
0 3
1 2
2 4

Printing the adjacency list :
0 > 1 2 3
1 > 0 2
2 > 0 1 4
3 > 0
4 > 2
DFS:
0 3 2 4 1
*/
