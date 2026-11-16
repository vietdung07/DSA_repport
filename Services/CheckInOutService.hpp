#pragma once
#include "./Mangement/BookingManager.hpp"
#include "./Mangement/RoomManager.hpp"
class CheckInOutService
{
private:
    BookingManager &bookingManager;
    RoomManager &roomManager;

public:
    bool checkIn(int bookingID);

    bool checkOut(int bookingID);

    bool handleNoShow(int bookingID);
};