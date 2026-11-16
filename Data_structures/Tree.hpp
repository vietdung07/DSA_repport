#ifndef MY_TREE
#define MY_TREE
#include <iostream>
#include <queue>
using namespace std;
template <class T>
struct MyTree
{
    T data;
    MyTree *leftmostChild;
    MyTree *rightSibling;
};

template <class T>
void preorder_traverse(MyTree<T> *Tree)
{
    if (Tree == nullptr)
        return;
    std::cout << Tree->data << ' ';
    for (MyTree<T> *t = Tree->leftmostChild; t != nullptr; t = t->rightSibling)
    {
        preorder_traverse(t);
    }
}

template <class T>
void postorder_traverse(MyTree<T> *Tree)
{
    if (Tree == nullptr)
        return;
    for (MyTree<T> *t = Tree->leftmostChild; t != nullptr; t = t->rightSibling)
    {
        postorder_traverse(t);
    }
    std::cout << Tree->data << ' ';
}

template <class T>
void inorder_traverse(MyTree<T> *Tree)
{
    if (Tree == nullptr)
        return;
    inorder_traverse(Tree->leftmostChild);
    std::cout << Tree->data << ' ';
    if (Tree->leftmostChild == nullptr)
        return;
    MyTree<T> *t = Tree->leftmostChild->rightSibling;
    while (t)
    {
        inorder_traverse(t);
        t = t->rightSibling;
    }
}

// template<class T>
void level_traverse(MyTree<int> *Tree)
{
    if (Tree == nullptr)
        return;
    queue<MyTree<int> *> q;
    q.push(Tree);
    while (!q.empty())
    {
        auto root = q.front();
        q.pop();
        std::cout << root->data << ' ';
        for (MyTree<int> *t = root->leftmostChild; t != nullptr; t = t->rightSibling)
        {
            q.push(t);
        }
    }
}

template <class T>
int height(MyTree<T> *Tree)
{
    int res = 0;
    for (MyTree<T> *i = Tree->leftmostChild; i != nullptr; i = i->rightSibling)
    {
        res = std::max(res, height(i));
    }
    return res + 1;
}

template <class T>
int level(MyTree<T> *Tree)
{
    int res = 0;
    for (MyTree<T> *i = Tree->leftmostChild; i != nullptr; i = i->rightSibling)
    {
        res++;
    }
    return res;
}

template <class T>
int depth(MyTree<T> *Tree, MyTree<T> *root)
{
    for (MyTree<T> *i = root->leftmostChild; i != nullptr; i = i->rightSibling)
    {
        if (i == Tree)
            return 2;
        else
            return depth(Tree, i) + 1;
    }
    return 0;
}

#endif