.DEFAULT_GOAL = help

.PHONY: all
# Executes all testcases
all: 
	$(MAKE) -C . clean prog1 prog2

.PHONY: prog1
# Compila programa 1
prog1: ex1.o
	gcc $^ -o $@

ex1.o: ex1.c
	gcc -c $< -o $@

.PHONY: prog2
# Compila programa 2
prog2: ex2.o
	gcc $^ -o $@

ex2.o: ex2.c
	gcc -c $< -o $@

.PHONY: clean
# Clean build files
clean:
	rm -f *.o *.a prog1 prog2

.PHONY: help
# Show this help (default option)
help:
	@echo
	@echo "make *opcao*"
	@echo
	@echo "  OPCOES:"
	@echo
	@egrep "^[a-zA-Z0-9]*:" makefile -B 1 | grep "^#.*" -A1 | sed -n '$!N; s/^#\(.*\)\n\(^[[:alnum:]]*:\).*/    \2 \1/;P;D' - | sed "/--/d" | column -t -s ':'
	@echo
