CC=clang
CFLAGS=-Wall -Wextra -Werror -std=c11 -g

xc.%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f ./xc.*
	rm -f ./xcpp.*
	rm -f ./xrs.*
