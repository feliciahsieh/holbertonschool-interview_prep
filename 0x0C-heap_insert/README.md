# 0x0C. Heap Insert

<p align="center"><img src="MaxHeap.png" height="400px" /></p>

## Welcome
Variation on binary search tree so that the first occurrence of a value is found. The program returns the index of the value in a sorted array of integers.

## Algorithm

* Using left, right, and calculated mid index, search in smaller subarrays using Divide and Conquer recursion.
* Once the value is found, search in a left subarray for the first occurrence of the value.
* Time Complexity: O(log(n))

## Table of Contents
* [Requirements](#requirements)
* [Installation](#installation)
* [Usage](#usage)

## Requirements
* Ubuntu 14.04 LTS
* gcc 4.8.4 (-Wall, -Werror, -Wextra, and -pedantic flags)
* Betty, C linter

## Installation
In your terminal, git clone the directory with the following command:
```
git clone https://github.com/feliciahsieh/holbertonschool-interview_prep
cd 0x0B-advanced_binary_search
```

Compile the files using:

-For Create Binary Heap Node
```
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
```

-For Insert into Binary Heap Tree
```
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 1-main.c 1-heap_insert.c 0-binary_tree_node.c -o 1-heap_insert
```

## Usage

Run the program using

```
./0-node
```

```
./1-heap_insert
```
