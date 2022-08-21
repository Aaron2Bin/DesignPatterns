#ifndef __TEMPLATE_20METHOD_TEMPLATEMETHODCLASS_H_
#define __TEMPLATE_20METHOD_TEMPLATEMETHODCLASS_H_
/**
 * @brief 
 */
class TemplateClass
{
public:
    void Run();
    TemplateClass(){}
    virtual ~TemplateClass(){}

    virtual void step2(){};
    virtual void step4(){};
    void step1();
    void step3();
};

#endif /* __TEMPLATE_20METHOD_TEMPLATEMETHODCLASS_H_ */
