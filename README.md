# Arrays_Strings_in_cpp

Aim: To study and implement C++ arrays and strings.

Tools: VS code.

# Theory:

What is an Array?

An array is a data structure that can store a fixed-size sequential collection of elements of the same type. Arrays are used to store multiple values in a single variable instead of declaring separate variables for each value. In C++, arrays are declared with a specified size, and elements are accessed using indices starting from 0.

# Key Features:

* Stores elements in contiguous memory locations.

* Fixed size defined at the time of declaration.

* Access elements using index notation `arr[i]`.

# Types of Arrays:

* One-dimensional array: Linear collection of elements.

* Multi-dimensional array: 2D arrays representing matrices.

# Program 1: Input and Display Array

Algorithm:

1. Declare an array of fixed size.

2. Use a loop to take input values from the user.

3. Store each input value into the array.

4. Use another loop to print the array elements.

# Program 2: Search for a Key in Array

Algorithm:

1. Start

2. Prompt the user to enter the size of the array n

3. Read the value of n

4. Declare an array numbers of size n

5. Repeat for i = 0 to n-1

6. Prompt the user to enter the i-th value

7. Read numbers[i]

8. Prompt the user to enter the key to be searched

9. Read the key

10. Repeat for i = 0 to n-1

11. If numbers[i] == key then

12. Print i+1 as the position of the key in the array

13. End

# Program 3: Reverse an Array

Algorithm:

1. Start

2. Enter the size of array

3. Read the size of the array and store it in variable n

4. Declare an array of size n

5. for i = 0 to n - 1

6. Enter the values

7. Read the value and store it in numbers[i]

8. The reversed array is:

9. Repeat steps for j = n - 1 to 0 (decrement by 1)

10. Print numbers[j]

11. End

# Program 4: Sum and Average of Array Elements

Algorithm:

1. Start

2. Enter the size of the array (n)

3. Create an array of size n

4. Use a loop to input n numbers from the user

5. Set sum = 0

6. Use a loop to add all numbers to sum

7. Print the sum

8. Calculate average = sum / n

9. Print the average

10. Stop

# Program 5: Find Maximum and Minimum in Array

Algorithm:

1. Take the number of elements from the user.

2. Input the elements into an array.

3. Initialize two variables max and min with the first array element.

4. Loop through the array and update max and min accordingly.

5. Display the results.

# String in C++

What is a String?

A string in C++ is a data type used to store and manipulate a sequence of characters such as words, sentences, or any text.

C++ provides two ways to handle strings:

* C-style strings – Arrays of characters ending with a null character ('\0').

* C++ string class – The string class is a part of the C++ Standard Library and offers flexible, dynamic, and user-friendly string handling with built-in functions for common operations.

# Operations:

* Concatenation (joining two strings)

* Substring extraction

* Searching (finding a character or substring)

* Comparison
  
* Length calculation

 # Program 1: String Input and Display

Algorithm:

1. Declare a string variable.

2. Prompt the user to enter a string.

3. Read the string using cin.

4. Print the string.

# Program 2: String Concatenation

Algorithm:

1. Declare two string variables.

2. Take input for both strings using cin.

3. Concatenate the strings using + operator.

4. Display the concatenated result.

# Program 3: Reverse a String

1. Start.
   
2. Declare two string variables: original and reversed.
   
3. Take input in the original string.
 
4. Traverse the string from the end to the beginning.
 
5. Append each character to the reversed string.
  
6. Output the reversed string.
    
7. Stop.

# Conclusion:

In this experiment, We learned how to use arrays and strings in C++ for storing and manipulating data. Arrays allow handling fixed-size collections with operations like input/output, searching, reversing, and calculating sum, average, min, and max. Using both strings and arrays support the tasks like input, concatenation, reversing, and palindrome checks.
