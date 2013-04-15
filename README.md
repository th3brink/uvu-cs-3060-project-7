uvu-cs-3060-project-7
=====================

Threads and Mutex


  1. Part A: Your program should create the four threads, as directed above. After starting all of the threads, your program should print out the value of count and then terminate. Do not wait for the threads to finish.

	2. Part B: Your program should create the four threads, as directed above. After starting all of the threads, insert the code required to wait for each of the threads to finish. Then print out the value of count.

	3. Part C: This code will be exactly like the code for part B, with one exception. In this program, you should remove, or comment out, the line of code in the thread function
   sleep(1);
    As in part B, When all of the threads have terminated, your main() will print out the value of count.

	4. Part D: In this part, use a mutex to make the program work correctly. The final value of count should be 40, and you should make sure that there aren't any race conditions. Put the call to sleep back in incrementCounter.


