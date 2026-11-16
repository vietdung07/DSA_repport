#pragma once
#include "./Menu.hpp"
class Room
{
    public:
        void updateInfo();
        void setStatus();
        bool isOperational();
    private:
    RoomType type;
    size_t price;
    size_t capacity;
    RoomStatus status;
};