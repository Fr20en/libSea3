#pragma once
#include <time.h>
#include <string>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sched.h>
#include <unistd.h>
#include <thread>

namespace thread_io_affinity
{
    class timer
    {
    private:
        struct timespec str, end, old, now, sleep, vsync, test, strloop, endloop;
        long long lodtime;
        long long looptime;
        long long runtime;
        unsigned long Fps;
        long SleepTime;
        unsigned long old_time;
        long long oldtimer;
        unsigned long now_time;
        long vsynctiemr[2];

    public:
        void set_cpu_affinity();
        float aotu_fps();
        void aotu_fps_init(uint fps);
        static void nsleep(long delay);
        int32_t get_num_cpus();
    };
} // namespace
