Problem Statement :

	Input two multipliable matrices, P and Q. (Both atmost 500*500.)
	Output their product.

Input Format :

	l m n

	P[1][1] P[1][2] ..... P[1][m]
	P[2][1] P[2][2] ..... P[2][m]
	.
	.
	.
	.
	P[l][1] P[l][2] ..... P[l][m]

	Q[1][1] Q[1][2] ..... Q[1][n]
	Q[2][1] Q[2][2] ..... Q[2][n]
	.
	.
	.
	.
	Q[m][1] Q[m][2] ..... Q[m][n]

CPP files :

	mm.cpp : No use of OpenMP.
	mm_par1.cpp : For used to multiply matrices parallelized.

Other files :

	0.in : Small Input File
	a0.in, a1.in : Large Input Files
	tgen.cpp : Large Input File generator
	a0.out, a1.out : Expected Output Files
	MersenneTwister.h : Used for random number generation.

Real Times :
	
	mm.cpp :: a0.in : 0.368 sec :: a1.in : 0.359 sec
	mm_par1.cpp :: a0.in : 0.230 sec :: a1.in : 0.228 sec
