#include"ConcreteSubjectA.h"

void ConceteSubjectA::setValue(int v)
{
    value=v;
    if(value%3==0)
    {
        Notify();
    }
}