#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  // int n, m;
  // cin >> n >> m;
  //Bieu dien do thi vo huong bang ma tran ke
  // int a[1001][1001];
  //   for (int i = 0 ; i < m ; i++){
  //     int u,v;
  //     cin >> u >> v;
  //     a[u][v] = a[v][u] = 1; 
  //   }
  //   for (int i = 1; i <= n ; i ++){
  //    for (int j = 1; j <= n ; j++)
  //      {
  //         cout << a[i][j] << " ";
  //      }
  //      cout << endl;
  //   }
  // C1:in ra danh sach ke tuong ung cua do thi bang cach su dung ma tran ke
  //  for (int i = 0; i < m; i++)
  //  {
  //    int u, v;
  //    cin >> u >> v;
  //    a[u][v] = a[v][u] = 1;    
  //  }
  //  for (int i = 1; i <= n; i++)
  //  {
  //    cout << i << " : ";
  //    for (int j = 1; j <= n; j++)
  //    {
  //      if (i != j && a[i][j] == 1)
  //        cout << j << " ";
  //    }
  //    cout << endl;
  //  }
  //  C2: in ra danh sach ke tuong ung cua do thi su dung mang vector
  //  vector<int> adj[10000];
  //  for (int i = 0; i < m; i++){
  //     int u,v;
  //     cin >> u >> v;
  //     adj[u].push_back(v);
  //     adj[v].push_back(u);
  //  }
  //  for (int i = 1; i <= n ; i++)
  //  {
  //     cout << i << " : ";
  //     for (int x: adj[i])
  //     {
  //       cout << x << " ";
  //     }
  //     cout << endl;
  //  }
  // CHUYEN TU MA TRAN KE SANG DANH SACH CANH
  // int n;
  // cin >> n;
  // vector<pair<int, int>> edge;
  // int a[1001][1001];
  // for (int i = 1; i <= n; i++){
  //   for (int j = 1; j <= n ; j ++)
  //    {
  //       cin >> a[i][j];
  //    }
  // }
  // for (int i = 1; i <= n; i++){
  //   for (int j = 1; j <= n ; j ++)
  //    {
  //       if (a[i][j] == 1 && i < j) edge.push_back({i,j});
  //    }
  // }
  // for (int i = 0; i < edge.size(); i++){
  //    cout << edge[i].first << " " << edge[i].second << endl;
  // }
  // DFS tu danh sach ke

  
}