#pragma once
#include "Menu.hpp"
#include "./Entities/Customer.hpp"
#include "./Entities/Booking.hpp"
#include "./Data_structures/SingleLinkedList.hpp"
class CustomerManager
{
private:
    SingleLinkedList<Customer> customers;

public:
    void addCustomer(const Customer &customer);
    bool removeCustomer(int customerID);
    Customer *findCustomer(int customerID);

    SingleLinkedList<Booking *> getBookingHistory(int customerID);
};