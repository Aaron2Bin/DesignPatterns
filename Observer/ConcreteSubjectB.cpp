#include"ConcreteSubjectB.h"

void ConceteSubjectB::setValue(int v)
{
    value = v;
    if(value%7==0)
    {
        Notify();
    }
}