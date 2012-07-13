Problem Statement :

	http://www.codeforces.com/contest/192/problem/C

CPP files :

	dp.cpp : Original Solution. No use of OpenMP.
	dp_par1.cpp : First for (range 500000) parallelized (Use of ordered).
	dp_par2.cpp : First for (range 500000) parallelized (Use of ordered). Second for (range 26) parallelized.
	dp_par3.cpp : Second for (range 26) parallelized.

Other Files :

	0.in, 1.in, 2.in : Small input files.
	a0.in, a1.in : Large input files.
	tgen.cpp : Large input file generator.
	MersenneTwister.h : Used for random number generation.

Real times :

	dp.cpp :: a0.in : 0.107 sec :: a1.in : 0.106 sec
	dp_par1.cpp :: a0.in : 0.148 sec :: a1.in : 0.148 sec
	dp_par2.cpp :: a0.in : 0.124 sec :: a1.in : 0.114 sec
	dp_par3.cpp :: a0.in : 0.082 sec :: a1.in : 0.081 sec

Why parallelization seems to have increased real time in cases 1 and 2?

	Parallelizing of the first for (range 500000) is ordered.
