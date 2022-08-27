main: AbstractDecorator.o ConcreteComponent.o EatDecorator.o PlayDecorator.o 
	g++ Application.cpp -o main.exe AbstractDecorator.o ConcreteComponent.o EatDecorator.o PlayDecorator.o
	-del AbstractDecorator.o ConcreteComponent.o EatDecorator.o PlayDecorator.o

ConcreteComponent.o:
	g++ -c ConcreteComponent.cpp

EatDecorator.o: AbstractDecorator.o
	g++ -c EatDecorator.cpp

PlayDecorator.o: AbstractDecorator.o
	g++ -c PlayDecorator.cpp

AbstractDecorator.o:
	g++ -c AbstractDecorator.cpp

clear:
	-del AbstractDecorator.o ConcreteComponent.o EatDecorator.o PlayDecorator.o
