/*
 * Fun to Try! To Dare is To Do!
 *
 * v0.1
 * Author: Dr Darryl Charles
 * Date: Summer 2021
 *
 * Copyright notice: Public Domain
 */ 

#include <iostream>
#include <chrono>
#include <thread>
#include "myTimer.h"
#include "myWait.h"

int main()
{
    int delay = 1000; //in milliseconds

    dc::myTimer timer;
    timer.start();
    int counter = 0;

    dcWait::wait(delay);

    std::cout << "Delay in Seconds: " << timer.elapsedSeconds() << std::endl;
    std::cout << "Delay in Milliseconds: " << timer.elapsedMilliseconds() << std::endl;

    timer.stop();

    return 0;
}