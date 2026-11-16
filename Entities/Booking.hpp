#pragma once
#include "./Menu.hpp"
#include "Customer.hpp"
class Booking
{
public:
    Booking() = default;
    ~Booking() = default;
    void confirm();
    void cancel();
    void checkIn();
    void checkOut();
    void markNoShow();
    bool isValid();
    void updateInfo();

private:
    Customer *customer;
    size_t roomFloor;
    size_t roomNumber;
    Date start;
    Date end;
    BookingStatus status;
    FullDate createdAt;
};

void Booking::confirm()
{
    // Nếu trạng thái(status) hiện tại là PENDING thì chuyển thành CONFIRMED
}
void Booking::cancel()
{
    // Nếu trạng thái(status) hiện tại là CONFIRMED thì chuyển thành CANCELLED
}
// void Booking::checkIn();
// void Booking::checkOut();
// void Booking::checkOut();
// void Booking::checkOut();