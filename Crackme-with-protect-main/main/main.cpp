#include <iostream>
#include <windows.h>
#include <thread>
//sdk.hpp

#include "sdk.hpp"

int main()
{
	// create thread
	std::thread t(subx553);
	// login
	subx123();
	// joind thread 
	t.join();
	return 0;
}