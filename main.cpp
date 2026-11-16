
#include <iostream>
#include <limits>
#include <string>
#include "./Services/HotelSystem.hpp"
using namespace std;



// ============================================================
// UTILITY
// ============================================================

HotelSystem Hotel;

void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int getChoice() {
    int choice;

    cout << "\nEnter your choice: ";
    if (!(cin >> choice)) {
        clearInput();
        return -1;
    }

    clearInput();
    return choice;
}

void pauseScreen() {
    cout << "\nPress Enter to continue...";
    cin.get();
}

void showHeader(const string& title) {
    cout << "\n";
    cout << "============================================================\n";
    cout << "                    " << title << "\n";
    cout << "============================================================\n";
}

// ============================================================
// ROOM MANAGEMENT
// ============================================================

void roomMenu() {
    int choice;

    do {
        showHeader("ROOM MANAGEMENT");

        cout << "  1. Display all rooms\n";
        cout << "  2. Display rooms by floor\n";
        cout << "  3. View room details\n";
        cout << "  4. Add a room\n";
        cout << "  5. Remove a room\n";
        cout << "  6. Update room information\n";
        cout << "  7. Change room status\n";
        cout << "  8. Search rooms\n";
        cout << "  9. Sort rooms\n";
        cout << " 10. Room statistics\n";
        cout << "  0. Back\n";

        choice = getChoice();

        switch (choice) {
            case 1:
                // TODO: Display all rooms
                Hotel.showRooms();
                break;
            case 2:
                // TODO: Display rooms by floor
                int floor;
                cout << "Enter floor: ";
                cin >> floor;
                Hotel.showRooms(floor);
                break;
            case 3:
                // TODO: View room details
                int nRoom;
                cout << "Enter floor: ";
                cin >> floor;
                cout << "Enter room number: ";
                cin >> nRoom;
                break;
            case 4:
                // TODO: Add room
                
                break;
            case 5:
                // TODO: Remove room
                break;
            case 6:
                // TODO: Update room information
                break;
            case 7:
                // TODO: Change room status
                break;
            case 8:
                // TODO: Search rooms by location, type, price, availability
                break;
            case 9:
                // TODO: Sort rooms by price or type
                break;
            case 10:
                // TODO: Display room statistics
                break;
            case 0:
                return;
            default:
                cout << "\nInvalid choice!";
        }

        if (choice != 0) pauseScreen();

    } while (choice != 0);
}

// ============================================================
// CUSTOMER MANAGEMENT
// ============================================================

void customerMenu() {
    int choice;

    do {
        showHeader("CUSTOMER MANAGEMENT");

        cout << "  1. Display all customers\n";
        cout << "  2. View customer details\n";
        cout << "  3. Add a customer\n";
        cout << "  4. Remove a customer\n";
        cout << "  5. Update customer information\n";
        cout << "  6. Search customers\n";
        cout << "  7. View customer booking history\n";
        cout << "  8. Manage VIP status\n";
        cout << "  0. Back\n";

        choice = getChoice();

        switch (choice) {
            case 1:
                // TODO: Display all customers
                break;
            case 2:
                // TODO: View customer details
                break;
            case 3:
                // TODO: Add customer
                break;
            case 4:
                // TODO: Remove customer
                break;
            case 5:
                // TODO: Update customer information
                break;
            case 6:
                // TODO: Search customers
                break;
            case 7:
                // TODO: View booking history
                break;
            case 8:
                // TODO: Manage VIP status
                break;
            case 0:
                return;
            default:
                cout << "\nInvalid choice!";
        }

        if (choice != 0) pauseScreen();

    } while (choice != 0);
}

// ============================================================
// RESERVATION MANAGEMENT
// ============================================================

