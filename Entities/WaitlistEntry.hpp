#pragma once
#include "./Menu.hpp"
#include "Room.hpp"
class WaitlistEntry
{
public:
    WaitlistEntry();
    ~WaitlistEntry();
    void cancel();
    bool isEligible(const Room &room);

private:
    RoomType preferredRoomType;
    Priority priority;
    FullDate createdAt;
};
