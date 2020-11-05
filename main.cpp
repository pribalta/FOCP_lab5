#include <iostream>
#include <fstream>
#include <vector>

struct Edge
{
    float weight;
    Node* next;

    Edge(float w, Node* n) {
        weight = weight;
        next = n;
    }
};

struct Node
{
    int value;
    std::vector<Edge> edges;

    Node(float v) {
        value = v;
    }

    void connect(float w, Node* next) {
        Edge e(w, next);
        edges.push_back(e);
    }
};


int main(){
    std::vector<Node> graph;

    // Create nodes
    Node n0(0);
    Node n1(1);
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    Node n6(6);

    // Connect nodes
    n0.connect(0, &n1);
    n0.connect(0, &n2);

    n1.connect(0, &n3);
    n1.connect(0, &n4);
    
    n2.connect(0, &n5);
    n2.connect(0, &n6);

    // Add nodes to graph
    graph.push_back(n0);
    graph.push_back(n1);
    graph.push_back(n2);
    graph.push_back(n3);
    graph.push_back(n4);
    graph.push_back(n5);
    graph.push_back(n6);

    return 0;
}