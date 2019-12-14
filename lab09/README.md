# Lab 9 - Nested Loops and text input
In this lab we explore how to build a more complex program flow using nested loops and read text input from files.

## Exercise 1
Having CSV files (comma separator) for each student, write a program that will calculate the average grade for a given class (e.g. CITB108).
- We can use the parameters of the `main` function to pass information into the program.
    - `argc` is the number of arguments. It will be at least one, b/c the first argument is always the path to the executable file of the program.
    - `argv` is an array of all the command line arguments. Each argument is a string.
    - For example, calling the program as `./1 f12345.csv f54321.csv` will result in `argc=3`, and the arguments will be:
        - `argv[0]` -> `"./1"`
        - `argv[1]` -> `"f12345.csv"`
        - `argv[0]` -> `"f54321.csv"`
- With the `ifstream` class, we can open a file for reading (e.g. `fin`). We can use the file stream similarly to `cin` to read values from it.
- The `getline` function allows us to read a string from an input stream until the end of the line.
    - We can specify a custom `delimiter`, i.e. we will read characters until we reach the delimiter symbol. Then we will also read the delimiter, removing it from the stream.
    - getline will be evaluated to `false` if we reach the end of the stream.
- Using `stringstream`, we can read from a string as we are reading from `cin`.  In the program, we read a whole line and then we would like to read until we reach the end of the line using `while`.
- When we read a number from the stream, the separator `,` will not be read, because it is not part of the number. When we try to read a number again on the next iteration, this will result in an error. To overcome this, we use `getline` with `.` as a delimiter, which will get rid of the `,` character along with any trailing white spaces.