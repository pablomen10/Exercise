#ifndef TASKS_ADDER_H
#define TASKS_ADDER_H

#ifdef WIN32
  #ifdef tasks_STATIC
    #define TASKS_API
  #else
    #ifdef tasks_EXPORTS
      #define TASKS_API __declspec(dllexport)
    #else
      #define TASKS_API __declspec(dllimport)
    #endif
  #endif
#else
  #define TASKS_API
#endif

#include <string>

struct TASKS_API Task{
  Task(std::string op1, float a1, float b1);
  std::string op;
  float a;
  float b;
}

#endif