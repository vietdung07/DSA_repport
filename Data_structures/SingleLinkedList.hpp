#ifndef SINGLE_LINKED_LIST
#define SINGLE_LINKED_LIST

#include <iostream>

template <typename T>
class SingleLinkedList
{

public:
    SingleLinkedList() : head(nullptr), cap(0) {}
    ~SingleLinkedList()
    {
        while (head)
        {
            Node *temp = head;
            head = head->next;
            temp->next = nullptr;
            delete temp;
        }
        head = nullptr;
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
            head = new Node{data, temp};
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
        cur->next = new Node{data, temp};
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
            delete temp;
            cap--;
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
        temp->next = nullptr;
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
    };
    Node *head;
    size_t cap;
};
#endif