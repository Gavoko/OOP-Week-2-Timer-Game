#include <iostream>
#include <chrono>
#include <ctime>
#include <cmath>

// Original Source https://gist.github.com/mcleary/b0bf4fa88830ff7c882d 

namespace dc {
    class myTimer
    {
    public:
        void start();

        void stop();

        double elapsedMilliseconds();

        double elapsedSeconds();

    private:
        std::chrono::time_point<std::chrono::system_clock> m_StartTime;
        std::chrono::time_point<std::chrono::system_clock> m_EndTime;
        bool                                               m_bRunning = false;
    };
}