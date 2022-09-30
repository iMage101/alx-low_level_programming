#!/bin/bash
<<<<<<< HEAD

gcc -c *.c

ar -rc liball.a *.o

=======
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar rc liball.a *.o
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
