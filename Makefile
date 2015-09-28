app: key.o main.cc
	g++ -std=c++11 key.o main.cc -o key

key.o: key.cc
	g++ -std=c++11 -c key.cc

clean:
	rm -fr *.o key

