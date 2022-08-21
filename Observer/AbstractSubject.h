#ifndef __OBSERVER_ABSTRACTSUBJECT_H_
#define __OBSERVER_ABSTRACTSUBJECT_H_
#include"AbstractObserver.h"
#include<list>
using namespace std;

class AbstractSubject
{
    public:
    void RegObserver(AbstractObserver* obs);
    void Notify();
    private:
    list<AbstractObserver*> observers;
};

#endif /* __OBSERVER_ABSTRACTSUBJECT_H_ */
