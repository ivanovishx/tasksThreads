// threadVS.cpp : Defines the entry point for the console application.
//

// #include "tasksThread.cpp"
#include "stdafx.h"
#include <stdio.h>
#define HAVE_STRUCT_TIMESPEC
#include <pthread.h>
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{

	ScheduleTask* taskHandeler = new ScheduleTask();

	// taskHandeler->now_ms();
	// printf("Hi:%ld",now_ms());

	// ScheduleTask obj1;

	// obj1.doit();
	while(1){
		Sleep(80);
	}
	char test;
	std::cin>>test;
	std::cout << "Char: " << test << std::endl;
    return 0;
}

