PROJECT_NAME = IRCTC
TEST_NAME=TEST_$(PROJECT_NAME)
FILE_LIST = SRC/Authentication.c SRC/BookedTickets.c SRC/Cancellation.c SRC/PrintTicket.c SRC/Reserve.c SRC/TicketDatabaseDisplay.c SRC/TicketSearch.c SRC/TrainDetailsList.c SRC/TrainList.c unity/unity.c 
TEST_CASE= Test/test.c unity/unity.c
COVERAGE_NAME=coverage_$(PROJECT_NAME)

ifdef OS
	RM = del /q
	FixPath=$(subst /,\,$1)
	EXEC=exe
	editor=notepad
else
	ifeq ($(shell uname), Linux)
		RM=rm -rf
		FixPath=$1
			EXEC=out
			editor=cat
	endif
endif


.PHONY : all test coverage run clean doc

$(PROJECT_NAME) : $(SRC) 
	gcc SRC/Main.c  -I -c $(FILE_LIST) -o $(call  FixPath,$(PROJECT_NAME).$(EXEC))
run: $(PROJECT_NAME)
	./$(PROJECT_NAME).$(EXEC)
test:
	gcc Test/test.c -I -c unity/unity.c -o Test/$(TEST_NAME).$(EXEC)
	./Test/$(TEST_NAME).$(EXEC)
coverage:$(SRC)
		gcc -fprofile-arcs -ftest-coverage SRC/Main.c -I -c $(FILE_LIST) -o $(COVERAGE_NAME).$(EXEC)
		./$(COVERAGE_NAME).$(EXEC)
		gcov -a Main.c
		$(editor) Main.c.gcov

clean:
	$(RM) *.$(EXEC)
	$(RM) *.gcn
	$(RM) *.gcov
	$(RM) *.gcda
	$(RM) *.gcno

