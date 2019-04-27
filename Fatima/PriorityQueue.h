///Fatima Nadeem - fn03768 - L1

#pragma once

#include "SLList.h"

using namespace std;

class PriorityQueue
{
    SLList* s;
    Node* sentinal;

public:
    PriorityQueue();
    ~PriorityQueue();

    void Enqueue(T);
    T DeleteMin();
};
