#include <iostream>

#include "Queue.h"
#include "Notify.h"

using namespace std;

int main()
{
    Queue<Notify> queueOfNotify;

    cout << "Is empty queue: " << queueOfNotify.IsEmpty() << endl;
    cout << "Is empty special queue: " << queueOfNotify.IsEmptySpecial() << endl;
}