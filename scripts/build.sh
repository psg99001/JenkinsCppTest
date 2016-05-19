
g++  -Wall -fexceptions -g -Iinclude -c CalculatorTests.cpp -o obj/Debug/CalculatorTests.o
g++ -Wall -fexceptions -g -Iinclude -c main.cpp -o obj/Debug/main.o
g++ -fprofile-arcs -ftest-coverage -fPIC -O0 -Wall -fexceptions -g -Iinclude -c src/Calculator.cpp -o obj/Debug/src/Calculator.o
g++ -fprofile-arcs -ftest-coverage -fPIC -O0 -Wall -fexceptions -g -Iinclude -c src/CalculatorNew.cpp -o obj/Debug/src/CalculatorNew.o

g++ -fPIC -O0 -Wall -fexceptions -g -Iinclude -c TestMain.cpp -o obj/Debug/TestMain.o
g++  -o bin/Debug/PetersTest obj/Debug/CalculatorTests.o obj/Debug/main.o obj/Debug/src/Calculator.o obj/Debug/src/CalculatorNew.o obj/Debug/TestMain.o   -lcppunit -lgcov --coverage
