#ifndef __OBSERVER_CONCETESUBJECTB_H_
#define __OBSERVER_CONCETESUBJECTB_H_
#include"AbstractSubject.h"
class ConceteSubjectB:public AbstractSubject
{
public:
    void setValue(int v);
private:
    int value;
};

#endif /* __OBSERVER_CONCETESUBJECTB_H_ */
