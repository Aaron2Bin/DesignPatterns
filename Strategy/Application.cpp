#include"ConcreteStrategyA.h"
#include"ConcreteStrategyB.h"
#include"Context.h"
#include<iostream>
using namespace std;


int main()
{
    int choose=0;
    cin>>choose;
    AbstractStrategy* obj;
    if(choose==0)
    {
        obj = new ConcreteStrategyA();
    }
    else
    {
        obj = new ConcreteStrategyB();
    }
    Context context(obj);
    context.Run();
    return 0;
}