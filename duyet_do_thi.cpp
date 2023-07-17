#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> adj[1001];
bool visited[1001];
// do thi co huong
// void input(){

//   cin >> n >> m;
//   for (int i = 1; i <= m; i++){
//      int u,v;
//      cin >> u >> v;
//      adj[u].push_back(v);
//    //  adj[v].push_back(u);
//   }
//   memset(visited, false, sizeof(visited));
// }
// void dfs(int u){
//    cout << u << " "; 
//    visited[u] = true;
//    for (int x : adj[u])
//    {
//        if (!visited[x])
//        {
//           dfs(x);
//        }
//    }
// }
queue<int> q;
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  // input();
  // dfs(1);
}