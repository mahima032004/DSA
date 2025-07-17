#include<iostream>
#include<vector>
#include<unordered_map>
#include<limits.h>
#include<set>
#include<list>
using namespace std;

int main() {

    unordered_map<int,list<pair<int,int>>>adj = {
        {0,{{1,5},{2,8}}},
        {1,{{3,2},{2,9},{0,5}}},
        {2,{{0,8},{1,9},{3,6}}},
        {3,{{1,2},{2,6}}}
    };
    
    set<pair<int,int>>sett;

    vector<int>dis(adj.size(),INT_MAX);

    int src = 0;
    dis[src] = 0;
    sett.insert(make_pair(0,0));

    while(!sett.empty()) {
        auto top = *(sett.begin());
        int weight = top.first;
        int node = top.second;
        sett.erase(sett.begin());

        for(auto i : adj[node] ) {
            int distance = weight + i.second;
            if(distance < dis[i.first]) {
              dis[i.first] = distance;
              sett.insert(make_pair(distance,i.first));
            }
        }
    }

    for(auto i : dis) cout << i << endl;

   



    return 0;



}