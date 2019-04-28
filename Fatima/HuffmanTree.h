///Fatima Nadeem - fn03768 - L1

#pragma once

#include "PriorityQueue.h"

using namespace std;

class HuffmanTree
{
private:
    Node* root;
    PriorityQueue* pq;

public:
    HuffmanTree();
    HuffmanTree(PriorityQueue*);
    ~HuffmanTree;

    char* GenCode(char);
};


