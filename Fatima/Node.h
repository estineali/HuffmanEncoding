#pragma once

struct Node
{
    int w;
    T x;
    Node* right;
    Node* left;
    Node* next;
    bool isLeaf;

    Node();
    Node(w, x);
    ~Node();
};
