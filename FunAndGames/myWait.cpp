#include <iostream>
#include <chrono>
#include <thread>
#include "myWait.h"

void dcWait::wait(int TIME_TO_SLEEP) {
	std::cout << "Delay started..." << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(TIME_TO_SLEEP));
	std::cout << "Delay over..." << std::endl;
}