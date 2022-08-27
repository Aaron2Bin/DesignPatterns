#ifndef __DECORATOR_EATDECORATOR_H_
#define __DECORATOR_EATDECORATOR_H_
#include"AbstractDecorator.h"
#include"AbstractComponent.h"
class EatDecorator:public AbstractDecorator
{
    public:
    EatDecorator(AbstractComponent *p);
    void Operation();
};

#endif /* __DECORATOR_EATDECORATOR_H_ */
