About
=====

I got sick of not knowing where the source code to
[DBM](https://en.wikipedia.org/wiki/Trivial_Database) was so I found it in some
archive, modified it a little bit and threw it in here.

This repository is slightly different in that I've updated to code to compile
and run on my modern linux box.

Compilation
===========

```Bash
make
````

This will compile both `libdbm.so` and the `example` binary. You can test out
the example with:

```Bash
LD_LIBRARY_PATH=./ ./example
````
