#pragma once
#include "./Menu.hpp"
#include "./Data_structures/Queue.hpp"
#include "./Data_structures/PriorityQueue.hpp"
#include "./Entities/WaitlistEntry.hpp"
class WaitlistManager
{
private:
    MyQueue<WaitlistEntry> normalQueue;

    // PriorityQueue<
    //     WaitlistEntry,
    //     vector<WaitlistEntry>,
    //     WaitlistComparator>
    //     vipQueue;

public:
    void addRequest(const WaitlistEntry &request);

    WaitlistEntry *getNextRequest();

    bool cancelRequest(int requestID);

    void processAvailableRoom(const Room &room);
};