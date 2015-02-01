LIBS = -lSDL -lSDL_image
CFLAGS = -Wall 
INC = 
CC = gcc $(INC)
SRC = $(shell /bin/ls -1 *.c 2>/dev/null)
BIN = $(SRC:.c=)
BINPATH = .
all: $(SRC) $(BIN)

debug: CC += -DDEBUG -g
debug: DEBUG = debug
debug: $(SRC) $(BIN)

.c:
ifneq ($(MAKECMDGOALS),debug)
	@printf "[B]    %-20s ... " "$<"
	@$(CC) -o $(BINPATH)/$@ $< $(CFLAGS) $(LIBS) && echo "OK" || echo "FAIL"
else
	$(CC)  -o $(BINPATH)/$@ $< $(CFLAGS) $(LIBS) 
endif

clean:
	@rm -f .*.sw[op] *.swp *.save* *~ *.o $(BINPATH)/$(BIN) core
