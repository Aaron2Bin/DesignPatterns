#ifndef __DECORATOR_ABSTRACTDECORATOR_H_
#define __DECORATOR_ABSTRACTDECORATOR_H_
#include"AbstractComponent.h"
class AbstractDecorator:public AbstractComponent
{
    protected:
    AbstractComponent* parent;
    public:
    AbstractDecorator(AbstractComponent* _parent);

};

#endif /* __DECORATOR_ABSTRACTDECORATOR_H_ */
