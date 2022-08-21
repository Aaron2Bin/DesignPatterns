#include"TemplateMethodClass.h"
#include<iostream>

void TemplateClass::Run()
{
    step1();
    step2();
    step3();
    step4();
}

void TemplateClass::step1()
{
    std::cout<<"enter step1"<<std::endl;
    std::cout<<"..."<<std::endl;
    std::cout<<"leave step1"<<std::endl;
    std::cout<<std::endl;
}

void TemplateClass::step3()
{
    std::cout<<"enter step3"<<std::endl;
    std::cout<<"..."<<std::endl;
    std::cout<<"leave step3"<<std::endl;
    std::cout<<std::endl;
}