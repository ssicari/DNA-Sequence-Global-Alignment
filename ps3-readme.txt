/**********************************************************************
 *  readme 
 *  DNA Sequence Alignment
 **********************************************************************/

//Copyright (C) 2021 Sal Sicari
Name:Sal Sicari

Hours to complete assignment:12

/**********************************************************************
 * Explain which approach you decided to use when implementing
 * (either recursive with memoization, recursive without memoization,
 * dynamic programming or Hirschberg�s algorithm). Also describe why
 * you chose this approach and what its pros and cons are.
 **********************************************************************/
I chose to use dynamic programming. I chose this approach because the process seemed the most efficient and made the most sense to me. It is well suited for multi level design processes like the matrix I made.Some cons are it consumes memory and resources dividing problems into sub problems.




/**********************************************************************
 * Does your code work correctly with the endgaps7.txt test file? 
 * 
 * This example should require you to insert a gap at the beginning
 * of the Y string and the end of the X string.
 **********************************************************************/
Input: atattat // tattata

Expected output: 1 1 1 0 1 0 1 i think this is it i didnt check for gaps i just did this in my head for matches and mismatches 

What happened:There was a gap at the beginning and one at the end so it shifted the string down and caused them to match printing 20000000



/**********************************************************************
 * Look at your computer�s specs in the settings. 
 * How much RAM does your computer have and explain what this means? 
 **********************************************************************/
I have 16gb of RAM. RAM stands for random access memory and the data stored in there can be accessed almost instantly. It has a a fast path connected to the CPU as well. The more RAM the more tasks your computer can do without slowing down or swapping the data to
a disk. RAM reads and writes needed info to a disk or harddrive in what is called virtual memory, the more RAM the less swapping the faster your computer can go and the more it can handle. 


/**********************************************************************
 *  For this question assume M=N. Look at your code and determine
 *  approximately how much memory it uses in bytes, as a function of 
 *  N. Give an answer of the form a * N^b for some constants a 
 *  and b, where b is an integer. Note chars are 2 bytes long, and 
 *  ints are 4 bytes long.
 *
 *  Provide a brief explanation.
 *
 *  What is the largest N that your program can handle if it is
 *  limited to 8GB (billion bytes) of memory?
 **********************************************************************/
a = 4
b = 2
largest N = 4*N^2 = 8billion = N approximately 44721


/**********************************************************************
 *  For each data file, fill in the edit distance computed by your
 *  program and the amount of time it takes to compute it.
 *
 *  If you get segmentation fault when allocating memory for the last
 *  two test cases (N=20000 and N=28284), note this, and skip filling
 *  out the last rows of the table.
 **********************************************************************/

data file           distance       time (seconds)     memory (MB)
------------------------------------------------------------------
ecoli2500.txt		118 		0.128	
ecoli5000.txt		160 		0.506
ecoli7000.txt		194 		0.996
ecoli10000.txt		223 		3.207
ecoli20000.txt 		3135 			8.352 -o flag dependent -o3 was much faster than -o2
ecoli28284.txt 		8394			16.996

/*************************************************************************
 *  Here are sample outputs from a run on a different machine for 
 *  comparison.
 ************************************************************************/

data file           distance       time (seconds)
-------------------------------------------------
ecoli2500.txt          118             0.171
ecoli5000.txt          160             0.529
ecoli7000.txt          194             0.990
ecoli10000.txt         223             1.972
ecoli20000.txt         3135            7.730


**********************************************************************
 *  Did you use the lambda expression in your assignment? If yes, where 
 * (describe a method or provide a lines numbers)
 **********************************************************************/
Yes auto penalty = [](char a, char b)->int{ return {a != b ? 1 : 0}; };
Line 46 in EditDistance.cpp



