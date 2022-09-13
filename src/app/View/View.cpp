#include "View.h"
#include <wiringPi.h>

View::View(Led *Led)
{
    light = Led;
    lightState = LIGHT_OFF;
}

View::~View()
{

}

void View::updateState(std::string strState)
{
    switch (lightState)
    {
        case LIGHT_OFF:
            lightOff();
            if (strState == "StateOn") {
                lightState = LIGHT_ON;
            }
        break;

        case LIGHT_ON:
            lightOn();
            if (strState == "StateOff") {
                lightState = LIGHT_OFF;
            }
        break;
    }
}

void View::lightView()
{
     switch (lightState)
    {
        case LIGHT_OFF:
            light->Off();
       
        break;

        case LIGHT_ON:
            light->On();
        break;
    }
}

void View::lightOn()
{
    static unsigned int prevTime = 0;

    if (millis() - prevTime < 300) return;
    prevTime = millis();
    light->Toggle();
}

void View::lightOff()
{
    light->Off();
}