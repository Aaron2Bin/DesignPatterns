#ifndef __DECORATOR_PLAYDECORATOR_H_
#define __DECORATOR_PLAYDECORATOR_H_
#include"AbstractDecorator.h"
#include"AbstractComponent.h"

class PlayDecorator:public AbstractDecorator
{
    public:
    PlayDecorator(AbstractComponent* parent);
    void Operation();
};

#endif /* __DECORATOR_PLAYDECORATOR_H_ */
