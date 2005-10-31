TESTER_GEN=$(TESTER_HOME)/cxxtestgen.pl
TEST_CASES=./t/*.h
INC+= -I$(TESTER_HOME) -I./

test:
	$(TESTER_GEN) --error-printer -o runner.cpp $(TEST_CASES)
	$(CPP) $(INC) -o runner runner.cpp $(SOURCES).cpp
	./runner