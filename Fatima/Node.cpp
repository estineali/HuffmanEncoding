///Fatima Nadeem - fn03768 - L1

#pragma once

#include "Node.h"

using namespace std;

Node::Node()
{
    w = 0;
    x = NULL;
}

Node::Node(int w, char x)
{
    this->w = w;
    this->x = x;
}

Node::~Node()
{}
