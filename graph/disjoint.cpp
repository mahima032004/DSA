// class DisjointSet {
//     public:
//         vector<int> parent, size;

//         DisjointSet(int n) {
//             parent.resize(n);
//             size.resize(n, 1);
//             for (int i = 0; i < n; i++) {
//                 parent[i] = i;
//             }
//         }

//         // Find parent with path compression
//         int uPfind(int u) {
//             if (parent[u] == u) return u;
//             return parent[u] = uPfind(parent[u]);
//         }

//         // Union two components by size
//         void unionBySize(int u, int v) {
//             int p1 = uPfind(u);
//             int p2 = uPfind(v);

//             if (p1 == p2) return; // already in same set

//             if (size[p1] < size[p2]) {
//                 parent[p1] = p2;
//                 size[p2] += size[p1];
//             } else {
//                 parent[p2] = p1;
//                 size[p1] += size[p2];
//             }
//         }
//     };