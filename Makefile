CXX=clang++
# CXX=g++

# We have -Wno-unused-parameter so that the compiler
# doesn't complain too much about our stubs.

#CXXFLAGS = -std=c++17 -Wall -Wextra -Wno-unused-parameter -Wno-unused-private-field

# Change to this before final submission:

CXXFLAGS = -std=c++17 -Wall -Wextra -Werror

BINARIES=lab06Test

all: ${BINARIES}

lab06Test: lab06Test.o WordCount.o tddFuncs.o
	${CXX} $^ -o $@

lab06Test.o: lab06Test.cpp WordCount.h tddFuncs.h
	${CXX} ${CXXFLAGS} -c lab06Test.cpp

WordCount.o: WordCount.cpp WordCount.h
	${CXX} ${CXXFLAGS} -c WordCount.cpp

tddFuncs.o: tddFuncs.cpp tddFuncs.h
	${CXX} ${CXXFLAGS} -c tddFuncs.cpp

tests: ${BINARIES}
	./lab06Test

clean:
	/bin/rm -f ${BINARIES} *.o
