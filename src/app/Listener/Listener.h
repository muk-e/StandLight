#ifndef LISTENER_H
#define LISTENER_H

#include "Button.h"
#include "Controller.h"

#pragma once

class Listener
{
private:
    Button *powerButton;
    Controller *controller;

public:
    Listener(Button *button, Controller *control);
    ~Listener();
    void checkEvent();
};

#endif