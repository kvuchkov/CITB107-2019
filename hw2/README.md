# Homework 1
This is the second graded homework for the course.

Read carefully the problem descriptions and consult the example files for input and output format. Follow the format strictly, as the solutions are checked automatically. 

You could also use the provided .sh scripts to test each one of your programs against the sample input/output pair. For example:

Failing test of problem 2 due to empty (different) output of the solution:
```
$ ./test2.sh
  *** COMPILE ***
  ***   RUN   ***
  *** COMPARE ***
0a1,8
> 0
> 1
> 1
> 1
> 2
> 1
> 0
> NOT FOUND
  *** RESULT  ***
  ***************
     * FAIL *
```

Passing test of problem 1:
```
$ ./test1.sh
  *** COMPILE ***
  ***   RUN   ***
  *** COMPARE ***
  *** RESULT  ***
  ***************
    *  PASS   *
```

## Problem 1
Write a program that reads from the standard input a number N and then N integers. Store those integers in a vector. Write a function that accepts the vector as a single input parameter (constant reference) and returns the sum of the minimum and maximum numbers inside. Output the result of the function call to the standard output.

## Problem 2
Write a program that accepts commands until the end of the standard input (CTRL+D) for warehouse management. Each command consists of two parts: a word (string) and a product identifier (integer). The program should support the following commands:
* ```add 12``` - adds 1 unit to product with id 12. If such product does not exists, the program should add 1 element at the end of two parallel  vectors. One vector will be used to store the ids and the other - to store the quantities, e.g. 12 will be added to the first vector and 1 to the end of the second one. If the product exists, the program should find the corresponding element and increase the quantity with 1.
* ```get 8``` - takes 1 unit of product with id 8. If the product exists, find and decrease its quantity by 1. If the quantity becomes 0, remove the corresponding elements from the two vectors. If the product does not exist, output error ```NOT FOUND```.
* ```show 1024``` - outputs the quantity of product with id 1024. If the product does not exist, output 0.
