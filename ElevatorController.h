#ifndef ELEVATORCONTROLLER_H
#define ELEVATORCONTROLLER_H

#include "Elevator.h"
#include <vector>
#include "Floor.h"
#include "Alarm.h"
#include "SafetyService.h"

using namespace std;
class ElevatorController {
private:
    vector<Elevator*> elevators;
    vector<Floor> floors;
    Alarm alarm;
    SafetyService safetyService;
    void handleBuildingFireAlarm();
    void handlePowerOutage();
    void receiveHelpAlarm(Elevator* elevator);
public:
    ElevatorController(const vector<Elevator*>& elevators);
    void allocateElevator(int floor, bool direction);
    void update();
    // Handle building fire alarm
    void fireAlarm(); 
    void powerOut(); 
};

#endif
