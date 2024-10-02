Test2: Test2.o Time.o Timing.o Event.o
	g++ Test2.o Time.o Timing.o Event.o -o Test2

Test2.o: Test2.cpp classe/Time.h
	g++ Test2.cpp -c

Time.o: classe/Time.cpp classe/Time.h
	g++ classe/Time.cpp -c 

Timing.o: classe/Timing.cpp classe/Timing.h
	g++ classe/Timing.cpp -c

Event.o: classe/Event.cpp classe/Event.h classe/Timing.h
	g++ classe/Event.cpp -c