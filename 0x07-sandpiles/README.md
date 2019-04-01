# 0x07. Sandpiles

```
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-sandpiles.c -o 0-sandpiles
```

## Welcome

An implementation of Abelian Sandpiles, a Fractal-based identity matrix.
"The model is a cellular automaton. In its original formulation, each site on a finite grid has an associated value that corresponds to the slope of the pile. This slope builds up as "grains of sand" (or "chips") are randomly placed onto the pile, until the slope exceeds a specific threshold value at which time that site collapses transferring sand into the adjacent sites, increasing their slope."

Here's a description of [Abelian Sand Piles](https://en.wikipedia.org/wiki/Abelian_sandpile_model)
Watch this [Sand Pile video](https://www.youtube.com/watch?v=1MtEUErz7Gg)

# Algorithm

* This program adds two 3x3 grids, with no cell allowed to exceed 4. When a cell is exceeded, the values are spread evenly to neighboring cells.

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
cd 0x07-sandpiles
```

Compile the files using:

```
gcc -Wall -Wextra -Werror -pedantic 1-main.c 0-sandpiles.c -o 0-sandpiles
```

## Usage

Run the program using

```
./0-sandpiles
```