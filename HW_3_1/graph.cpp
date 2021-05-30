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
        graph.resize(N, vector<int>(N, 999));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                readFile >> graph[i][j];
            }
        }
    }
}

void Graph::PrintMatrix() {
    for (int i = 0; i < graph.size(); i++) {
        for (int j = 0; j < graph[i].size(); j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}