#!/usr/bin/python3
""" 0-nqueens.py - n-queens problem - uses backtracking to solve.
Placing N non-attacking queens on an N×N chessboard.
Chessboard is N x N in size
"""

import sys

if len(sys.argv) != 2:
    print("Usage: nqueens N")
    exit(1)
if type(int(sys.argv[1])) is not int:
    print("N must be a number")
    exit(1)
if int(sys.argv[1]) < 4:
    print("N must be at least 4")
    exit(1)
