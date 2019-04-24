# 0x0C. Heap Insert

<p align="center"><img src="MaxHeap.png" height="400px" /></p>

## Welcome

An efficient data structure for sorted data is a (Binary Heap)[https://en.wikipedia.org/wiki/Binary_heap] tree. This program creates a binary max heap tree (using a doubly-linked list) and inserts elements. (No deletion or search was implemented)

Big O Notation
Inserting into a binary heap tree is Best Case	O(1) or Worst Case O(log n)
Insertion is performed in-place.

## Algorithm
-Creates a new binary heap tree if root is NULL. A pointer to the new node is returned or NULL upon failure.
-Inserts a new node at the leaf of the tree. To find the leaf of the tree, a queue was necessary. A simple, rolling queue was implemented (The queue doesn't start at index 0 other than the first time).
-After inserting the new node, the node is sorted upward with its parent, aka up-heap operation or bubble-up. Instead of swapping the node if a swap is needed, only the payload is swapped (element n) and not the links.

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
cd 0x0C-heap_insert
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

-For Create Binary Heap Node
```
./0-node
```

-For Insert into Binary Heap Tree
```
./1-heap_insert
```
