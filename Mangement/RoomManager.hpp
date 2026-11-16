#pragma once
#include "Menu.hpp"
#include "./Entities/Room.hpp"
#define MAX_FLOORS 20
#define MAX_ROOMS 20
class RoomManager
{
private:
    Room *rooms[MAX_FLOORS][MAX_ROOMS];

public:
    void addRoom(const Room *room);
    void removeRoom(int roomFloor, int roomNumber);
    Room *findRoom(int roomID);
    void updateInfo(RoomType type,
                    size_t price,
                    size_t capacity);
    

    vector<Room *> filterByType(RoomType type);
    vector<Room *> sortByPrice();

    vector<Room *> getRoomsByFloor(int floor);
};
void RoomManager::removeRoom(int roomFloor, int roomNumber)
{
    if (rooms[roomFloor][roomNumber] == nullptr)
        std::cerr << "Room " + to_string(roomNumber) + " on " + to_string(roomFloor) + " doesn't exist" << endl;
    else
    {
        delete rooms[roomFloor][roomNumber];
        rooms[roomFloor][roomNumber] = nullptr;
    }
}