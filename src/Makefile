CC=clang
CFLAGS=-Wall -Wextra -Werror -std=c17 -g

xc.%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -vf ./xc.* ./xcpp.* ./xrs.*
