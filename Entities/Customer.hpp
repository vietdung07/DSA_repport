#pragma once
#include "./Menu.hpp"
class Customer
{
    public:
    Customer();
    ~Customer();
    void updateInfo(string cname, string cphoneNumber, bool isVip);
    void getBookingHistory();
    void getStayHistory();
    private:
    string ID;
    string name;
    string phoneNumber;
    bool isVIP;
};