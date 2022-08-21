#ifndef __STRATEGY_CONTEXT_H_
#define __STRATEGY_CONTEXT_H_
#include"AbstractStrategy.h"
class Context
{
    public:
    Context(AbstractStrategy* strategy_);
    void Run();
    private:
    AbstractStrategy* strategy;
};

#endif /* __STRATEGY_CONTEXT_H_ */
