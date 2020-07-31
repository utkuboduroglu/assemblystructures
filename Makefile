CC=clang
CFLAGS=-Wall -Wextra -Werror -std=c11 -g

x.%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f ./x.*

markdown: README.md
	markdown README.md > README.html