void reservationMenu() {
    int choice;

    do {
        showHeader("RESERVATION MANAGEMENT");

        cout << "  1. Create a reservation\n";
        cout << "  2. Modify a reservation\n";
        cout << "  3. Cancel a reservation\n";
        cout << "  4. Confirm a reservation\n";
        cout << "  5. Search reservations\n";
        cout << "  6. Display all reservations\n";
        cout << "  7. View reservation details\n";
        cout << "  8. Check room availability\n";
        cout << "  9. Check reservation conflicts\n";
        cout << " 10. Reservation statistics\n";
        cout << "  0. Back\n";

        choice = getChoice();

        switch (choice) {
            case 1:
                // TODO: Create reservation
                break;
            case 2:
                // TODO: Modify reservation
                break;
            case 3:
                // TODO: Cancel reservation
                break;
            case 4:
                // TODO: Confirm reservation
                break;
            case 5:
                // TODO: Search by ID, customer, date, room location
                break;
            case 6:
                // TODO: Display all reservations
                break;
            case 7:
                // TODO: View reservation details
                break;
            case 8:
                // TODO: Check room availability
                break;
            case 9:
                // TODO: Check reservation conflicts
                break;
            case 10:
                // TODO: Reservation statistics
                break;
            case 0:
                return;
            default:
                cout << "\nInvalid choice!";
        }

        if (choice != 0) pauseScreen();

    } while (choice != 0);
}

// ============================================================
// WAITLIST MANAGEMENT
// ============================================================

void waitlistMenu() {
    int choice;

    do {
        showHeader("WAITLIST MANAGEMENT");

        cout << "  1. Add a customer to waitlist\n";
        cout << "  2. Remove a customer from waitlist\n";
        cout << "  3. Display waitlist\n";
        cout << "  4. Search waitlist entries\n";
        cout << "  5. View waiting position\n";
        cout << "  6. Manage waiting priority\n";
        cout << "  7. Find next eligible customer\n";
        cout << "  8. Process waitlist\n";
        cout << "  9. Convert waitlist entry to reservation\n";
        cout << "  0. Back\n";

        choice = getChoice();

        switch (choice) {
            case 1:
                // TODO: Add waitlist entry
                break;
            case 2:
                // TODO: Remove waitlist entry
                break;
            case 3:
                // TODO: Display waitlist
                break;
            case 4:
                // TODO: Search waitlist entries
                break;
            case 5:
                // TODO: View waiting position
                break;
            case 6:
                // TODO: Manage priority
                break;
            case 7:
                // TODO: Find next eligible customer
                break;
            case 8:
                // TODO: Process waitlist
                break;
            case 9:
                // TODO: Convert entry to reservation
                break;
            case 0:
                return;
            default:
                cout << "\nInvalid choice!";
        }

        if (choice != 0) pauseScreen();

    } while (choice != 0);
}

// ============================================================
// CHECK-IN / CHECK-OUT
// ============================================================

void checkInOutMenu() {
    int choice;

    do {
        showHeader("CHECK-IN / CHECK-OUT");

        cout << "  1. Check-in customer\n";
        cout << "  2. Check-out customer\n";
        cout << "  3. Display current stays\n";
        cout << "  4. View stay details\n";
        cout << "  5. Handle no-show reservations\n";
        cout << "  6. Display overdue stays\n";
        cout << "  7. Update room status after check-out\n";
        cout << "  8. Room occupancy overview\n";
        cout << "  0. Back\n";

        choice = getChoice();

        switch (choice) {
            case 1:
                // TODO: Check-in
                break;
            case 2:
                // TODO: Check-out
                break;
            case 3:
                // TODO: Display current stays
                break;
            case 4:
                // TODO: View stay details
                break;
            case 5:
                // TODO: Handle no-show
                break;
            case 6:
                // TODO: Display overdue stays
                break;
            case 7:
                // TODO: Update room status
                break;
            case 8:
                // TODO: Display occupancy
                break;
            case 0:
                return;
            default:
                cout << "\nInvalid choice!";
        }

        if (choice != 0) pauseScreen();

    } while (choice != 0);
}

// ============================================================
// PAYMENT MANAGEMENT
// ============================================================

