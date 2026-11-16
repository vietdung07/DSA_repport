#pragma once
#include "./Data_structures/BinarySearchTree.hpp"
#include "./Entities/Booking.hpp"
#include "./Entities/DateRange.hpp"

class BookingManager
{
private:
    BST<Booking> bookings;

public:
    void addBooking(const Booking &booking);
    bool removeBooking(int bookingID);

    Booking *findBooking(int bookingID);

    vector<Booking *> findBookingsByDate(Date date);

    vector<Booking *> findBookingsByRange(
        DateRange period);

    vector<Booking *> getBookingsOfRoom(int roomID);
};