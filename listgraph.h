#pragma once

#ifndef LISTGRAPH_H
#define LISTGRAPH_H

#include "graph.h"
#include "list.h"
#include "listgraph.h"

using namespace std;

class ListGraph : public Graph
{
    List<int> *graph;

    int vertexNumber;

public:
    ListGraph(int n): vertexNumber(n), graph(new List<int>[n]){}
    ~ListGraph(){
        delete graph;
    }

    int CountVertex() const {
        return vertexNumber;
    }

    void AddArc(int from, int to);
    bool HasArc(int from, int to)const;
};

#endif // LISTGRAPH_H
