#pragma once

struct Node
{
    int w;
    char x;
    Node* right;
    Node* left;
    Node* next;

    Node();
    Node(int, char);
    ~Node();
};
