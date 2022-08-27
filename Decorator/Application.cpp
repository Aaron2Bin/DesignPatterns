#include"ConcreteComponent.h"
#include"PlayDecorator.h"
#include"EatDecorator.h"

int main()
{
    ConcreteComponent* Aaron = new ConcreteComponent();
    PlayDecorator* play = new PlayDecorator(Aaron);
    EatDecorator* eat = new EatDecorator(play);

    eat->Operation();
    return 0;

}
