# 0x04. 2048 (single line)

## Welcome
An implementation of the [2048 game](https://play2048.co/)
(Doesn't work yet)

# Algorithm

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
cd 0x04-slide_line
```

Compile the files using:

```
gcc -Wall -Wextra -Werror -pedantic -o 0-slide_line 0-main.c 0-slide_line.c
```

## Usage

Run the program using

```
./0-slide_line [R | L] d, d, d, d, ...

where
R = Slide Right
L = Slide Left
d = powers of 2, starting with 2, 4, 8, 16, etc
```
