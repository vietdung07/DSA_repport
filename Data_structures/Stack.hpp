#ifndef MY_STACK
#define MY_STACK
#include <iostream>
template <class T>
class MyStack
{
public:
    MyStack() : head(nullptr), num(0) {}
    ~MyStack()
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
        return head == nullptr;
    }
    void pop()
    {
        if (head != nullptr)
        {
            Node *temp = head;
            head = head->next;
            temp->next = nullptr;
            delete temp;
            num--;
        }
    }
    void push(T data)
    {
        Node *temp = head;
        head = new Node{data, temp};
        num++;
    }
    T top() const
    {
        if (head == nullptr)
        {
            std::cerr << "Stack rong" << std::endl;
            return T();
        }
        return head->data;
    }
    int size() const { return this->num; }
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

private:
    struct Node
    {
        T data;
        Node *next;
    };
    Node *head;
    int num;
};

#endif