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

// Function declaration must be before main() or in a header file .H
void wait(int TIME_TO_SLEEP);

int main()
{
    int delay = 1000;

    dc::myTimer timer;
    timer.start();
    int counter = 0;

    wait(delay);

    std::cout << "Delay in Seconds: " << timer.elapsedSeconds() << std::endl;
    std::cout << "Delay in Milliseconds: " << timer.elapsedMilliseconds() << std::endl;

    return 0;
}

// This function could be placed in a .cpp file and referenced
void wait(int TIME_TO_SLEEP) 
{
    std::cout << "Started loop.." << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cout << "Iteration - " << i << std::endl;

        if (i == 4) {
            std::cout << "Sleeping ...." << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(TIME_TO_SLEEP));
        }
    }
}

