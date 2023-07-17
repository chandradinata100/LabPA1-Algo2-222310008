#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int INF = 1000; // Nilai tak hingga / max yang ditentukan sendiri

int main() {
    int n = 6; // Jumlah kota
    vector<vector<pair<int, int>>> adj(n + 1);

    adj[1] = {{2, 7}, {3, 9}, {6, 14}};
    adj[2] = {{1, 7}, {3, 10}, {4, 15}};
    adj[3] = {{1, 9}, {2, 10}, {4, 11}, {6, 2}};
    adj[4] = {{2, 15}, {3, 11}, {5, 6}};
    adj[5] = {{4, 6}, {6, 9}};
    adj[6] = {{1, 14}, {3, 3}, {5, 9}};

    vector<int> dist(n + 1, INF);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    int start = 1; // Node awal
    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int A = pq.top().second;
        int currDist = pq.top().first;
        pq.pop();

        if (currDist > dist[A])
            continue;

        for (auto edge : adj[A]) {
            int v = edge.first;
            int weight = edge.second;
            if (currDist + weight < dist[v]) {
                dist[v] = currDist + weight;
                pq.push({dist[v], v});
            }
        }
    }

    int tujuan = 5; // Node yang ingin dituju
    cout << "Jarak tempuh terpendek dari node 1 ke node " << tujuan << " yaitu bernilai ";
    if (dist[tujuan] == INF)
        cout << "Tidak terjangkau" << endl;
    else
        cout << dist[tujuan] << endl;

    return 0;
}
