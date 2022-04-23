
#include <bits/stdc++.h>
using namespace std;
pair<int, pair<int, int>> G[20];
int root[100];
int find_parent(int u)
{
while (root[u] != u)
{
root[u] = root[root[u]];
u = root[u];
}
return u;
}
void find_union(int u, int v)
{
int a = find_parent(u);
int b = find_parent(v);
root[a] = root[b];
}
void kruskal(int E)
{
int min_cost = 0;
cout << endl
<< "Following are the edges in the constructed Minimum Spanning Tree\n";
for (int i = 0; i < E; i++)
{
int u = G[i].second.first;
int v = G[i].second.second;
int w = G[i].first;
if (find_parent(u) != find_parent(v))
{
find_union(u, v);
min_cost += w;
cout << u << "---" << v << " == " << w << endl;
}
}
cout << endl
<< "Minimum cost " << min_cost << endl;
}
int main()
{
int w, u, v, e;
cout << "Enter the number of Edges: ";
cin >> e;
cout << "Enter in the following order\nU V W\n";
for (int i = 0; i < e; i++)
{
cin >> u;
cin >> v;
cin >> w;
G[i] = make_pair(w, make_pair(u, v));
}
for (int i = 0; i < 100; i++)
{
root[i] = i;
}
sort(G, G + e);
kruskal(e);
/*
// printing the sorted adjecency list by the weight of the vertex
for(int i = 0; i<5;i++){
cout<<G[i].first;
cout<<" ";
cout<<G[i].second.first;
cout<<" ";
cout<<G[i].second.second;
cout<<"\n";
}*/
}


/*
inputs---
5
0 1 10
0 2 21
1 2 18
1 3 22
2 3 13
ans::: 41
*/
