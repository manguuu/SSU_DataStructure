#ifndef _GRAPH_H
#define _GRAPH_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Graph {
public: 
    void LoadMatrix(std::string& filename);
    int GetSize();
    void PrintMatrix();
    void PrintShortestPathWeight(int s);
private:
    vector<vector<int>> graph;
    vector<int> dist;
    vector<bool> visited;
    int size;
    int getSmallIndex();
    void Dijkstra(int s);
};

#endif