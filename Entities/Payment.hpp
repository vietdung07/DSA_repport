#pragma once
#include "Menu.hpp"
#include "Booking.hpp"
class Payment
{
public:
    Payment();
    ~Payment();
    void processPayment();
    void refund();
    void verify();
private:
    Booking *bookingID;
    PaymentType paymentType;
    PaymentStatus status;
    
};