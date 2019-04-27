///Fatima Nadeem - fn03768 - L1

#include <iostream>
#include <cstdlib>
#include <time.h>

#include "PriorityQueue.h"

using namespace std;

int main()
{
    PriorityQueue* pq = new PriorityQueue;
    srand(time(NULL));

    //Generating 100 random numbers and adding them to pq using the PriorityQueue function Enqueue
    for (int i = 0; i < 100; i++)
    {
        pq->Enqueue(rand());
    }

    //Output-ing first 20 members of pq in two sample runs by using the PriorityQueue function DeleteMin()
    for (int i = 0; i < 2; i++)
    {
        cout << "Sample run " << (i + 1) << endl << "First 20 numbers in the priority queue:" << endl;
        for (int j = 0; j < 20; j++)
        {
            cout << pq->DeleteMin() << endl;
        }
    }

    delete pq;
}
