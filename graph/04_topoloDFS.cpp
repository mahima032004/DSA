#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;

int main() {
    vector<vector<int>>edges{{0,3},{3,1},{1,2},{1,4}};
    
    unordered_map<int,bool>visited;
    int nodes = 5;
    int e = 4;
    vector<int>ans;

    vector<vector<int>>nei(nodes);

    for(int i = 0;  i < edges.size(); i++) {
        int  u = edges[i][0];
        int v = edges[i][1];

        nei[u].push_back(v);
        nei[v].push_back(u);
    }

    queue<int>q;
    int temp = edges[0][0];
    q.push(temp);
    visited[temp] = true;

    while(!q.empty()) {
        int a = q.front();
        ans.push_back(a);
        q.pop();
        
        for(int i =0; i < nei[a].size(); i++  ) {
            if(visited[nei[a][i]] == false)  {q.push(nei[a][i]);
                visited[nei[a][i]] = true;            
        }
    }
}
    for(int i = 0 ; i < ans.size() ; i++){
        cout << ans[i] << " " << endl;
    }

    

}