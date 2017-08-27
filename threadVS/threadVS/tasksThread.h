// =============================================================================
//
//  taskThread.h
//  
//  Run in Windows VC++
//  Created by Ivan Lozano 
//  Research purposes
//
// =============================================================================


#ifndef __SHEDULETASK_HPP__
#define __SHEDULETASK_HPP__


#include "thread.h"
#include <stdio.h>
#include <sys\timeb.h>

using namespace std;
// using namespace DJI;
// using namespace DJI::onboardSDK;

class ScheduleTask: public thread_c
{

private:

    
    long timerHz;
    long timer100Hz;
    long timer50Hz;
    long timer20Hz;
    long timer10Hz;
    long timer5Hz;
    long timer2Hz;
    long timer1Hz;
    long timer5Seg;

    bool run100hzTasks();
    bool run50hzTasks();
    bool run20hzTasks();
    bool run10hzTasks();
    bool run5hzTasks();
    bool run2hzTasks();
    bool run1hzTasks();
    bool run5SegTasks();

    struct timeb start;
    // static struct timeb start, end;

protected:

    

    // virtual bool process_input( char *buff, size_t cb );
    // virtual bool process_output();

public:


    long now_ms();

    ScheduleTask()
    {

     
        timer100Hz = now_ms();
        timer50Hz = timer100Hz;
        timer20Hz = timer100Hz;
        timer10Hz = timer100Hz;
        timer5Hz = timer100Hz;
        timer2Hz = timer100Hz;
        timer1Hz = timer100Hz;
        timer5Seg = timer100Hz;
        create(); // Create Thread -> calling thread_entry()

    }

    void thread_entry();
   
};



#endif // __SHEDULE_TASK_HPP__