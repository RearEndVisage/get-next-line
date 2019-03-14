# get-next-line
Get Next Line is the second project in the 42 curriculum and the introduction to the concept of static variables. The goal is to create a function that can read line by line from a file (or multiple files if you do the bonus part of the assignment) and with any buffer size.

I chose to use linked lists so as to dynamically allocate the amount of memory needed for however many files are passed instead of using a two dimensional char array of static size. This results in a hit to speed as it has to sort through the list to find the file descriptor when picking up where it left off, however I prefer the versatility compared to the char array approach.

I've also included a main, a makefile, and a simple shell script to generate 5000 files for the purpose of testing in case other cadets want to use it to make the evaluation process easier. If the makefile doesn't work, it won't compile with moulinette either.

# Fun things to try for testing

/.gnl /dev/random

./gnl * libft/* libft/*/* libft/*/*/*

./gnl /dev/null

(after running 5000files.sh) ./gnl test*
