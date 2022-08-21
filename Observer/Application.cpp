#include"ConcreteSubjectA.h"
#include"ConcreteSubjectB.h"
#include"ConcreteObserverA.h"

int main()
{
    AbstractObserver* observer1 = new ConcreteObserverA();
    ConceteSubjectA* subject1 = new ConceteSubjectA();
    ConceteSubjectB* subject2 = new ConceteSubjectB();
    subject1->RegObserver(observer1);
    subject2->RegObserver(observer1);
    for(int i=0;i<20;i++)
    {
        subject1->setValue(i);
        subject2->setValue(i);
    }
}