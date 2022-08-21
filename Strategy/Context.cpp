#include"Context.h"
#include<iostream>
using namespace std;
Context::Context(AbstractStrategy* strategy_):strategy(strategy_)
{

}

void Context::Run()
{
    if(strategy==nullptr)
    {
        cout<<"the strategy ptr is null!!!"<<endl;
    }
    else{
        strategy->Run();
    }
}