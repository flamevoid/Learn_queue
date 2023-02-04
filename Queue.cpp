#include "Queue.h"

template <typename TypeQueueArray>
Queue<TypeQueueArray>::Queue()
{
	for (int i = 0; i < 4; i++)
		this->queue[i].ClearData();

	for (int i = 0; i < 3; i++)
		this->specialQueue[i].ClearData();
}

template <typename TypeQueueArray>
void Queue<TypeQueueArray>::AddToArray(TypeQueueArray &arrayForAdd, TypeQueueArray data)
{
	size_t sizeArray = sizeof(arrayForAdd)/sizeof(TypeQueueArray);

	if (arrayForAdd[0] == 0)
		arrayForAdd[0] = data;
}

template <typename TypeQueueArray>
void Queue<TypeQueueArray>::AddMember(TypeQueueArray newMember, bool isSpecial)
{
	switch (isSpecial)
	{
	case true:
		AddToArray(this->specialQueue, newMember);
		break;
	case false:
		AddToArray(this->queue, newMember);
		break;
	}
}

template <typename TypeQueueArray>
void Queue<TypeQueueArray>::DeleteFromArray(TypeQueueArray& arrayForRemove, int indexForRemove)
{
	arrayForRemove[indexForRemove] = NULL;
}

template <typename TypeQueueArray>
void Queue<TypeQueueArray>::DeleteMember(int indexOfMember, bool isSpecial)
{
	switch (isSpecial)
	{
	case true:
		DeleteFromArray(this->specialQueue, indexOfMember);
	case false:
		DeleteFromArray(this->queue, indexOfMember);
	}
}

template <typename TypeQueueArray>
bool Queue<TypeQueueArray>::IsEmpty()
{
	size_t sizeArray = sizeof(this->queue) / sizeof(TypeQueueArray);
	for (int i = 0; i < sizeArray; i++)
	{
		if (this->queue[i].GetTextData() != "")
			return false;
	}

	return true;
}

template <typename TypeQueueArray>
bool Queue<TypeQueueArray>::IsEmptySpecial()
{
	size_t sizeArray = sizeof(this->specialQueue) / sizeof(TypeQueueArray);
	for (int i = 0; i < sizeArray; i++)
	{
		if (this->specialQueue[i].GetTextData() != "")
			return false;
	}

	return true;
}