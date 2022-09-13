#ifndef VIEW_H
#define VIEW_H

#pragma once
#include <string>
#include "Led.h"

enum {LIGHT_OFF, LIGHT_ON};

class View
{
public:
    View(Led *Led);
    virtual ~View();
    void lightView();
    void updateState(std::string strState);
    void lightOn();
    void lightOff();

private:
    int lightState;
    Led *light;

};

#endif