main: Context.o ConcreteA.o ConcreteB.o
	g++ Application.cpp -o test.exe Context.o ConcreteA.o ConcreteB.o

Context.o:
	g++ -c Context.cpp

ConcreteA.o:
	g++ -c ConcreteStrategyA.cpp -o ConcreteA.o

ConcreteB.o:
	g++ -c ConcreteStrategyB.cpp -o ConcreteB.o