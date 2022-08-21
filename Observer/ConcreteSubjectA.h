#ifndef __OBSERVER_CONCETESUBJECT_H_
#define __OBSERVER_CONCETESUBJECT_H_
#include"AbstractSubject.h"
class ConceteSubjectA:public AbstractSubject
{
    public:
    void setValue(int v);
    private:
    int value;
};

#endif /* __OBSERVER_CONCETESUBJECT_H_ */
