#pragma once

#ifndef LIST
#define LIST

#include <stdlib.h>

class ListGraph;

template <class T>
class List{
    struct ListItem{
        T item;
        ListItem *next;
        ListItem(const T &item, ListItem *next = NULL){
            ListItem::item = item;
            ListItem::next = next;
        }
    };
    ListItem *first, *last;
    int count;

public:
    List(){
        first = last = NULL;
        count = 0;
    }
    ~List();
    void Add(const T &);
    bool Has(const T &)const;
};

template <class T>
List<T>::~List() {
    ListItem *current = first,
        *prev = NULL;
    while(current){
        prev = current;
        current = current->next;
        delete prev;
    }
}

template <class T>
void List<T>::Add(const T & item){
    ListItem *newItem = new ListItem(item);

    if (last)
        last->next = newItem;
    else
        first = newItem;
    last = newItem;
    count++;
}

template <class T>
bool List<T>::Has(const T & item) const{
    for (ListItem *current = first; current; current = current->next){
        if (current->item == item)
            return this;
    }
    return false;
}

#endif // LIST

