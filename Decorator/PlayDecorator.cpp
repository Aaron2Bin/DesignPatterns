#include"PlayDecorator.h"
#include<iostream>
using std::cout;
using std::endl;

PlayDecorator::PlayDecorator(AbstractComponent* p):AbstractDecorator(p)
{

}

void PlayDecorator::Operation()
{
    parent->Operation();
    cout<<"I like Play Basketball!!!"<<endl;
}