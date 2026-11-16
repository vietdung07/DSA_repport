#ifndef DOUBLED_LINKED_LIST
#define DOUBLED_LINKED_LIST

#include <iostream>
template <class T>
class DoubledLinkedList
{
public:
    DoubledLinkedList() : head(nullptr), tail(nullptr), cap(0) {}
    ~DoubledLinkedList()
    {
        while (head)
        {
            Node *temp = head;
            head = head->next;
            temp->next = nullptr;
            temp->prev = nullptr;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
        cap = 0;
    }
    void insert(int index, T data)
    {
        if (index < 0 || index > cap)
        {
            std::cerr << "Invalix index" << std::endl;
            return;
        }
        if (index == 0)
        {
            Node *temp = head;
            head = new Node{data, temp, nullptr};
            if (temp != nullptr)
                temp->prev = head;
            else
                tail = head;
            cap++;
            return;
        }
        if (index == cap)
        {
            Node *temp = tail;
            tail = new Node{data, nullptr, temp};
            if (temp != nullptr)
                temp->next = tail;
            cap++;
            return;
        }
        // tim vi tri de chen
        Node *cur = head;
        while (--index)
        {
            cur = cur->next;
        }
        // chen node moi
        Node *temp = cur->next;
        cur->next = new Node{data, temp, cur};
        temp->prev = cur->next;
        cap++;
    }
    void remove(int index)
    {
        if (index < 0 || index >= cap)
        {
            std::cerr << "Invalix index" << std::endl;
            return;
        }
        if (index == 0)
        {
            Node *temp = head;
            head = head->next;
            temp->next = nullptr;
            temp->prev = nullptr;
            delete temp;
            cap--;
            if (head != nullptr)
                head->prev = nullptr;
            else
                tail = nullptr;
            return;
        }
        if (index == cap - 1)
        {
            Node *temp = tail;
            tail = tail->prev;
            temp->next = nullptr;
            temp->prev = nullptr;
            delete temp;
            cap--;
            if (tail != nullptr)
                tail->next = nullptr;
            else
                head = nullptr;
            return;
        }
        // tim vi tri de xoa
        Node *cur = head;
        while (--index)
        {
            cur = cur->next;
        }
        // xoa node
        Node *temp = cur->next;
        cur->next = temp->next;
        temp->next->prev = cur;
        temp->next = nullptr;
        temp->prev = nullptr;
        delete temp;
        cap--;
    }
    void traverse(void (*func)(T &))
    {
        Node *cur = head;
        while (cur)
        {
            func(cur->data);
            cur = cur->next;
        }
    }
    void modiy(int index, T data)
    {
        if (index < 0 || index >= cap)
        {
            std::cerr << "Invalid index\n";
            return;
        }
        Node *cur = head;
        while (index--)
        {
            cur = cur->next;
        }
        cur->data = data;
    }
    int search(T data)
    {
        Node *cur = head;
        int i = 0;
        while (cur)
        {
            if (cur->data == data)
                return i;
            i++;
            cur = cur->next;
        }
        return -1;
    }
    void print()
    {
        Node<T> *cur = head;
        while (cur)
        {
            std::cout << cur->data;
            if (cur->next != nullptr)
                std::cout << " -> ";
            cur = cur->next;
        }
    }
    int size() const { return cap; }

private:
struct Node
    {
        T data;
        Node *next;
        Node *prev;
    };
    Node *head;
    Node *tail;
    size_t cap;
};
#endif