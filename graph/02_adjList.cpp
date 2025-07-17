#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class Graph {
   
    public:
    unordered_map<int,list<int>>adj;

     void addEdge(int a, int b, bool direc) {
        // 1 for directed
        // 0 for undirected

        adj[a].push_back(b);
        if(direc == 0) {
            adj[b].push_back(a);
        }
    }

    void printt() {
        for(auto i : adj) {
            cout << i.first;
            for(auto j: i.second) {
                cout << "->" << j;
            }
            cout << endl;
        }
    }
 

};

int main() {
    int edges, nodes;
    cout << "enter number of nodes" << endl;
    cin >> nodes;

    cout << "enter number of edges" << endl;
    cin >> edges;

    Graph g;

    for(int i = 0; i < edges; i++) {
        int a, b;
        cin >> a >> b;
        g.addEdge(a,b,0);

    }
    g.printt();

   
}

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<vector<int>> solve(int nodes, int e, vector<vector<int>>edges) {
//         //vector<vector<int>>nei(nodes);
//         vector<int>nei[nodes];

//         for(int i = 0 ; i < e; i ++) {
//             int u = edges[i][0];
//             int v = edges[i][1];
//             nei[v].push_back(u);
//             nei[u].push_back(v);

//         }
//         vector<vector<int>>ans(nodes);
//         for(int i =0 ; i  <nodes; i++) {
//             ans[i].push_back(i);

//             for(auto j : nei[i]) {
//                 ans[i].push_back(j);
//             }
//         }
//         return ans;
// }

// int main() {
//     vector<vector<int>>edges{ {0,1},{1,2},{2,3},{3,4},{4,0}};
//     vector<vector<int>>ans = solve(5,5,edges);

//     for(int i = 0 ; i < ans.size(); i ++) {
//         for(int j = 0; j  <ans[i].size(); j++) {
//             cout << ans[i][j] << "->" ;
//         }
//         cout << endl;
//     }
//     return 0;
  
// }