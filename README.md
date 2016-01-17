![Screenshot](https://raw.githubusercontent.com/OmarElGabry/Cubes/master/assets/logo.png)

# Cubes

Implementation of interesting algorithms in C++ and their related problems on online Judges.

## Index
+ [Numbers](#numbers)
+ [Strings](#strings)
+ [Sorting](#sorting)
+ [Cumulative Array](#cumulative-array)
+ [Window](#window)
+ [Two Pointers](#two-pointers)
+ [Maximum Sum](#maximum-sum)
+ [Bits](#bits)
+ [Recursion](#recursion)
+ [BFS](#bfs)
+ [DFS](#dfs)
+ [DP](#dp)
+ [Binary Search](#binary-search)
+ [Next Array](#next-array)
+ [Divide & Conquer](#divide-and-conquer)
+ [Grid](#grid)
+ [Other](#other)
+ [Support](#support)
+ [Contribute](#contribute)
+ [License](#license)


## Numbers<a name="numbers"></a>

| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	|
| Is Prime      | Checks if a number is prime or not | ```Input:``` 5 <br> ```Output``` true |O(sqrt(n))| NA |
| Prime Numbers | Returns all prime numbers till **N** using Sieve implementation | ```Input:``` 10 <br> ```Output``` {2, 3, 5, 7} | O(n * ln * ln)| [B. Prime Matrix](http://codeforces.com/problemset/problem/271/B) |
| Divisors | Returns all divisors of a number | ```Input:``` 10 <br> ```Output``` {1, 10, 2, 5}  | O(sqrt(n)) | [B. Easy Number Challenge](http://codeforces.com/problemset/problem/236/B), [B. Duff in Love](http://codeforces.com/problemset/problem/588/B) |
| Factorize | Returns all prime factors of a number | ```Input:``` 4 <br> ```Output``` {2, 2} |O(sqrt(n)) | NA |
| Count Range Divisors | Returns the count of divisors for each number from 1 to **N** | ```Input:``` 10 <br> ```Output``` 27 | O(n) | NA |
| Factorial | Returns the factorial of a number |  ```Input:``` 5 <br> ```Output``` 120 | O(n) | NA |
| GCD & LCM | Returns the greatest common divisor and least common multiple| ```Input:``` 6, 8 <br> ```Output``` GCD=2, LCM=84 | NA | [A. Fox and Number Game](http://codeforces.com/problemset/problem/389/A)
| Reverse Number | Reverse a number  | ```Input:``` 12340 <br> ```Output``` 4321 | O(n) | [RREVERSE](http://www.spoj.com/problems/RREVERSE/)
| Sum of Primes | Given **N**, where N is odd number > 1, return 1, 2, or 3 prime numbers <br>where their summation = N. There must be a solution.  | ```Input:``` 27 <br> ```Output``` 2 2 23| NA | [D. Dima and Lisa](http://codeforces.com/problemset/problem/584/D)

## Strings<a name="strings"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	|
| Remove Consecutive | Remove consecutive characters | ```Input:``` abacabaabacabaa <br> ```Output``` a |O(n)| [A. Plug-in](http://codeforces.com/problemset/problem/81/A), [Parentheses Balance](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=614)
| Alpha Characters | Get all strings with only consecutive aplha characters | ```Input:``` ".omar.is.brilliant." <br> ```Output``` omar, is, brilliant | O(n) | [Andy's First Dictionary](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1756)
| Palindrome Characters | Checks if a string is Palindrome  | ```Input:``` abcba <br> ```Output``` true | O(n) | [Pesky Palindromes](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=289), [C. Little Frog](http://codeforces.com/problemset/problem/53/C), [Mother bear](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1886)
| Palindrome Substrings | Checks if a string is Palindrome by dividing it to substrings of length **K** (i.e. length of string is divisible by K). <br> It compares substrings instead of characters | ```Input:``` "abckfgabc", k=3 <br> ```Output``` true | O(n) | NA
| Sub Strings | Generates all possible substrings  | ```Input:``` hello <br> ```Output``` {h, he, hel, hell, hello, e, ...} | O(n^2 / 2) | [Pesky Palindromes](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=289)
| Words Values | Rerurns summation of values for each word(if exists)  | ```Input:``` {"hello" => 5, "john" => 2}, "hello world"<br> ```Output``` 5 | O(n) | [Hay Points](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1236), [Babelfish](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1223)
| Reverse String | Keep reversing a string from a given index till it's opposite index<br>(i.e. If a string has size of 5, and index equals to 1, then reverse from 1 till 3 inclusive) | ```Input:``` "hello", Indexes={0, 3, 2} <br> ```Output``` oellh | O(n * number of queries) | NA
| Equal Lists | What's the min number of strings to be removed so that both lists can have same strings regardless of their order  | ```Input:``` { "foo", "bar", "baz", "foo", "foo", "yard" }, { "bar", "bar", "baz", "yard", "foo", "yard" } <br> ```Output``` 4 | O(n) | [Just Prune The List](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3200)
| Unique Characters | Given string of characters, what's the count of unique characters and print them  | ```Input:``` "hMshMZ" <br> ```Output``` 4<br>{h, M, s, Z} | O(n) | [A. Inna and Alarm Clock](http://codeforces.com/problemset/problem/390/A), [A. Valera and Antique Items](http://codeforces.com/problemset/problem/441/A), [A. I Wanna Be the Guy](http://codeforces.com/problemset/problem/469/A), [A. Asphalting Roads](http://codeforces.com/problemset/problem/583/A), [A. Bulbs](http://codeforces.com/contest/615/problem/A)
| Frequent Character | Count frequency of each character in a string, and get the max character(s) occurred.  | ```Input:``` "The characTer T is The mosT frequenT characTer in This sTring" <br> ```Output``` character=T count=9 | O(n) | NA
| Count Words | Count frequency of each word in the given string, and print them in the same order | ```Input:``` "foo bar baz foo foo yard" <br> ```Output``` foo 3, baz 1, bar 1, yard 1| O(n) | [The Department of Redundancy Department](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=425)
| Last Appearance | Find the last index of each character in a string | ```Input:``` "hello" <br> ```Output``` h 0, e 1, l 3, o 4| O(n) | [Broken Keyboard](http://www.spoj.com/problems/BROKEN/)
| Sequence of Characters | Check if a sequence of characters exists or not | ```Input:``` "can you find the given characters in order?", "yes" <br> ```Output``` true | O(n) | [B. Suffix Structures](http://codeforces.com/problemset/problem/448/B)
| Canonical Form | Given a string **A** and **B**, return true if A occurs as an anagram in B.| ```Input:```A="car", B="xdfacrcytvharc" <br> ```Output``` (5,3), (11,13)| O(n*m) | NA
| Replace Characters | Given a string, and a set of queries, each query has two characters. For every query, Replace first character with second in the given string, and vice-versa, and then return the resulting string. | ```Input:``` string="aabbccdd", queries{('a', 'b'), ('c', 'd'), ('d', 'a')} <br> ```Output``` bbddaacc| O(n) | [B. Rebranding](http://codeforces.com/problemset/problem/591/B)

## Sorting<a name="sorting"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	|
| Count Sort | Sort an array by counting  | ```Input:``` {3, 1, 0, 1, 4, 8, 11, 4, 34, 2} <br> ```Output``` 0, 1, 1, 2, 3, 4, 4, 8, 11, 34 | O(n longn) | [A. Helpful Math](http://codeforces.com/problemset/problem/339/A)
| Reverse Subarray | Is it possible to sort the array by reversing exactly one segment(part) of it?  | ```Input:``` {6, 78, 63, 59, 28, 24, 8, 96, 99, 120} <br> ```Output``` [1 -> 6] | O(n) | [B. Sort the Array](http://codeforces.com/problemset/problem/451/B)
| Shifting | Find minimum number of operations to sort array by moving the last element to the beginning  | ```Input:``` {4, 5, 6, 2, 3} <br> ```Output``` 2 | O(n) | [B. Little Pony and Sort by Shift](http://codeforces.com/problemset/problem/454/B)
| Stairs | What's the minimum number of array elements to be erased so that we can have array in this form: <br>a1 < a2 < ... < ai - 1 < ((ai)) > ai + 1 > ... > an - 1 > an.   | ```Input:``` {1, 1, 2, 2, 3, 3} <br> ```Output``` min=1, array={1, 2, 3, 2, 1} | O(n) | [B. Sereja and Stairs](http://codeforces.com/problemset/problem/381/B)

## Cumulative Array<a name="cumulative-array"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	|
| Range Sum(1D Array) | Given array and set of start and end indexes, what is sum of values in range [start, end] | ```Input:``` {3, 4, 1, 2, 5}, start=2, end=5<br> ```Output``` 12 | O(n) | NA
| Sqrt Sum | Given array and set of start and end indexes, Count of numbers that can have a sqrt between [start, end] | ```Input:``` {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, start=3, end=9<br> ```Output``` 2 | O(n) | NA
| Max 1D Subarray(Fixed Length) | Given array, what's the max sub array of length **L** | ```Input:``` {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, l=3<br> ```Output``` 27 | O(n) | NA
| Range Sum(2D Array) | Given 2D array, and set of (i, j) and (k, l), What's the sum of numbers in (i, j) and (k, l) rectangle | ```Input:``` {{1, 2, 3, 4}, {5, 1, 2, 4}, {1, 1, 2, 1}, {3, 2, 1, 1}}, i=1, j=1, k=2, l=2<br> ```Output``` 6 | O(n^2) | NA
| Max 2D Subarray(Fixed Length) | Given 2D array, what's the max rectangle with size **N** x **M** | ```Input:``` {{1, 2, 3, 4}, {5, 1, 2, 4}, {1, 1, 2, 1}, {3, 2, 1, 1}}, n=2, m=3<br> ```Output``` 16 | O(n^2) | NA


## Window<a name="window"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	|
| Max 1D Subarray(Fixed Length) | Given array, what's the max sub array of length **L** | ```Input:``` {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, L=3<br> ```Output``` 27 | O(n) | NA
| Max 2 Subarrays | Given array, find the largest 2 sub arrays(not interleaved) of length **L** | ```Input:``` {1, 2, 1, 15, 2, 3, 6, 8, 3, 3, 8, 6}, l=3<br> ```Output``` [3 -> 5], [6 -> 8]| O(n) | NA


## Two Pointers<a name="two-pointers"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	|
| Max Subarray(Less than or equal value) | Given array, find max subarray <= **t**. | ```Input:``` {6, 8, 14, 9, 4, 11, 10}, t=13<br> ```Output``` [3 -> 4]| O(n) | [B. Books](http://codeforces.com/problemset/problem/279/B)
| Zuma | Given array, and a _tnum_ number that will be inserted at index _tindex_. <br>If at there is three or more contiguous similar numbers, they should be destroyed(erased). <br>This rule is applied until there are no more three or more contiguous similar numbers.<br> Count the destroyed numbers | ```Input:``` {5, 4, 4, 2, 2, 4, 4, 5, 5, 1, 7, 6}, tnum=2, tindex=4<br> ```Output``` 10| O(n) | [B. Balls Game](http://codeforces.com/problemset/problem/430/B)
| Guess the Number | Given a set of queries like ">=1", "<2", ">-3", ...etc.<br>Guess the range of numbers that achieves these queries | ```Input:``` {">=", 1}, {">=", 3}, {">", -3}, {"<=", 55}<br> ```Output``` [3, 55]| O(n) | [416A - Guess a number!](http://codeforces.com/problemset/problem/416/A)
| Exact Sum | Given array of 10^5 elements, Find All **Xs** & **Ys**, where X + Y = goal | ```Input:``` {1, 2, 4, 6, 10, 5, 13, 8, 14, 5}, goal=10<br> ```Output``` {2, 8}, {4, 6}, {5, 5}| O(n) | [Exact Sum](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1998)
| 3SUM | Given array of 10^5 elements, Find All **Is** & **Js** & **Ks**, where I + J + K = goal | ```Input:``` {1, 2, 4, 6, 10, 5, 13, 8, 14, 5}, goal=10<br> ```Output``` {1, 4, 5}| O(n*n) | NA
| Regular Expression Parser | Given a string and regular expression, parse the regular expression and check if the string matches. It can contain "*", and "+" wildcards. | ```Input:``` str="ac", pattern="a+b*c+"<br> ```Output``` true | O(n) | NA

## Maximum Sum<a name="maximum-sum"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	|
| Maximum Sum 1D Array | Given array, find subarray with maximum sum | ```Input:``` {1, 10, -3, 2, -40, -4, 5, 3, 18, -2}<br> ```Output``` sum=26 range=[6, 8]| O(n) | [Maximum Sum](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=44)
| Maximum Sum 2D Array | Given 2D array, find rectangle with maximum sum | ```Input:``` {{1, 2, 3, -4}, {-5, -1, 2, 4}, {1, 1, 2, 1}, {3, -2, 1, 1}}<br> ```Output``` sum=11, range=[1, 2] -> [3, 3]| O(n^3) | [Maximum Sum](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=44)


## Bits<a name="bits"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	|
| Bit Manipulations | Implementing various snippets: check if bit 0 or 1, set a bit to 1, return 2^k, <br>where k is th position of first 1-bit, get number of different bits, count number of 1 bits | ```Input:``` <br> ```Output``` | O(n) | [B. Fedor and New Game](http://codeforces.com/problemset/problem/467/B), <br>[B. The Child and Set](http://codeforces.com/problemset/problem/437/B)
| Generate Combinations | Generate combinations with all possible sizes | ```Input:``` {1, 2} <br> ```Output``` {}, {1}, {2}, {1, 2} | O(n * 2^n) | [B. Preparing Olympiad](http://codeforces.com/problemset/problem/550/B), <br>[324. Problem Set](http://a2oj.com/p.jsp?ID=324)
| Binary Conversions | Convert decimal to binary number(integer/string), and back to decimal.  | ```Input:``` 10 <br> ```Output``` {"1010", 10} | O(logN), O(N) | [B. New Year and Old Property](http://codeforces.com/problemset/problem/611/B)

## Recursion<a name="recursion"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	|
| Print Number | Given a number print it and print number in bits recursively | ```Input:``` 213 <br> ```Output``` 213, 11010101  | O(n) | NA
| 3n+1 | Given a number, if even divide by 2, if odd, multiply by 3, and add 1. <br>Count the steps till number = 1 recursively | ```Input:``` 7 <br> ```Output``` 17 | NA | [The 3n + 1 problem](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=36)

## BFS<a name="bfs"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	|
| 4 & 7 | Simple Implementation of BFS. <br>Generate all possible children nodes starting from 4 & 7 until you find the goal | ```Input:``` goal=47 <br> ```Output``` {4, 7, 44, 47} | O(2^number of digits) | [B. Lucky Numbers (easy)](http://codeforces.com/problemset/problem/96/B)

## DFS<a name="dfs"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	|
| Permutation | Given array, generate all permutations | ```Input:``` {4, 5, 6}<br> ```Output``` {4, 5, 6}, {4, 6, 5}, {5, 4, 6}, ... | O(n!) | [Generating Fast](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1039)
| Combination | Given array, generate all combinations of length **L** | ```Input:``` {1, 7, 2}, length=2<br> ```Output``` {1, 2}, {1, 7}, {7, 2} | O(n! / ( (n-l)!  * l!)) | NA
| Beautiful Numbers | Generate all numbers that has a given number of digits and consists of 1 to **N** | ```Input:``` N=2, digits=3<br> ```Output``` {1, 1, 1}, {1, 1, 2}, {1, 2, 1}, ... | O(n^digits) | [BNUMBERS](http://www.spoj.com/problems/BNUMBERS/)
| Max Path | Given 2D array, starting from (0, 0), move only to right and down, <BR>Find the maximum sum by exploring all possible paths | ```Input:``` {{1, 5}, {2, 4}}<br> ```Output``` 10 | NA | NA
| Maze | Given 2D array, starting from (0, 0), move to up, left, right and down, <BR>Find the goal node by exploring all possible paths | ```Input:``` {{., ., X, .}, {., X, ., G}, {., ., ., X}, {X, ., X, X}}<br> ```Output``` [1, 3] | NA | [C. Maze](http://codeforces.com/problemset/problem/378/C)
| Connected Cells | Given 2D array, starting from (0, 0), Return the number of connected blocks| ```Input:``` {{., ., X, .}, {X, X, X, X}, {., ., ., X}, {X, ., X, X}}<br> ```Output``` 3 | NA | NA
| Generate Binaries | Generate all binary numbers of length **N** and has given number of 1s, <br> and print them sorted(in ascending lexicographical order) | ```Input:``` n=4, ones=2<br> ```Output``` {0011, 0101, 0110, 1001, 1010, 1100}| O(n! / ( (n-ones)! * ones!)) | [The Hamming Distance Problem](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=670)


## DP<a name="dp"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	|
| Fibonanci | Calculate the [fibonanci](https://en.wikipedia.org/wiki/Fibonacci_number) number | ```Input:``` 5 <br> ```Output``` 8 | O(2n ~ n) | NA
| Divide | Given a number, get f(n) where f(n) = f(n/2) + f(n/2), f(0) = f(1) = 1, and n <= 2^31. <br>(i.e. If n = 7, f(7) = f(3) + f(4))| ```Input:``` 7 <br> ```Output``` 7 | NA | [TRUCKL](http://www.spoj.com/problems/TRUCKL/)

## Binary Search<a name="binary-search"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	
| First & Last True | Given array of true and false, get the first and last true. <br>The first and last true represents the goal element.| ```Input:``` {true, true, true, true, true, true, false}, <br>{false, false, false, false, true, true, true}<br> ```Output``` last true=5, first true=4| O(logN) | [Exact Sum](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1998)
| Max Subarray(Less than or equal value) | Given an array, find max subarray <= **t**. | ```Input:``` {6, 8, 14, 9, 4, 11, 10}, t=13<br> ```Output``` [3 -> 4]| O(NlogN) | [B. Books](http://codeforces.com/problemset/problem/279/B)

## Next Array<a name="next-array"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	
| Max Number | Given a number, remove **K** numbers so that result is max | ```Input:``` 11912346213, k=4<br> ```Output``` 9346213| O(number of digits) | [MAX_NUM](http://www.spoj.com/problems/MAX_NUM/)
| Min Number | Given a number, remove **K** numbers so that result is min | ```Input:``` 11912346213, k=4<br> ```Output``` 1112213| O(number of digits) | NA

## Divide & Conquer<a name="divide-and-conquer"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	
| Mergesort | Given array, sort it.| ```Input:``` {1, 4, -1, 0, 2, 6, 1, 145, 7}<br> ```Output``` 4321 | O(NlogN) | NA
| Big Mod | Given **B**, **P**, & **M**, Find: B^P % M.| ```Input:``` B=2147483647, P=2147483647, M=46340<br> ```Output``` 13903 | O(logP) | [Big Mod](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=310)


## Grid<a name="grid"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	
| Expanding Grid | Given **N x N** 2D array called _the model_, cells are either painted with white or black. <br>Every white cell is expanded into **N x N** 2D array(some of cells are white and black according to the model). <br>If cell is black then it's expanded into **N x N** 2D array with black cells. Black cells represented by 'b'. <br>Expand the model **K - 1** times | ```Input:``` N=2, K=2, {{w, b}, {w, b}}<br> ```Output``` {{w,b,b,b}, {w,w,b,b}, {w,b,w,b}, {w,w,w,w}}| O(N^2) | [B. Fractal](http://codeforces.com/problemset/problem/36/B)
| Maximize Smallest Area | Given 2D array, and **K** lines, divide the grid by **K** lines(rows & columns) <br>So that the smallest area to be as large as possible. Return the smallest area | ```Input:``` rows=6, cols=4, k=2<br> ```Output``` 8 | O(1) | [C. Jzzhu and Chocolate](http://codeforces.com/contest/450/problem/C)


## Other<a name="other"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 
| Guess the Data Structure | Given set of insertion and deletion with the return values. <br>Guess whether the data structure is queue, stack or priority queue(largest value) | ```Input:``` {"insert", 2}, {"insert", 1}, {"pop", 1}, {"pop", 2}<br> ```Output``` stack | O(n) | [I Can Guess the Data Structure!](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3146)
| Unique Sets | Generate max number of unique sets of length **L**. It's not valid to use one array element more than once.| ```Input:``` {1, 2, 3, 4, 4, 4, 7, 8, 9, 10}, L=2<br> ```Output``` {4, 10}, {4, 9}, {8, 7}, {4, 3}, {2, 1}| O(NlongN) | NA
| Regular Expression | Applying common regular expression patterns for matching, searching and replacing strings using [regex](http://www.cplusplus.com/reference/regex/) | ```Input:``` _Check Test Case in src_<br> ```Output``` | NA | NA
| Generate Subarrays | Given array, Loop through each subarray of length **L**. | ```Input:``` {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, L=5<br> ```Output``` 12345, 23456, 34567, ... | O((N/2)^2) | NA
| Alternating Array | Given array, perform on each 4 consecutive elements the following operations: +1, -1, 0, 0.| ```Input:``` {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} <br> ```Output``` { 2, 1, 3, 4, 6, 5, 7, 8, 10, 9 }| O(n) | [B - Jzzhu and Sequences](http://codeforces.com/problemset/problem/450/B)
| Draw Triangle | Given **N** >= 3. Draw Triangle(_Check Test Case in src_) | ```Input:``` 5<br> ```Output``` <br>##D##<br>#DDD#<br>DDDDD<br>#DDD#<br>##D##| O(N^2) | [A. Little Pony and Crystal Mine](http://codeforces.com/problemset/problem/454/A), [A. Valera and X](http://codeforces.com/problemset/problem/404/A)
| Unique Numbers | Given array of numbers, return count of unique values, and print them| ```Input:``` {7, 2, 4, 5, 16, 2, 0, 2, 4, 6}<br> ```Output``` count=7, numbers={7, 2, 4, 5, 16, 0, 6} | O(n) | [A. Inna and Alarm Clock](http://codeforces.com/problemset/problem/390/A), [A. Valera and Antique Items](http://codeforces.com/problemset/problem/441/A), [A. I Wanna Be the Guy](http://codeforces.com/problemset/problem/469/A), [A. Asphalting Roads](http://codeforces.com/problemset/problem/583/A), [A. Bulbs](http://codeforces.com/contest/615/problem/A)
| Hamming Distance Sum | Given a string **X** of length <= 10^5 with 1s and 0s, and string **Y** with length <= length of X. Get summation of numbers of different bits for each sub-string of X with string Y.| ```Input:``` Y="01", X="00111"<br> ```Output``` 3 | O(N) | [B. Hamming Distance Sum](http://codeforces.com/contest/608/problem/B)
| Adjacent Characters | Given 2D array **N x M** of '.' & '#' characters, and set of queries, each query with two numbers **c1 & c2**. For each query, return the summation of number of two adjacent '.' characters in each row from column c1 to c2.| ```Input:``` N=5,M=8,<br>{{....#..#},{.#......},{##.#....},{##..#.##},{........}},<br>queries={(1,3),(2,5)}<br> ```Output``` {6, 9} | O(queries * N) | [C. New Year and Domino](http://codeforces.com/contest/611/problem/C)
| Lowest Common Ancestor | Given two nodes in a tree(with and without parent pointers), return their lowest common ancestor.| ```Input:``` _Check Test Case in src_<br> ```Output```  | O(h), O(n) | NA

## Support <a name="support"></a>
I've written these snippets in my free time during my studies. If you find it useful, please support the project by spreading the word.

## Contribute <a name="contribute"></a>

Contribute by creating new issues, sending pull requests on Github or you can send an email at: omar.elgabry.93@gmail.com

## License <a name="license"></a>
Built under [MIT](http://www.opensource.org/licenses/mit-license.php) license.
