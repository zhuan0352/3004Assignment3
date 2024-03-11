#ifndef PASSENGER_H
#define PASSENGER_H

class Passenger {
private:
    int currentFloor;
    int destinationFloor;
    int weight;
public:
    Passenger(int currentFloor, int destinationFloor);
    Passenger(int weight);
    void callElevator();
    void selectFloor();
    bool getWeight();

};

#endif

