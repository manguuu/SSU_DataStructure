#include <iostream>
#include <string>
#include <fstream>
#include "graph.h"

using namespace std;

void Graph::LoadMatrix(std::string& filename) {
    ifstream readFile;
    readFile.open(filename);
    if (readFile.is_open()) {
        int N; readFile >> N;
        size = N;
        graph.resize(N, vector<int>(N, 999));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                readFile >> graph[i][j];
            }
        }
    }
}

int Graph::GetSize() {
    return size;
}

void Graph::PrintMatrix() {
    for (int i = 0; i < graph.size(); i++) {
        for (int j = 0; j < graph[i].size(); j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

int Graph::getSmallIndex() {
    int min = 999;
    int idx = 0;
    for (int i = 0; i < size; i++) {
        if (dist[i] < min && !visited[i]) {
            min = dist[i];
            idx = i;
        }
    }
    return idx;
}

void Graph::PrintShortestPathWeight(int s) {
    Dijkstra(s);
    for (int i = 0; i < size; i++) {
        cout << dist[i] << endl;
    }
}

void Graph::Dijkstra(int s) {
    dist.clear(); visited.clear();
    dist.resize(size, 0); visited.resize(size, false);
    for (int i = 0; i < size; i++) dist[i] = graph[s][i];
    visited[s] = true;
    for (int i = 0; i < size; i++) {
        int cur = getSmallIndex();
        visited[cur] = true;
        for (int j = 0; j < size; j++) {
            if (!visited[j]) {
                if (dist[cur] + graph[cur][j] < dist[j]) dist[j] = dist[cur] + graph[cur][j];
            }
        }
    }
}