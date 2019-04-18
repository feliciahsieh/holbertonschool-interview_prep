#!/usr/bin/python3
""" 0-nqueens.py - n-queens problem - uses backtracking to solve.
Placing N non-attacking queens on an N×N chessboard.
Chessboard is N x N in size
"""
import sys


if len(sys.argv) != 2:
    print("Usage: nqueens N")
    exit(1)

try:
    n = int(sys.argv[1])
except ValueError:
    print("N must be a number")
    exit(1)

if n < 4:
    print("N must be at least 4")
    exit(1)

result = []
# c = r - set(grid[:, col])
