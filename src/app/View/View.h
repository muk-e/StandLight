#ifndef VIEW_H
#define VIEW_H

#pragma once
#include <string>
#include "Led.h"

enum {LIGHT_OFF, LIGHT_ON1, LIGHT_ON2, LIGHT_ON3, LIGHT_ON4, LIGHT_ON5 };

class View
{
public:
    View(Led *Led1, Led *Led2, Led *Led3, Led *Led4, Led *Led5);
    virtual ~View();
    void lightView();
    void updateState(std::string strState);
    void lightOn1();
    void lightOn2();
    void lightOn3();
    void lightOn4();
    void lightOn5();
    void lightOff();

private:
    int lightState;
    Led *light1;
    Led *light2;
    Led *light3;
    Led *light4;
    Led *light5;



};

#endif