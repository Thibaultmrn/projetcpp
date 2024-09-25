#include "Event.h"
Event::Event()
{
  cout << ">>> Event : constructeur par defaut <<<" << endl;
  code = 1;
  title = nullptr
  setTitle("---");
}

 Event(const Event &e)
 {
  cout << ">>> Event : constructeur de copie <<<" << endl;
  setcode (e.getcode());
  title = nullptr
  setTitle(e.getTitle());
 }
Event::Event(int c, cons char *t) 
{
  cout << ">>> Event : constructeur d'initialisation <<<" << endl;
  setcode (c);
  title = nullptr
  setTitle(t);
}
Event::~Event()
{
  cout << ">>> Event : destructeur <<<" << endl;
  if (title) delete title;
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
//
//
//
int Event::getCode() const
{
  return code;
}
const char * Event::getTitle() const
{
  return title;
}
//
//METHODE D'INSTANCE
//
void Event::display() const
{
  count << "Event("<< code <<") : "<<title<<endl;
}