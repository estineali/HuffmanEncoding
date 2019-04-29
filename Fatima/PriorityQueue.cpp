///Fatima Nadeem - fn03768 - L1

#include <cstddef>

#include "PriorityQueue.h"

PriorityQueue::PriorityQueue()
{
    n = 0;

    head = NULL;
    tail = NULL;

    sentinal = new Node;
    sentinal->next = head;  //sentinal's next points to head
}

PriorityQueue::~PriorityQueue()
{
    Node* u = sentinal;

    while(u != NULL)
    {
        sentinal = head;
        if (head != NULL)
        {
            head = head->next;
        }

        delete u;
        u = sentinal;
    }

    tail = NULL;
}

void PriorityQueue::Enqueue(Node* u)   //According to priority
{
    if (n == 0)
    {
        head = tail = u;
        sentinal->next = u;
    }
    else
    {
        Node* temp = sentinal;

        while(((temp->next) != NULL) && ((u->freq) < (temp->next->freq)))
        {
            temp = temp->next;
        }

        u->next = temp->next;
        temp->next = u;

        if(u->next == head)
        {
            head = u;
        }
        else if(tail->next == u)
        {
            tail = u;
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

    n++;
}

//Node* PriorityQueue::DeleteMin()  //Delete head
//{
//    if (n == 0)
//    {
//        return NULL;
//    }
//
//    char x = head->x;
//    Node* u = head;
//    head = head->next;
//    sentinal->next = head;
//    delete u;
//
//    if(--n == 0)
//    {
//        tail = NULL;
//    }
//
//    return x;
//}

void PriorityQueue::Pop()
{
    head = head->next;
    sentinal->next = head;
    n--;
}

int PriorityQueue::Size()
{
    return n;
}

//void PriorityQueue::SetSize(int n)
//{
//    this->n = n;
//}

Node* PriorityQueue::GetHead()
{
    return head;
}

//Node* PriorityQueue::GetTail()
//{
//    return tail;
//}

//void PriorityQueue::SetHead(Node* node)
//{
//    head = node;
//}

//void PriorityQueue::SetTail(Node* node)
//{
//    tail = node;
//}


