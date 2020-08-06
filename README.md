# assemblystructures - a collection of common data structures & algorithms written in C/C++/Rust
I plan on first creating the programs in C, but if it is possible, I later plan to create them in C++ and Rust.

I plan to follow the following content:
* https://goalkicker.com/AlgorithmsBook/
* https://www.jaist.ac.jp/~uehara/course/2018/myanmar/
* Introduction to Algorithms, CLRS
* https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-006-introduction-to-algorithms-spring-2008/

## host machine architecture
    $ uname -srm
    Linux 5.7.9-1-MANJARO x86_64
    $ clang -v 2>&1 | head -n3
    clang version 10.0.0
    Target: x86_64-pc-linux-gnu
    Thread model: posix
    $ lscpu | grep \
        -e "Byte Order" -e "^CPU(s)" -e "^CPU MHz"
    Byte Order:                      Little Endian
    CPU(s):                          4
    CPU MHz:                         1726.180

## table of contents
0. conditionals & loops [basics.c]
0. taking in input (argv, stdin, FILE*, streams, mmap) [inputs.c]
1. insertion sort (page 39, CLRS) [insertionsort.c]
