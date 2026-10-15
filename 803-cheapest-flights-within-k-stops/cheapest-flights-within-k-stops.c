 int findCheapestPrice(int n, int** flights, int flightsSize, int* flightsColSize, int src, int dst, int k) {
    int dist[n];

    for (int i = 0; i < n; i++) {
        dist[i] = 1000000000;
    }

    dist[src] = 0;

    for (int i = 0; i <= k; i++) {
        int temp[n];

        for (int j = 0; j < n; j++) {
            temp[j] = dist[j];
        }

        for (int j = 0; j < flightsSize; j++) {
            int u = flights[j][0];
            int v = flights[j][1];
            int price = flights[j][2];

            if (dist[u] != 1000000000 && dist[u] + price < temp[v]) {
                temp[v] = dist[u] + price;
            }
        }

        for (int j = 0; j < n; j++) {
            dist[j] = temp[j];
        }
    }

    if (dist[dst] == 1000000000) {
        return -1;
    }

    return dist[dst];
}