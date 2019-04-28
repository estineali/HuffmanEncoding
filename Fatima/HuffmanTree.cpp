///Fatima Nadeem - fn03768 - L1

#pragma once

#include <unordered_map>

#include "HuffmanTree.h"

using namespace std;

HuffmanTree::HuffmanTree()
{}

HuffmanTree::HuffmanTree(string text)   //Creates HuffmanTree
{
    Node* left;
    Node* right;
    int weight;

    pq = new PriorityQueue;

    unordered_map<char, int> freq;
	for (char ch : text)
    {
		freq[ch]++;
	}

	///I don't know if this is how we should iterate over unorderedmap but idk I just typed something
	for (char ch : freq)
    {
        Node* u = new Node(ch, freq[ch]);
        pq->Enqueue(u);
    }

    while(pq->Size() > 1)
    {
        left = pq->DeleteMin();  ///this part has issues. Delete_min doesn't work here because I don't want to delete the node itself, I want get the node itself and change head and sentinal
        left->next = NULL;
        weight = left->w;

        right = pq->DeleteMin();
        right->next = NULL;
        weight = weight + right->w;

        root = new Node(weight, NULL);
        root->left = left;
        root->right = right;

        pq->Enqueue(root);
    }
}

char* HuffmanTree::GenCode(char)  //Generates Code using the HuffmanTree created. Some kind of binary tree search algorithm perhaps
{

}
