#ifndef ELEVATOR_H
#define ELEVATOR_H
using namespace std;
#include <set>
#include <string>
#include "SafetyService.h"
#include "Sensor.h"
#include "Alarm.h"
#include "ElevatorController.h"
#include "Button.h"


class Elevator {
private:
    int currentFloor;
    Sensor sensor;
    Button button; 
    bool doorObstacle;
    bool isOverloaded;
    vector<Floor> destinationFloors;
    void sendleHelpAlarm();
    void handleDoorObstacle();
    void handleFireAlarm();
    void handleOverload();
    void handlePowerOutage();
public:
    Elevator();
    void ringbell();
    void goToFloor(int floor);
    void openDoors();
    void closeDoors();
    void displayFloor();
    void showMessage(const string& message);
    void audioWarning();
    // logic for elevator operation
    void operate(); 
    void pressHelpButton();
    // used for overload, door obstacles
    void sensorTriggered(); 
    // internal: true if fire alarm comes from this elevator
    void fireAlarm(bool internal); 
    void powerOut();

       
};

#endif
