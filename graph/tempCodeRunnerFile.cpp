#include<iostream>
#include<vector>
using namespace std;

class Graph {
    public:
    // adjanceny matrix bana lete hai sabse phlt to
    vector<vector<int>>adj;
    Graph(int n) {
    adj.resize(n, vector<int>(n,0));
    }
    void addEdge(int a, int b, bool direc){
        adj[a][b] = 1;
        if(!direc) adj[b][a] = 1;
    }
    void printt() {
        for(int i = 0; i < adj.size(); i++) {
            for(int j =0 ; j < adj[0].size(); j++) {
                cout << adj[i][j];
            }
            cout << endl;
        }
    }
};

int main() {
    

    int nodes;
    
    int edges;
    cout << "enyer edges" << endl;
    cout << "enter nodes" << endl;
    cin >> edges >> nodes;
    Graph g(nodes);

    for(int i =0 ; i < edges; i++) {
        int a,b;
        cin >> a >> b;
        g.addEdge(a,b,0);
    }
    g.printt();
}