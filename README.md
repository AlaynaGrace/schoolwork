# Project 1: Introduction to xv6
## What I Did
The easiest way to get started was to follow the "copy getpid" tip. I found all files that contained "getpid" and made sure to add "getsyscallinfo" to that file as well. This was mainly to make sure I had referenced my new function in all the appropriate places. Next, I had to actually make the function, which just returns the value of the "sysCallCount" variable. To actually increment this variable, I instantiated it in "trap.c" and increment it right before the "syscall()" line in the "trap()" function. This guarantees that I am counting all system calls.

For testing, I added a "testing.c" file with a basic printf statement that printed out the function. To make sure that I could run the testing code in the qemu environment, I also added a "_testing" bit to the UPROGS section in the Makefile. I was able to test that it worked by running "make" and "make qemu" in my VM and "testing" in the qemu environment.

