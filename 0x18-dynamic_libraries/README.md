0x18. C - Dynamic libraries
dynamic libaries are files containing reusable code and data that multiple programs ca use simultaneously
Creating dynamic libraries
1. use 'gcc' compiler with '-shared' option
example:
	gcc -shared -o (name of file e.g liby.so) objectfilec.c
2. use 'gcc' with '-c' option
example:
	gcc -c -fPIC *&.c
