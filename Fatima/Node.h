#pragma once

struct Node
{
    int w;
    char x;
    Node* right;
    Node* left;
    Node* next;
    bool isLeaf;  ///for codegen

    Node();
    Node(int, char);
    ~Node();
};
