///Fatima Nadeem - fn03768 - L1

#pragma once

#include "HuffmanTree.h"

using namespace std;

HuffmanTree::HuffmanTree()
{}

HuffmanTree::HuffmanTree(PriorityQueue* pq)
{
    Node* left;
    Node* right;
    int weight;

    while(pq->Size() > 1)
    {
        left = pq->DeleteMin();
        left->next = NULL;
        weight = left->w;

        right = pq->DeleteMin();
        right->next = NULL;
        weight = weight + right->w;

        root = new Node(weight, NULL);
        root->left = left;
        root->right = right;

        pq->Enqueue(root*);
    }
}

char* HuffmanTree::GenCode(T)
{

}
