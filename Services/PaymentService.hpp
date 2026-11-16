#pragma once
class PaymentService {
public:
    bool collectDeposit(int bookingID, double amount);

    bool processFinalPayment(int bookingID);

    bool refund(int bookingID, double amount);
};