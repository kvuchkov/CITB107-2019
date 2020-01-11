# Lab 13 - Arrays
In this lab we explore the basic use of arrays in C++.

Arrays are similar to vectors in the sense that they store a sequence of elements. Here is a comparison between vectors and arrays:

|Aspect|Vector|Array|
|-|-|-|
|Collection of elements|Yes|Yes|
|Kept sequentially in memory|Yes|Yes|
|Random access by index `[i]`, indexed from zero|Yes|Yes|
|Mutable|Yes|Yes|
|Size|Yes|No*|
|Capacity|Yes|No**|
|Append|Yes|No|
|Insert|Yes|No|
|Erase|Yes|No|
|Resize|Yes|No|
|Iteration (e.g. `for(auto item : v)`)| Yes| No

*\* When using arrays, you need to pass the size around in a separate variable.*

*\*\* You can use only part of the actual physical size of the array and have *spare capacity* similarly to vectors. However, you need to keep track of both as separate variables and pass them around.*

There are many other aspects where vectors are easier to use. Arrays are a low-level primitive, mostly used when you need direct control. 

## Exercise 1
Write a program that reads `n` integers and outputs their sum to the standard output. Note `n` will be at least 1 and __not__ greater than 10,000. 

Implement the calculation in a function sum that takes an array and its size as parameters and returns a single integer - the sum of the elements in the array.

### 1.1 Unknown size of input  
Allocate a static array with the maximum size of `n`. Read the numbers until the end of the standard input stream (i.e. `stdin`).

### 1.2. Known size of input
First, read an integer `n` -  the number of integers that will follow. Allocate a dynamic array with the size of `n` and then read exactly `n` numbers from the standard input stream (i.e. `stdin`).

## Exercise 2
Write a program that manages _friendships_. The program reads commands from `stdin` until the end of the stream and supports the following commands:
* `f 2 6` - set people with IDs `1` and `2` as friends.
* `c 9 3` - check if people with IDs `9` and `3` are friends, should output `yes` or `no` on __stdout__.

Store the friendships in a matrix (i.e. 2-dimensional array), e.g. if 4 and 6 are friends, then set `1` on cell (4,6). When checking for friendship, check the value stored in the matrix for those IDs.

*\* The IDs of people are smaller than 1,000.*
