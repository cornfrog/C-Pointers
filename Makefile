all:
	@gcc pointers.c -o pointers
	@mv pointers bin/
	@echo MAKE SUCCESS - use \'make run\' to run program

run:
	@./bin/pointers

clean:
	@rm bin/pointers
	@echo CLEAN SUCCESS - use \'make\' to create again
