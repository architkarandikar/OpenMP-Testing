Problem Statement :

	Given a sequence A of length n, find the length of its longest increasing subsequence.

Input Format :

	n
	A[1] A[2] .... A[n]

CPP files :

	liss.cpp : No use of OpenMP.
	liss_par1.cpp : Parallel region inside outer loop. Use of critical.
	liss_par2.cpp : Parallel region outside outer loop. Use of critical.
	liss_par3.cpp : Parallel region inside outer loop. Use of ordered.

Other files :
	
	0.in : Small Input File
	a0.in, a1.in : Large Input Files
	tgen.cpp : Large Input File generator
	MersenneTwister.h : Used for random number generation.

Real Times :

	liss.cpp :: a0.in : 0.259 sec :: a1.in : 0.258sec
	liss_par1.cpp :: a0.in : 15.758 sec :: a1.in : 15.175 sec
	liss_par2.cpp :: a0.in : 15.643 sec :: a1.in : 15.566 sec
	liss_par3.cpp :: a0.in : 0.930 sec :: a1.in : 0.950 sec

Notes :
	
	In absence of both critical and ordered, wrong answer is produced. (Synchronization errors)
	Atleast in this case, ordered is MUCH better than critical.
	Atleast in this case, both ordered and critical are worse than normal code (without parallelization).
