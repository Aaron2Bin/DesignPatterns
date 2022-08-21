#include"AbstractSubject.h"

void AbstractSubject::RegObserver(AbstractObserver* obs)
{
    observers.push_back(obs);
}

void AbstractSubject::Notify()
{
    for(list<AbstractObserver*>::iterator it=observers.begin();it!=observers.end();it++)
    {
        (*it)->Update();
    }
}