#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;
enum class RoomStatus {
    AVAILABLE,
    OCCUPIED,
    CLEANING,
    MAINTENANCE
};
enum class BookingStatus {
    PENDING,
    CONFIRMED,
    CHECKED_IN,
    COMPLETED,
    CANCELLED,
    NO_SHOW
};
enum class PaymentType {
    DEPOSIT,
    FINAL_PAYMENT,
    REFUND
};

enum class PaymentStatus {
    PENDING,
    SUCCESS,
    FAILED
};

enum class RoomType
{
    SINGLE,
    COUPLE
};

enum Priority
{
    STANDARD,
    VIP
};

struct FullDate
{
    int hour, minute, day, month, year;
};

struct Date
{
    int day, month, year;
};