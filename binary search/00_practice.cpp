#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// Function to count the minimum number of changes required
int minChangesToFollowRules(int N, int M, vector<vector<int>>& garden) {
    int changes = 0;

    // Process each row
    for (int i = 0; i < N; i++) {
        unordered_set<int> flower_types_in_row;

        // Track flower types in the row
        for (int j = 0; j < M; j++) {
            flower_types_in_row.insert(garden[i][j]);
        }

        // If more than 2 types of flowers are in the row, replace the excess types
        if (flower_types_in_row.size() > 2) {
            changes += flower_types_in_row.size() - 2; // Remove excess types
        }

        // Process each adjacent pair in the row for adjacency constraint
        for (int j = 0; j < M - 1; j++) {
            if (garden[i][j] == garden[i][j + 1]) {
                changes++;  // We need to change one of them to break adjacency
            }
        }
    }

    // Process vertical adjacency (between rows)
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < M; j++) {
            if (garden[i][j] == garden[i + 1][j]) {
                changes++;  // We need to change one of them to break vertical adjacency
            }
        }
    }

    return changes;
}

int main() {
    int N, M;
    
    // Input the dimensions of the garden 
    cin >> N >> M;
    
    vector<vector<int>> garden(N, vector<int>(M));
    
    // Input the garden flower arrangement
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> garden[i][j];
        }
    }
    
    // Output the minimum number of changes required 
    cout << minChangesToFollowRules(N, M, garden) << endl;
    
    return 0;
}