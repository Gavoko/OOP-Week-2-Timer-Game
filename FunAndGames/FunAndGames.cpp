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
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "myTimer.h"
#include "myWait.h"

int main()
{
    //Create a simple game using the Timer class based on reactions
    int delay = 1000; //in milliseconds
    dc::myTimer timer;
    int randomDelay = 0;
    srand(time(NULL)); // needed to get a different random number each time

    //On running the program, the player will see a start message with instructions on how to play.
    std::cout << "In this game you must guess how much time has passsed in seconds.\nPress the space bar to begin & press it again when you think the correct time has passed.\nIf you get within 1 second, you win!\n";
    dcWait::wait(delay);

    //Your program random integer between 1 and 10 (inclusive) is chosen.
    randomDelay = rand() % 10 + 1;
    
    std::cout << "\n\nGuess a delay of " << randomDelay << "seconds.";
    std::cout << "\n\nStarting now!!!\n";
    timer.start();
    while (true)
    {
        char c = _getch();
        if (c == ' ') break;
    }

    timer.stop();
    int timePassed = timer.elapsedSeconds();
    double error = abs(randomDelay - timePassed);
    std::cout << "\n\nTime Passed is " << timePassed << " seconds";
    std::cout << "\n\nYou were " << error << " off the target";

    //If inside one second the player wins, if outside they lose.
    if (error < 1) std::cout << "\n\nYou Win!!! ";
    else std::cout << "\n\nYou Lost!";
    //There is another message to show the outcome and to ask if the player wants to play again.
    dcWait::wait(delay);
    system("cls");

    return 0;
}