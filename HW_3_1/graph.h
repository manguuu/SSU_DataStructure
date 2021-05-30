#ifndef _GRAPH_H
#define _GRAPH_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Graph {
public: 
    vector<vector<int>> graph;
    void LoadMatrix(std::string& filename);
    void PrintMatrix();
};

#endif