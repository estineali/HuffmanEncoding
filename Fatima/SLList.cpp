///Fatima Nadeem - fn03768 - L1

#include <cstddef>

#include "SLList.h"

SLList::SLList()
{
    n = 0;
    head = NULL;
    tail = NULL;
}

SLList::~SLList()
{
    Node* u = head;

    while(u != NULL)
    {
        head = head->next;
        delete u;
        u = head;
    }

    tail = NULL;
}

int SLList::Size()
{
    return n;
}

T SLList::Push(T x)
{
    Node* u =  new Node;
    u->x = x;

    u->next = head;
    head = u;

    if (n == 0)
    {
        tail = u;
    }

    n++;

    return x;
}

T SLList::Pop()
{
    if (n == 0)
    {
        return NULL;
    }

    T x = head->x;
    Node* u = head;
    head = head->next;
    delete u;

    if(--n == 0)
    {
        tail = NULL;
    }

    return x;
}

T SLList::Remove()
{
    return Pop();
}

bool SLList::Add(T x)
{
    Node* u = new Node;
    u->x = x;

    if (n == 0)
    {
        head = u;
    }
    else
    {
        tail->next = u;
    }
    tail = u;

    n++;

    return true;
}

void SLList::SetSize(T x)
{
    n = x;
}

Node* SLList::GetHead()
{
    return head;
}

Node* SLList::GetTail()
{
    return tail;
}

void SLList::SetHead(Node* node)
{
    head = node;
}

void SLList::SetTail(Node* node)
{
    tail = node;
}
