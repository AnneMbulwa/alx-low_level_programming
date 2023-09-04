FILE INPUT / OUTPUT a.k.a file handling
/*standard file descriptors*/
1. standard input(STDIN)
used for reading input from user or from other processes

2. standard putpu(STDOUT)
used for writing normal ouput or data.
display ouput of program

3. standard error(STDERR)
used to write errors messages

/*steps for processing file*/
1. declare file pionter variable
e.g FILE * ptr
2. open file using fopen ()function
3. processing the file using the diffrent modes
4. close the file using fclose () function

/*modes*/
r - read
w - write
a - append

/*functions*/
1. fopen
format fopen("filename", mode)
example: fopen(vale, r)
2. fclose
format	fclose("pointer to file")
3. fprintf
writes something to file (formatted output)
4. fputc
write a character
5. fgetc
gets a character from specified file
6. fgets
get a string
7. fputs
write string to file

/*OFLAGS*/
are parameters used when calling the open system call in programming
includes:
	O_RDONLY - opens read only
	O_WRONLY - write only
	O_RDWR - opens for both read and write
	O_CREAT - create file
	O_TRUNC - truncate the file if it exits
	O_APPEND - appends data to file
	O_EXCL - ensure exculsive access to file
	O_SYNC - write data synchronoosly to disk file

/*file permissions*/
determines who can have access to any file operations such as open, read,
write and execute.
The sets of permissions are:
1. Owner - who creates the file
	permissions: read(r), write(w) and execute(x)
2. Group - group of users to which file belongs
	permissions: similar to owner
3. Others - this excludes the owner or group to while file belong
	they can have all permissions or one

SYSTEM CALL - request send by the program to the kernelto access resources
that help perform priviledged operations like file i/o.
