#include "Event.h"
namespace planning
{
  Event::Event()
  {
    //cout << ">>> Event : constructeur par defaut <<<" << endl;
    code = 1;
    title = nullptr;
    setTitle("---");
    timing = nullptr;
  }
  Event::Event(int c, const char *t) 
  {
    //cout << ">>> Event : constructeur de titre et de code<<<" << endl;
    setCode (c);
    title = nullptr;
    setTitle(t);
    timing = nullptr;
  }
  Event::Event(const Event &e)
  {
    //cout << ">>> Event : constructeur de copie <<<" << endl;
    setCode (e.getCode());
    title = nullptr;
    setTitle(e.getTitle());
    timing = nullptr;
    setTiming(e.getTiming());
  }
  Event::~Event()
  {
    //cout << ">>> Event : destructeur <<<" << endl;
    if (title) delete title;
    if (timing) delete timing;
  }
  void Event::setCode (int c)
  {
    if( c < 1) return;
    code = c;
  }
  void Event::setTitle (const char *t)
  {
    if(t == nullptr) return;
    if(title) delete title;
    title = new char[strlen(t)+1];
    strcpy (title, t);
  }
  void Event::setTiming(const Timing& t)
  {
    if (timing) delete timing;
    timing = new Timing(t);
  }
  int Event::currentCode = 1;
  int Event::getCode() const
  {
    return code;
  }
  const char *Event::getTitle() const
  {
    return title;
  }
  Timing Event::getTiming() const
  {
    return *timing;
  }
  void Event::display() const
  {
    cout << "Event("<< code <<") : "<<title <<endl;
    if(timing)
    {
       timing->display();
    }
  }
}