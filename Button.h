#ifndef BUTTON_H
#define BUTTON_H

class Button {
public:
    Button(int floor, bool direction);
    void illuminate();
    void extinguish();

private:
    int floor;
    // true for up, false for down
    bool direction;
};

#endif
