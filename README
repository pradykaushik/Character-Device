
TEAMMATES DETAILS:
--------------------------------------------------------------------------------------------------------------------------------------------------------------------

1. NAME : ABHISHEK JAIN
2. Name : PRADYUMNA KAUSHIK
____________________________________________________________________________________________________________________________________________________________________

FILES INCLUDED IN THE TARBALL (excluding README):
	
	1. Kernel-module code :  my_device_driver.c
					- Character device.

	2. User-space code    :  my_producer.c
					- User-space code to infinitely write string (take from command line) to the character device.
				
				 my_consumer.c
					- User-space code to infinitely read string (length taken from command line) from the character device.
	
	
	3. Compilation files  :  Makefile
					- Compiles Kernel-module code and the User-space code.
____________________________________________________________________________________________________________________________________________________________________

KERNEL VERSION USED : 
	
	LINUX KERNEL 4.4.3

____________________________________________________________________________________________________________________________________________________________________

COMPILATION AND EXECUTION INSTRUCTIONS:
	1. Compilation : Type the following command,
				
				make

				-ignoring the warnings
		
	2. Inserting module : Type the following command,
		
				sudo insmod my_device_driver.ko buffer_size=<size> device_name=my_misc_device string_char_count=<length of string>
	
				-buffer_size : size (number of strings) of buffer.
				-device_name : name of character device.
				-string_char_count : length of string in buffer.
	
	3. Execute producer and consumer : Type the following commands on as many different terminals as needed,
				
				sudo ./my_producer.o <string> <length of string>
				sudo ./my_consumer.o <number of characters to read>

	4. To stop execution : Type <Ctrl-C>

	5. Remove module : Type the following command,

				sudo rmmod my_device_driver

____________________________________________________________________________________________________________________________________________________________________

REFERENCES :
	
	1. https://www.google.com/search?q=module_param&oq=module_param+&aqs=chrome..69i57j69i59j0l4.5935j0j7&sourceid=chrome&es_sm=122&ie=UTF-8
	
	2. http://www.tldp.org/LDP/lkmpg/2.6/html/x323.html

	3. http://www.makelinux.net/ldd3/chp-2-sect-8

	4. http://www.makelinux.net/books/lkd2/ch16lev1sec6

	5. https://www.fsl.cs.sunysb.edu/kernel-api/re256.html

	6. https://www.fsl.cs.sunysb.edu/kernel-api/ch05s03.html

	7. http://stackoverflow.com/questions/23433936/return-value-of-copy-from-user

	8. http://www.makelinux.net/ldd3/chp-5-sect-3

	9. http://lxr.free-electrons.com/ident?i=down_interruptible

	10. http://comments.gmane.org/gmane.linux.kernel.kernelnewbies/45479

	11. http://stackoverflow.com/questions/13291353/iso-c90-forbids-mixed-declarations-and-code-in-c

	12. http://stackoverflow.com/questions/26678924/why-is-there-an-incompatible-pointer-type-warning

	13. https://www.freebsd.org/cgi/man.cgi?query=kthread&sektion=9

	14. http://www.thegeekstuff.com/2012/05/c-mutex-examples/

	15. http://stackoverflow.com/questions/5558921/concurrency-a-monitor-that-implements-semaphores

	16. http://www.thegeekstuff.com/2013/07/write-linux-kernel-module/

	17. http://www.nxp.com/files/32bit/doc/app_note/AN2744.pdf?fsrch=1

	18. http://tuxthink.blogspot.com/2011/02/kernel-thread-creation-1.html

	19. http://stackoverflow.com/questions/5280693/kernel-thread-implementation

	20. http://stackoverflow.com/questions/27581747/pthread-vs-kthread-in-linux-kernel-v2-6

	21. http://forums.fedoraforum.org/showthread.php?t=157804

	22. http://www.makelinux.net/books/lkd2/ch16lev1sec6

	23. http://www.tldp.org/LDP/lkmpg/2.6/html/x323.html

	24. https://www.google.com/search?q=module_param+for+char*&oq=module_param+for+char*&aqs=chrome..69i57j0l3.4174j0j7&sourceid=chrome&es_sm=122&ie=UTF-8

	25. http://www.makelinux.net/books/lkd2/ch18lev1sec3

	26. https://www.kernel.org/doc/htmldocs/kernel-api/API-misc-register.html

	27. http://www.cs.binghamton.edu/~kartik/cs550/slides/kernel_modules.pdf
	
	28. http://www.cs.binghamton.edu/~kartik/cs550/hw3.html
____________________________________________________________________________________________________________________________________________________________________
