#include <iostream>
#include "wiringPi.h"
#include "Button.h"
#include "Led.h"
#include "Listener.h"
#include "Controller.h"
#include "View.h"

int main()
{
    std::cout << "Hello World!" << std::endl;

    Button button1(27); // Abstract of Button
    Led led1(25);
    Led led2(24);
    Led led3(23);
    Led led4(22);
    Led led5(21);
    View view(&led1,&led2,&led3,&led4,&led5);


    Controller control(&view);
    Listener listener(&button1, &control);

    while(1)
    {
        // Listner (Event 감시)
        listener.checkEvent();
        view.lightView();
        delay(50);
    }

    return 0;
}