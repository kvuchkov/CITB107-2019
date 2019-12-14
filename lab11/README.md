# Lab 11 - Vectors
In this lab we explore the vector class, part of the STL, for working with collections of elements.

## Exercise 1
- Vectors have size (logical) and capacity (phisical). As the size increases, the vector class makes sure there is enough capacity to contain it.
- You can add elements at the end of the vector at a low cost if there is enough capacity is available. Increasing the capacity means allocating new memory and copying values over.
- The vector stores elements in the memory consecutively.
- You can iterate a vector using standard `for` loop. 

## Exercise 2
The program reads integers until the end of the input and calculates their sum.
- You can use `while(cin>>n)` to read values into a vector until the end of the input. Doing so is inefficient, because the vector will need to increase the capacity many times.
- You can ensure some capacity by using the `reserve(10)` function of the vector.
- You can get rid of excess capacity using `shrink_to_fit()` function of the vector.
- You can pass the vector by reference to functions to avoid copying. However, if you don't plan to modify it in the function, make it a `const` reference.

## Exercise 3
The program reads the size of the input (number of integers) and then the integers. 
- If you know exactly how many elements you will store, you can pass this to the constructor and create a vector of that size and capacity.
- You can then read directly into vector elements with `cin>>numbers[i]`.

## Exercise 4
- Iterators point to a position in the vector. You can read the element pointed by the iterator with the `*` operator, e.g. `*it`.
- Vectors have `begin` iterator pointing to the first element.
- Vectors have `end` iterator pointing the position at the end after the last element, i.e. there is no element at the `end` iterator position.
- Iterators can be `moved` forwards and backwards using `it++` and `it--`. You can also get a new iterator with relative position using arithmetics, e.g. `it+2` will give you an iterator pointing to the second element after the position of `it`.
- You can insert an element into the vector using an iterator to specify the position. The element that was on that position will go to the next one, and the iterator will now point to the inserted element. _Inserting elements into the vector has a cost of O(n), because all the elements after the insertion point need to move one position to the right. Worst case is inserting at `vector.begin()`._
- You can erase an element from the vector using an iterator to specify its position. All elements will shift to the left to fill the gap. _Erasing an element from the vector has a cost of O(n). Worst case is to erase the first element `vector.begin()`._
- Erasing from the vector doens't decrease the capacity.
