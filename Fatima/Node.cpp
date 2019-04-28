///Fatima Nadeem - fn03768 - L1

#pragma once

#include "Node.h"

using namespace std;

Node::Node()
{
    w = 0;
    x = NULL;
    isLeaf = false;
}

Node::Node(w, x)
{
    this->w = w;
    this->x = x;
    isLeaf = false;
}

Node::~Node()
{}
