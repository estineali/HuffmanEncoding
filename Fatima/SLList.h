///Fatima Nadeem - fn03768 - L1

#pragma once

#include "Node.h"

using namespace std;

class SLList
{
    Node* head;
    Node* tail;
    int n;

public:
    SLList();
    ~SLList();

    int Size();

    T Push(T);
    T Pop();
    T Remove();
    bool Add(T);

    void SetSize(T);
    Node* GetHead();
    Node* GetTail();
    void SetHead(Node*);
    void SetTail(Node*);
};
