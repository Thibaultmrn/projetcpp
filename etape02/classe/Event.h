
#ifndef EVENT
#define EVENT
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include "Timing.h"
using namespace std;
namespace planning
{
  class Event
  {
    private :
      int code;
      char *title;
      Timing *ptiming;

    public :
      static int currentCode;
      Event();
      Event(int c, const char *t);
      Event(int c, const char *t, Timing time);
      Event(const Event &e);
      ~Event();
     
      void  setCode (int c);
      void setTitle (const char *t);
      void setTiming(Timing time);

      int getCode() const;
      const char *getTitle() const;
      Timing getTiming() const;

      void display() const;
  };
}

#endif