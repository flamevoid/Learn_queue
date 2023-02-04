#pragma once

#include "Notify.h"

template <typename TypeQueueArray>
class Queue
{
private:
	TypeQueueArray queue[4], specialQueue[3];

	void AddToArray(TypeQueueArray& arrayForAdd, TypeQueueArray data);
	void DeleteFromArray(TypeQueueArray& arrayForRemove, int indexForRemove);
public:

	Queue();

	void AddMember(TypeQueueArray newMember, bool isSpecial);
	void DeleteMember(int indexOfMember, bool isSpecial);

	bool IsEmpty(), IsEmptySpecial();
};