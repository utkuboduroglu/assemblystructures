CC=clang
CCPP=clang++
CONLYFLAGS=-std=c17
CPPONLYFLAGS=-std=c++17 -Weffc++
CFLAGS=-Wall -Wextra -Wpedantic -pedantic-errors -O2 -g

xc.%: %.c
	$(CC) $(CONLYFLAGS) $(CFLAGS) $< -o $@

xcpp.%: %.cpp
	$(CCPP) $(CPPONLYFLAGS) $(CFLAGS) $< -o $@

clean:
	rm -vf ./xc.* ./xcpp.* ./xrs.*
