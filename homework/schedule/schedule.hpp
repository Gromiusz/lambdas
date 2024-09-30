#include <iostream>
#include <chrono>
#include <thread>
#include <functional>

void schedule(std::function<void()> func, std::chrono::seconds time) 
{
    std::this_thread::sleep_for(time);
    func();
}

void schedule(std::function<void(int)> func, std::chrono::seconds time, int param) 
{
    std::this_thread::sleep_for(time);
    func(param);
}

void schedule(std::function<void(std::string, int)> func, std::chrono::seconds time, std::string str, int param)
{
    std::this_thread::sleep_for(time);
    func(str, param);
}