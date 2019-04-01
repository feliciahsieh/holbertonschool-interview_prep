# 0x09. Heap Sort

## Welcome
An implementation of Heap Sort with MaxHeap. Heap sort uses a complete, balanced node.
Algorithm

-Build Max Heap with Largest Value as Parent Node.
 Use middle element as initial root because half nodes above and below it.
 (Tree Root is leftmost element).

-Repeat
   Swap Tree Root with last Leaf. Now largest number is at leaf and will be omitted in further calculations. Tree is on the leftside of array. Sorted nodes are on the rightside of array.
   Rebuild MaxHeap, making sure parent is largest of children nodes.


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
cd 0x09-heap_sort
```

Compile the files using:

```
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-heap_sort.c print_array.c -o 0-heap
```

## Usage

Run the program using

```
./0-heap
```
