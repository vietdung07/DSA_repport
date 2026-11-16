#pragma once
#include "./Entities/Operation.hpp"
#include "./Data_structures/Stack.hpp"
class UndoManager
{
private:
    MyStack<Operation> history;

public:
    void pushOperation(const Operation &op);
    void undo();
    bool canUndo() const;
};