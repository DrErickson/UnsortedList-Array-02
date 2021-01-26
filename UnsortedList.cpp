
#include "UnsortedList.h"

UnsortedList::UnsortedList() {
    length = 0;
    currentPos = -1;  // 0

}

void UnsortedList::MakeEmpty() {
    length = 0;
}

bool UnsortedList::IsFull() const {
    return length == MAX_ITEMS;
}

int UnsortedList::GetLength() const {
    return length;
}

bool UnsortedList::Contains(int someItem) {
    return false;
}

void UnsortedList::PutItem(int item) {

}

void UnsortedList::DeleteItem(int item) {

}

void UnsortedList::ResetIterator() {

}

int UnsortedList::GetNextItem() {
    return 0;
}

