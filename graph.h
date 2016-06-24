#ifndef GRAPH_H
#define GRAPH_H
#pragma once
#include <iostream>

using namespace std;

class Graph
{
public:
    Graph() {}
    virtual ~Graph(){}
    virtual void AddArc(int from, int to) = 0; //добавляет дугу в граф
    virtual bool HasArc(int from, int to) const = 0; // определяет, есть ли такая дуга в графе
    virtual int CountVertex() const = 0; //подсчет количества вершин в графе
};

#endif // GRAPH_H
