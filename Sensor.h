#ifndef SENSOR_H
#define SENSOR_H

class Sensor {
public:
    bool checkDoorObstacle();
    bool checkOverload();
    bool detectFire();
};

#endif