#pragma once
#include "./Mangement/RoomManager.hpp"
#include "./Mangement/BookingManager.hpp"
#include "./Mangement/CustomerManager.hpp"
#include "./Mangement/UndoManager.hpp"
#include "./Mangement/WaitlistManager.hpp"
#include "ReservationService.hpp"
#include "PaymentService.hpp"
#include "CheckInOutService.hpp"
class HotelSystem
{
private:
    RoomManager roomManager;
    CustomerManager customerManager;
    BookingManager bookingManager;
    WaitlistManager waitlistManager;
    UndoManager undoManager;
    ReservationService reservationService;
    CheckInOutService checkInOutService;
    PaymentService paymentService;

public:
    void showRooms(int floor = 0);

    void showRoomInfo(int floor, int number);

    void addCustomer();

    void searchAvailableRooms();

    void createBooking();

    void cancelBooking();

    void checkIn();

    void checkOut();

    void undoLastOperation();
};