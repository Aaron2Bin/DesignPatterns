#include"EatDecorator.h"
#include<iostream>
using std::cout;
using std::endl;

EatDecorator::EatDecorator(AbstractComponent* p):AbstractDecorator(p)
{

}

void EatDecorator::Operation()
{
    this->parent->Operation();
    cout<<"I like sizzling meat."<<endl;
}