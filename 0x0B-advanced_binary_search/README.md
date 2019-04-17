# 0x0B. Advanced Binary Search

<p align="center"><img src="bePceUMnSG-binary_search_gif.gif" height="400px" /></p>

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

```
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-advanced_binary.c -o 0-advanced_binary
```

## Usage

Run the program using

```
./0-advanced_binary
```
