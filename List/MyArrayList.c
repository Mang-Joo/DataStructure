#include <stdio.h>
#include "ArrayList.h"

void ListInit(List *plist) {
    plist->cursor = 0;
    plist->size = -1;
}

void LInsert(List *plist, LData data) {
    if (plist->size >= LIST_LEN) {
        printf("List is full");
        return;
    }

    plist->arr[plist->size] = data;
    plist->size++;
}

int LFirst(List *plist, LData *pdata) {
    if (plist->size == 0) {
        printf("List is empty");
        return FALSE;
    }

    plist->cursor = 0;
    *pdata = plist->arr[plist->cursor];

    return TRUE;
}

int LNext(List *plist, LData *pdata) {
    if (plist->size == 0 || plist->cursor == plist->size - 1) {
        printf("Last");
        return FALSE;
    }

    *pdata = plist->arr[plist->cursor];
    plist->cursor++;

    return TRUE;
}

LData LRemove(List *plist) {

    LData answer = plist->arr[plist->cursor];

    for (int index = plist->cursor; index < plist->size; index++) {
        plist->arr[plist->cursor] = plist->arr[plist->cursor + 1];
    }

    plist->size--;
    plist->cursor--;

    return answer;
}

int LCount(List *plist) {
    return plist->size;
}