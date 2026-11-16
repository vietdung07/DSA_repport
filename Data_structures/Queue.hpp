#ifndef MY_QUEUE
#define MY_QUEUE
#include <iostream>
template <class T>
class MyQueue
{
public:
    MyQueue() : head(nullptr), tail(nullptr), cap(0) {}
    ~MyQueue()
    {
        Node *current = head;
        while (current)
        {
            Node *temp = current;
            current = current->next;
            temp->next = nullptr;
            delete temp;
        }
        head = nullptr;
    }
    bool isEmpty() const
    {
        return cap == 0;
    }
    T front()
    {
        if (!isEmpty())
            return head->data;
        else
        {
            std::cerr << "Queue is empty" << std::endl;
            return T();
        }
    }
    void enqueue(T data)
    {
        if (tail)
        {
            tail->next = new Node{data, nullptr};
            tail = tail->next;
        }
        else
            head = tail = new Node{data, nullptr};
        cap++;
    }
    void dequeue()
    {
        if (head)
        {
            Node *temp = head;
            head = head->next;
            temp->next = nullptr;
            delete temp;
            if (!head)
                tail = nullptr;
            cap--;
        }
    }
    void print() const
    {
        Node *cur = head;
        while (cur)
        {
            std::cout << cur->data;
            if (cur->next != nullptr)
                std::cout << " -> ";
            cur = cur->next;
        }
    }
    size_t size() const
    {
        return cap;
    }

private:
    struct Node
    {
        T data;
        Node *next;
    };
    Node *head;
    Node *tail;
    size_t cap;
};
#endif