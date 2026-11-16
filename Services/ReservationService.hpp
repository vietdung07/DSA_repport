#pragma once
#include "./Mangement/RoomManager.hpp"
#include "./Mangement/BookingManager.hpp"
#include "./Mangement/CustomerManager.hpp"
#include "./Mangement/UndoManager.hpp"
#include "./Mangement/WaitlistManager.hpp"
class ReservationService {
private:
    RoomManager& roomManager;
    BookingManager& bookingManager;
    CustomerManager& customerManager;
    WaitlistManager& waitlistManager;
    UndoManager& undoManager;

public:
    vector<Room*> findAvailableRooms(
        const DateRange& period,
        RoomType type
    );

    bool createBooking(
        int customerID,
        int roomID,
        const DateRange& period
    );

    bool cancelBooking(int bookingID);

    void processWaitlist();
};