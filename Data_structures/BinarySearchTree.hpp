#pragma once
#include "./Menu.hpp"
template <class T>
struct Node
{
    T key;
    Node<T> *left;
    Node<T> *right;
};

template <class T>
class BST
{
public:
    BST() : root(nullptr) {}
    ~BST()
    {
        clear(root);
        root = nullptr;
    }
    void add(T value)
    {
        addNode(this->root, value);
    }
    void remove(T value)
    {
        removeNode(root, value);
    }
    BST *search(T value)
    {
        
    }

private:
    void clear(Node<T> *r)
    {
        if (r == nullptr)
            return;
        clear(r->left);
        clear(r->right);
        r->left = nullptr;
        r->right = nullptr;
        delete r;
    }
    void addNode(Node<T> *&r, T key)
    {
        if (r == nullptr)
            r = new Node<T>{key, nullptr, nullptr};
        if (key <= r->key)
            addNode(r->left, key);
        else
            addNode(r->right, key);
    }
    void removeNode(Node<T> *r, T key)
    {

    }

    Node<T> *root;
};