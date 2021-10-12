#ifndef _NODE_HPP
#define _NODE_HPP
#include <iostream>
#include <string>
#include <list>
#include "edge.hpp"

class Node<T>
{
    public:

    void add(Edge edge);
    void remove(Edge edge);

    private:

    list<Edge> edges;
    T value;
};


#endif
