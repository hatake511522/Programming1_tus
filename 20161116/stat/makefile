SRCS	=	Lesson10_02_main.c	summation.c	multiplication.c	mean.c	mean_square.c	variance.c
INCLUDES	=	statistics.h
CC	=	clang
EXE	=	Lesson10_02
OBJS	=	Lesson10_02_main.o summation.o	multiplication.o	mean.o	mean_square.o	variance.o

$(EXE): $(OBJS) $(INCLUDES)
	$(CC) -o $(OBJS) $(INCLUDES)

$(OBJS): $(SRCS)
	$(CC) -c $(SRCS)

Lesson10_02_main.o: Lesson10_02_main.c statistics.h
