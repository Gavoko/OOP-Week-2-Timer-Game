#include "myTimer.h"
using namespace dc;

// Original Source https://gist.github.com/mcleary/b0bf4fa88830ff7c882d 

void myTimer::start()
{
    m_StartTime = std::chrono::system_clock::now();
    m_bRunning = true;
}

void myTimer::stop()
{
    m_EndTime = std::chrono::system_clock::now();
    m_bRunning = false;
}

double myTimer::elapsedMilliseconds()
{
    std::chrono::time_point<std::chrono::system_clock> endTime;

    if (m_bRunning)
    {
        endTime = std::chrono::system_clock::now();
    }
    else
    {
        endTime = m_EndTime;
    }

    return std::chrono::duration_cast<std::chrono::milliseconds>(endTime - m_StartTime).count();
}

double myTimer::elapsedSeconds()
{
    return elapsedMilliseconds() / 1000.0;
}