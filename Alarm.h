#ifndef ALARM_H
#define ALARM_H
using namespace std;
#include <string>
class Alarm {
public:
    void soundWarning();
    void displayMessage(const string& message);
};

#endif
