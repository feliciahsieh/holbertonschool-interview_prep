# 0x05. Menger sponge
gcc -Wall -Wextra -Werror -pedantic -o 0-menger -g 0-menger.c 0-main.c -lm

valgrind

valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes -v ./0-menger 1