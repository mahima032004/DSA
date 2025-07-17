#include<iostream>
#include<vector>
using namespace std;

class DisjointSet {
    public:
    int n = 7;
    vector<int>parent;
    vector<int>rank;

    DisjointSet() {
        for(int i = 0; i <= n; i++) {
            parent[i] = i;
            rank[i] = 0;
        }
    }

    void addEdge(int u, int v) {
        int parentu = parent[u];
        int parentv = parent[v];
        
        int ranku = rank[parentu];
        int rankv = rank[parentv];

        if(rankv > ranku) {
            parent[u] = parentv;
        }
        else if(ranku > rankv) {
            parent[v] = parentu;
        }
        else {
            parent[v] = u;
            rank[u]++;
        }
    }

    void print() {
        for(int i = 0; i <=n ; i++) {
            cout << parent[i] << " ";
        }
        cout << endl;
        for(int i =0; i <=n; i++) {
            cout << rank[i] << " "; 
        }
    }

    int compress(int n) {
        if(parent[n] == n) n;

        return parent[n] = compress(parent[n]);

    }
};

int main() {
    DisjointSet d1;

    d1.addEdge(1,3);
    d1.addEdge(2,3);
    d1.addEdge(4,5);
    d1.addEdge(6,7);
    d1.addEdge(5,6);
    d1.addEdge(3,7);

    

}