void paymentMenu() {
    int choice;

    do {
        showHeader("PAYMENT MANAGEMENT");

        cout << "  1. Collect reservation deposit\n";
        cout << "  2. Process final payment\n";
        cout << "  3. Calculate reservation cost\n";
        cout << "  4. Process additional service charges\n";
        cout << "  5. Process refund\n";
        cout << "  6. Handle deposit forfeiture\n";
        cout << "  7. Search payments\n";
        cout << "  8. View payment history\n";
        cout << "  9. Revenue overview\n";
        cout << "  0. Back\n";

        choice = getChoice();

        switch (choice) {
            case 1:
                // TODO: Collect deposit
                break;
            case 2:
                // TODO: Process final payment
                break;
            case 3:
                // TODO: Calculate cost
                break;
            case 4:
                // TODO: Process additional service charges
                break;
            case 5:
                // TODO: Process refund
                break;
            case 6:
                // TODO: Handle deposit forfeiture
                break;
            case 7:
                // TODO: Search payments
                break;
            case 8:
                // TODO: View payment history
                break;
            case 9:
                // TODO: Revenue overview
                break;
            case 0:
                return;
            default:
                cout << "\nInvalid choice!";
        }

        if (choice != 0) pauseScreen();

    } while (choice != 0);
}

// ============================================================
// STATISTICS & REPORTS
// ============================================================

void statisticsMenu() {
    int choice;

    do {
        showHeader("STATISTICS & REPORTS");

        cout << "  1. Room statistics\n";
        cout << "  2. Reservation statistics\n";
        cout << "  3. Customer statistics\n";
        cout << "  4. Revenue statistics\n";
        cout << "  5. Room occupancy statistics\n";
        cout << "  0. Back\n";

        choice = getChoice();

        switch (choice) {
            case 1:
                // TODO: Room statistics
                break;
            case 2:
                // TODO: Reservation statistics
                break;
            case 3:
                // TODO: Customer statistics
                break;
            case 4:
                // TODO: Revenue statistics
                break;
            case 5:
                // TODO: Occupancy statistics
                break;
            case 0:
                return;
            default:
                cout << "\nInvalid choice!";
        }

        if (choice != 0) pauseScreen();

    } while (choice != 0);
}

// ============================================================
// SYSTEM OPERATIONS
// ============================================================

void systemMenu() {
    int choice;

    do {
        showHeader("SYSTEM OPERATIONS");

        cout << "  1. View operation history\n";
        cout << "  2. Undo last operation\n";
        cout << "  3. Undo multiple operations\n";
        cout << "  4. Clear operation history\n";
        cout << "  0. Back\n";

        choice = getChoice();

        switch (choice) {
            case 1:
                // TODO: View operation history
                break;
            case 2:
                // TODO: Undo last operation
                break;
            case 3:
                // TODO: Undo multiple operations
                break;
            case 4:
                // TODO: Clear operation history
                break;
            case 0:
                return;
            default:
                cout << "\nInvalid choice!";
        }

        if (choice != 0) pauseScreen();

    } while (choice != 0);
}

// ============================================================
// MAIN MENU
// ============================================================

void mainMenu() {
    int choice;

    do {
        showHeader("HOTEL MANAGEMENT SYSTEM");

        cout << "  1. Room Management\n";
        cout << "  2. Customer Management\n";
        cout << "  3. Reservation Management\n";
        cout << "  4. Waitlist Management\n";
        cout << "  5. Check-in / Check-out\n";
        cout << "  6. Payment Management\n";
        cout << "  7. Statistics & Reports\n";
        cout << "  8. System Operations\n";
        cout << "  0. Exit\n";

        choice = getChoice();

        switch (choice) {
            case 1: roomMenu(); break;
            case 2: customerMenu(); break;
            case 3: reservationMenu(); break;
            case 4: waitlistMenu(); break;
            case 5: checkInOutMenu(); break;
            case 6: paymentMenu(); break;
            case 7: statisticsMenu(); break;
            case 8: systemMenu(); break;
            case 0:
                cout << "\nExiting Hotel Management System...\n";
                break;
            default:
                cout << "\nInvalid choice!";
                pauseScreen();
        }

    } while (choice != 0);
}

// ============================================================
// ENTRY POINT
// ============================================================

int main() {
    mainMenu();
    return 0;
}
