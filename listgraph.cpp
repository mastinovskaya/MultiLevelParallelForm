#include "listgraph.h"

void ListGraph::AddArc(int from, int to){
    if (from < 0 || from >= vertexNumber || to < 0 || to >= vertexNumber) // проверка, существует ли такая дуга
        return;
    graph[from].Add(to);
}

bool ListGraph::HasArc(int from, int to)const {
    if (from < 0 || from >= vertexNumber || to < 0 || to >= vertexNumber)
        return false;
    return graph[from].Has(to);
}


