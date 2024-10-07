#include "Event.h"
namespace planning
{
  Event::Event()
  {
    cout << ">>> Event : constructeur par defaut <<<" << endl;
    code = 1;
    title = nullptr;
    setTitle("---");
    ptiming = nullptr;
  }
  Event::Event(int c, const char *t) 
  {
    cout << ">>> Event : constructeur de titre et de code<<<" << endl;
    setCode (c);
    title = nullptr;
    setTitle(t);
    ptiming = nullptr;
  }
  Event::Event(int c, const char *t, Timing time) 
  {
    cout << ">>> Event : constructeur d'initialisation <<<" << endl;
    setCode (c);
    title = nullptr;
    setTitle(t);
    ptiming = nullptr;
    setTiming(time);
  }
  Event::Event(const Event &e)
  {
    cout << ">>> Event : constructeur de copie <<<" << endl;
    setCode (e.getCode());
    title = nullptr;
    setTitle(e.getTitle());
    ptiming = nullptr;
    setTiming(e.getTiming());
  }

  Event::~Event()
  {
    cout << ">>> Event : destructeur <<<" << endl;
    if (title) delete title;
    if (ptiming) delete ptiming;
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
  void Event::setTiming(Timing time)
  {
    if(ptiming) delete ptiming;
    ptiming = new Timing(time);
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
    if (ptiming != nullptr)
    {
        return *ptiming;
    }
  }
  void Event::display() const
  {
    cout << "Event("<< code <<") : "<<title <<endl;
    if(ptiming)
    {
       ptiming->display();
    }
  }
}