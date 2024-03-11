#ifndef BUILDING_H
#define BUILDING_H

#include "ElevatorController.h"
#include <vector>
#include "Elevator.h"
#include "Floor.h"

using namespace std;

class Building {
private:
    int numberOfFloors;
    int numberOfElevators;
    vector<Elevator> elevators;
    ElevatorController controller;
    Floor floors;
public:
    Building(int floors, int elevators);
    void requestElevator(int floor, bool direction); 
    // Simulate the operation of the building and its elevators
    void simulate(); 

};
#endif
