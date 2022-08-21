#ifndef __TEMPLATE_20METHOD_CONCRETETEMPLATECLASS_H_
#define __TEMPLATE_20METHOD_CONCRETETEMPLATECLASS_H_
#include "TemplateMethodClass.h"

class ConcreteClass:public TemplateClass
{
public:
    ConcreteClass(){}
    virtual ~ConcreteClass(){}
    virtual void step2();
    virtual void step4();

};

#endif /* __TEMPLATE_20METHOD_CONCRETETEMPLATECLASS_H_ */
