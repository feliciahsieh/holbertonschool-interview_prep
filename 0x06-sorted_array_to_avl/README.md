# 0x06 - Array to AVL Tree (Adelson-Velsky and Landis)

An AVL tree is a self-balancing tree.
https://en.wikipedia.org/wiki/AVL_tree

```
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-sorted_array_to_avl.c-o 0-sorted_array_to_avl
```

## Welcome

AVL tree with a sorted array defaults to a O(n) if inserted using Divide and Conquer.

# Algorithm

* Build AVL Tree, which is a tree with only successive right children

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
cd 0x06-sorted_array_to_avl
```

Compile the files using:

```
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-sorted_array_to_avl.c -o 0-sorted_array_to_avl
```

## Usage

Run the program using

```
./0-sorted_array_to_avl
```