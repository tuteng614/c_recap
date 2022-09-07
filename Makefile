########################################################################
####################### Makefile Template ##############################
########################################################################

# Compiler settings - Can be customized.
CC = gcc
CFLAGS = -Wall -g -std=gnu99
LDFLAGS = 

# Makefile settings - Can be customized.
APPNAME = basics arrays

OBJFILES = basics.o

all: $(APPNAME)

# # Builds the app
# $(APPNAME): $(OBJFILES)
# 	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

# # Building rule for .o files and its .c
# %.o: %.c
# 	$(CC) $(CFLAGS) -c $< -o $@

# # Cleans complete project
# .PHONY: clean
# clean:
# 	rm $(APPNAME) *.o

%: %.c
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

# Cleans executables
.PHONY: cleanex
clean:
	rm $(APPNAME)
