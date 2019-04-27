///Fatima Nadeem - fn03768 - L1

#include <cstddef>

#include "PriorityQueue.h"

PriorityQueue::PriorityQueue()
{
    s = new SLList;
    sentinal = new Node;
    sentinal->data = NULL;
    sentinal->next = s->GetHead();  //sentinal's next points to head
}
PriorityQueue::~PriorityQueue()
{
    delete sentinal;
    sentinal = NULL;
    delete s;
}

void PriorityQueue::Enqueue(T x)   //According to priority
{
    Node* u = new Node;
    u->data = x;

    if ((s->Size()) == 0)
    {
        s->SetHead(u);
        s->SetTail(u);
        sentinal->next = u;
    }
    else
    {
        Node* temp = sentinal;

        while(((temp->next) != NULL) && ((u->data) > (temp->next->data)))
        {
            temp = temp->next;
        }

        u->next = temp->next;
        temp->next = u;

        if(u->next == s->GetHead())   //if temp is tail
        {
            s->SetHead(u);
        }
        else if(s->GetTail()->next == u)
        {
            s->SetTail(u);
        }

//        if(temp->next == NULL)   //if temp is tail
//        {
//            s->GetTail()->next = u;
//            s->SetTail(u);
//        }
//        else
//        {
//            u->next = temp->next;
//            temp->next = u;
//        }

    }

    s->SetSize((s->Size()) + 1);
}

T PriorityQueue::DeleteMin()
{
    return s->Pop();
}
