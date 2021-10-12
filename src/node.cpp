#include "node.hpp"

 void Node::add(Edge edge)
 {
     edges.push_back(edge);
 }

 void Node::remove(Edge edge)
 {
     edges.pop_back(edge);
 }