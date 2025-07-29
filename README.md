# Array-String-C-Plus-Plus

Aim: Print all elements of a given array.

Appratus: VS code

Theory:
An array is a collection of elements of the same data type stored in contiguous memory locations. Arrays allow you to store multiple values under a single variable name with an index to access each element. The first element is at index 0, and the last at index size-1. To access or print all elements, you must traverse the array from the first element to the last using a loop structure, usually a for loop.
Arrays provide efficient indexed access, meaning you can quickly access any element by its index without iterating. However, when you want to print or process every element, you must iterate through the entire array.

Algorithm:

1. Printing Array Elements:

Algorithm Steps:

1.Start from the first index (0).

2.Access the element at the current index.

3.Print the element.

4.Move to the next index.

5.Repeat steps 2-4 until all elements are printed.

2. Find Number in Array:

Algorithm Steps:

1.Start from the first element.

2.Compare the current element with the target number.

3.If equal, stop and declare the number found.

4.Otherwise, move to the next element.

5.If the end is reached without a match, declare not found.


3. Sum and Average of Array Elements

Algorithm Steps:

1.Initialize sum to zero.

2.Start from the first element.

3.Add the current element to sum.

4.Move to the next element and repeat until all elements are processed.

5.Calculate average as sum divided by number of elements.

4. Minimum and Maximum in Array

Algorithm Steps:

1.Initialize min and max to the first element.

2.Starting from the second element, compare each element to min and max.

3.If current element < min, update min.

4.If current element > max, update max.

5.Continue until all elements are checked.

5. String Declaration and Initialization

Algorithm Steps:

1.Choose string type: C-style array or std::string.

2.For C-style, declare char array with enough size and initialize with characters or string literal.

3.For std::string, declare variable and assign string literal or use constructor.

6. String Concatenation

Algorithm Steps:

1.Identify the two strings to concatenate.

2.For std::string, use + or += operator to join strings.

3.For C-style strings, ensure destination has enough space.

4.Use strcat to append second string to first.

7. Print String in Reverse

Algorithm Steps:

1.Determine length of the string.

2.Start from last character (length - 1).

3.Print current character.

4.Move backward to previous character.

8. Palindrome Checking

Algorithm Steps:

1.Obtain the original string.

2.Create a reversed version of the string.

3.Compare original and reversed strings character by character.

4.If all characters match, declare palindrome; else, not palindrome.

Conclusion:

Understanding fundamental data structures like arrays and strings, along with their common operations such as traversal, searching, aggregation (sum, average), and comparison, forms the basis of efficient programming in C++. Arrays provide a way to store and access collections of elements sequentially, enabling operations like printing, finding minimum/maximum values, and searching for specific elements.

Strings, whether managed as C-style arrays or through the safer and more flexible std::string class, allow manipulation of textual data through initialization, concatenation, reversal, and palindrome checking. These operations highlight important programming concepts such as iteration, condition checking, and memory management.

Mastering these basic algorithms and understanding their underlying theory is crucial for building more complex applications. They also provide insight into time complexity (e.g., linear search is O(n)) and data handling techniques that will be foundational as you progress in programming.






