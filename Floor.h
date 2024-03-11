#ifndef FLOOR_H
#define FLOOR_H

#include "Button.h"

class Floor {
private:
    int currentFloor;
    bool upButtonPressed;
    bool downButtonPressed;
    Button Button;
    
public:
    Floor();
    void pressUpButton();
    void pressDownButton();
    void resetButtons();
    void openDoors();
    void closeDoors();
    void ringAlarm();

   
};


#endif
