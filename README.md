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
| Is Prime      | Check if a number is prime or not. | ```Input:```<br> 5 <br> ```Output:``` <br>  true |O(sqrt(n))| — |
| Prime Numbers | Returns all prime numbers till **N** using Sieve implementation. | ```Input:``` <br> 10 <br> ```Output:``` <br>  {2, 3, 5, 7} | O(n * ln * ln)| [B. Prime Matrix](http://codeforces.com/problemset/problem/271/B) |
| Divisors | Returns all divisors of a number. | ```Input:``` <br> 10 <br> ```Output:``` <br>  {1, 10, 2, 5}  | O(sqrt(n)) | [B. Easy Number Challenge](http://codeforces.com/problemset/problem/236/B), [B. Duff in Love](http://codeforces.com/problemset/problem/588/B) |
| Factorize | Returns all prime factors of a number. | ```Input:``` <br> 4 <br> ```Output:``` <br>  {2, 2} |O(sqrt(n)) | — |
| Count Range Divisors | Returns the count of divisors for each number from 1 to **N**. | ```Input:``` <br> 10 <br> ```Output:``` <br>  27 | O(N) | — |
| Factorial | Returns the factorial of a number. |  ```Input:``` <br> 5 <br> ```Output:``` <br>  120 | O(N) | — |
| GCD & LCM | Returns the greatest common divisor and least common multiple of given two numbers. | ```Input:``` <br> 6, 28 <br> ```Output:``` <br>   GCD=2, LCM=84 | — | [A. Fox and Number Game](http://codeforces.com/problemset/problem/389/A)
| Reverse Number | Reverse a number.  | ```Input:``` <br> 12340 <br> ```Output:``` <br>  4321 | O(N) | [RREVERSE](http://www.spoj.com/problems/RREVERSE/)
| Sum of Primes | Given **N**, where N is odd number > 1, return 1, 2, or 3 prime numbers <br>where their summation = N. _There must be a solution._  | ```Input:``` <br> 27 <br> ```Output:``` <br>  2 2 23| — | [D. Dima and Lisa](http://codeforces.com/problemset/problem/584/D)

## Strings<a name="strings"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	|
| Remove Consecutive | Remove consecutive characters. | ```Input:``` <br> "abacabaabacabaa" <br> ```Output:``` <br>  a |O(N)| [A. Plug-in](http://codeforces.com/problemset/problem/81/A), [Parentheses Balance](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=614)
| Alpha Characters | Get all strings with only consecutive aplha characters | ```Input:``` ".omar.is.brilliant." <br> ```Output:``` <br>  {omar, is, brilliant} | O(N) | [Andy's First Dictionary](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1756)
| Palindrome Characters | Check if a string is Palindrome.  | ```Input:``` <br> abcba <br> ```Output:``` <br>  true | O(N) | [Pesky Palindromes](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=289), [C. Little Frog](http://codeforces.com/problemset/problem/53/C), [Mother bear](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1886)
| Palindrome Substrings | Check if a string is Palindrome by substrings of length **K**; Comparing substrings instead of characters. <br>_Given that the length of string is divisible by K._ | ```Input:``` "abckfgabc", K=3 <br> ```Output:``` <br>  true | O(N) | —
| Sub Strings | Generates all possible substrings.  | ```Input:``` <br> "hello" <br> ```Output:``` <br>  {h, he, hel, hell, hello, e, ...} | O(N^3) | [Pesky Palindromes](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=289)
| Words Values | Return summation of values for each word(if exist) in the given string.  | ```Input:``` <br> string="hello world", values={"hello" => 5, "john" => 2}<br> ```Output:``` <br>  5 | O(N) | [Hay Points](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1236), [Babelfish](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1223)
| Reverse String | Keep reversing a string from a given index till it's opposite index<br>_(i.e. If a string has size of 5, and index equals to 1, then reverse from 1 till 3 inclusive)_ | ```Input:``` <br> string="hello", Indexes={0, 3, 2} <br> ```Output:``` <br>  "oellh" | O(N * number of queries) | —
| Equal Lists | What's the min number of strings to be removed so that both lists can have same strings regardless of their order. | ```Input:``` <br> list1={ "foo", "bar", "baz", "foo", "foo", "yard" }, <br>list2={ "bar", "bar", "baz", "yard", "foo", "yard" } <br> ```Output:``` <br>  4 | O(N) | [Just Prune The List](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3200)
| Unique Characters | Given string of characters, what's the count of unique characters and print them.  | ```Input:``` <br> "hMshMZ" <br> ```Output:``` <br>  count=4,<br> characters={h, M, s, Z} | O(N) | [A. Inna and Alarm Clock](http://codeforces.com/problemset/problem/390/A), [A. Valera and Antique Items](http://codeforces.com/problemset/problem/441/A), [A. I Wanna Be the Guy](http://codeforces.com/problemset/problem/469/A), [A. Asphalting Roads](http://codeforces.com/problemset/problem/583/A), [A. Bulbs](http://codeforces.com/contest/615/problem/A)
| Frequent Character | Count frequency of each character in a string, and get the max character(s) occurred.  | ```Input:``` <br> "The characTer T is The mosT frequenT characTer in This sTring" <br> ```Output:``` <br>  character=T, count=9 | O(N) | —
| Count Words | Count frequency of each word in the given string, and print them in the same order | ```Input:``` <br> "foo bar baz foo foo yard" <br> ```Output:``` <br>  {foo => 3, baz => 1, bar => 1, yard => 1} | O(N) | [The Department of Redundancy Department](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=425)
| Last Appearance | Find the last index of each character in a string. | ```Input:``` <br> "hello" <br> ```Output:``` <br>  h 0, e 1, l 3, o 4| O(N) | [Broken Keyboard](http://www.spoj.com/problems/BROKEN/)
| Sequence of Characters | Check if a sequence of characters exists or not in the given string. | ```Input:``` <br> string="can you find the given characters in order?", sequence="fire" <br> ```Output:``` <br>  true | O(N) | [B. Suffix Structures](http://codeforces.com/problemset/problem/448/B)
| Canonical Form | Given string **A** and **B**, return true if A occurs as an anagram in B.| ```Input:``` <br> A="car", B="xdfacrcytvharc" <br> ```Output:``` <br>  true <br>_at (3,5), (11,13)_| O(A*B) | —
| Replace Characters | Given a string, and a set of queries, each query has two characters. For every query, Replace first character with second in the given string, and vice-versa, and then return the resulting string. | ```Input:``` <br>string="aabbccdd", queries={('a', 'b'), ('c', 'd'), ('d', 'a')} <br> ```Output:``` <br>  bbddaacc| O(max(N, queries)) | [B. Rebranding](http://codeforces.com/problemset/problem/591/B)
| Hamming Distance Sum | Given a string **X** of length <= 10^5 with 1s and 0s, and string **Y** with length <= length of X. Get summation of numbers of different bits for each sub-string of X with string Y.| ```Input:``` <br>Y="01", X="00111"<br> ```Output:``` <br>  3 | O(N) | [B. Hamming Distance Sum](http://codeforces.com/contest/608/problem/B)

## Sorting<a name="sorting"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	|
| Count Sort | Sort an array by counting.  | ```Input:```<br> {3, 1, 0, 1, 4, 8, 11, 4, 34, 2} <br> ```Output:``` <br>  {0, 1, 1, 2, 3, 4, 4, 8, 11, 34} | O(NLogN) | [A. Helpful Math](http://codeforces.com/problemset/problem/339/A)
| Reverse Subarray | Is it possible to sort the array by reversing exactly one segment(part) of it?  | ```Input:``` <br> {6, 78, 63, 59, 28, 24, 8, 96, 99, 120} <br> ```Output:``` <br>  [1 -> 6] | O(N) | [B. Sort the Array](http://codeforces.com/problemset/problem/451/B)
| Shifting | Find minimum number of operations to sort array by moving the last element to the beginning  | ```Input:``` <br>{4, 5, 6, 2, 3} <br> ```Output:``` <br>  2 | O(N) | [B. Little Pony and Sort by Shift](http://codeforces.com/problemset/problem/454/B)
| Stairs | What's the minimum number of array elements to be erased <br> so that we can have array in this form: <br>_a1 < a2 < ... < ai - 1 < ((ai)) > ai + 1 > ... > an - 1 > an._   | ```Input:``` <br> {1, 1, 2, 2, 3, 3} <br> ```Output:``` <br>  min=1, array={1, 2, 3, 2, 1} | O(N) | [B. Sereja and Stairs](http://codeforces.com/problemset/problem/381/B)

## Cumulative Array<a name="cumulative-array"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	|
| Range Sum(1D Array) | Given array and set of start and end indexes, what is sum of values in range [start, end]. | ```Input:``` <br>array={1, 3, 4, 1, 2, 5}, start=2, end=5<br> ```Output:``` <br>  12 | O(N) | —
| Sqrt Sum | Given array and set of start and end indexes, Count of numbers that can have a sqrt between [start, end]. | ```Input:``` <br>array={0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, start=3, end=9<br> ```Output:``` <br>  2 | O(N) | —
| Max 1D Subarray(Fixed Length) | Given array, what's the max sub array of length **L**. | ```Input:```<br>array={1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, L=3<br> ```Output:``` <br>  27 | O(N) | —
| Range Sum(2D Array) | Given 2D array, and set of (i, j) and (k, l), What's the sum of numbers in (i, j) and (k, l) rectangle. | ```Input:``` <br> <br> `1 2 3 4` <br> `5 1 2 4` <br> `1 1 2 1` <br> `3 2 1 1`  <br>i=1, j=1, k=2, l=2<br><br> ```Output:``` <br>  6 | O(N^2) | —
| Max 2D Subarray(Fixed Length) | Given 2D array, what's the max rectangle with size **N** x **M**. | ```Input:```<br> array=<br> `1 2 3 4` <br> `5 1 2 4` <br> `1 1 2 1` <br> `3 2 1 1` <br> N=2, M=3<br><br> ```Output:``` <br>  16 | O(N^2) | —
| Adjacent Characters | Given 2D array **N** x **M** of '.' & '#' characters, and set of queries, each query with two numbers c1 & c2. For each query, return the summation of numbers of two adjacent '.' characters in each row from column c1 to c2. | ```Input:``` <br> array=<br> `....#..#` <br> `.#......` <br> `##.#....` <br> `##..#.##` <br> `........` <br>N=5,M=8,<br>queries={(1,3),(2,5)}<br><br> ```Output:``` <br>  {6, 9} | O(N * queries) | [C. New Year and Domino](http://codeforces.com/contest/611/problem/C)

## Window<a name="window"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	|
| Max 1D Subarray(Fixed Length) | Given array, what's the max sub array of length **L**. | ```Input:```<br> array={1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, L=3<br> ```Output:``` <br>  27 | O(N) | —
| Max 2 Subarrays | Given array, find the largest 2 sub arrays(not interleaved) of length **L**. | ```Input:``` <br>array={1, 2, 1, 15, 2, 3, 6, 8, 3, 3, 8, 6}, L=3<br> ```Output:``` <br>  [3 -> 5], [6 -> 8] | O(N) | [B. Maximum Absurdity](http://codeforces.com/problemset/problem/332/B)


## Two Pointers<a name="two-pointers"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	|
| Max Subarray(Less than or equal value) | Given array, find max subarray <= **t**. | ```Input:```<br> array={6, 8, 14, 9, 4, 11, 10}, t=13<br> ```Output:``` <br>  [3 -> 4]| O(N) | [B. Books](http://codeforces.com/problemset/problem/279/B)
| Zuma | Given array, and a _tnum_ number that will be inserted at index _tindex_. <br>If at there is three or more contiguous similar numbers, they should be destroyed(erased). <br>This rule is applied until there are no more three or more contiguous similar numbers.<br> Count the destroyed numbers | ```Input:``` <br> array={5, 4, 4, 2, 2, 4, 4, 5, 5, 1, 7, 6}, tnum=2, tindex=4<br> ```Output:``` <br>  10| O(N) | [B. Balls Game](http://codeforces.com/problemset/problem/430/B)
| Guess the Number | Given a set of queries like: ">=1", "<2", ">-3", ...etc.<br>Guess the range of numbers that achieves these queries. | ```Input:``` <br>queries={{">=", 1}, {">=", 3}, {">", -3}, {"<=", 55}}<br> ```Output:``` <br>  [3, 55]| O(N) | [416A - Guess a number!](http://codeforces.com/problemset/problem/416/A)
| Exact Sum | Given array of 10^5 elements, Find All **Xs** & **Ys**, where X + Y = goal | ```Input:``` {1, 2, 4, 6, 10, 5, 13, 8, 14, 5}, goal=10<br> ```Output:``` <br>  {2, 8}, {4, 6}, {5, 5}| O(NLogN) | [Exact Sum](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1998)
| 3SUM | Given array of 10^5 elements, Find All **Is** & **Js** & **Ks**, where I + J + K = goal. | ```Input:``` <br>array={1, 2, 4, 6, 10, 5, 13, 8, 14, 5}, goal=10<br> ```Output:``` <br>  {1, 4, 5}| O(N^2) | —
| Regular Expression Parser | Given a string and regular expression, parse the regular expression and check if the string matches. It can contain "*", and "+" wildcards. | ```Input:``` <br> string="ac", pattern="a+b*c+"<br> ```Output:``` <br>  true | O(N) | —

## Maximum Sum<a name="maximum-sum"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	|
| Maximum Sum 1D Array | Given array, find subarray with maximum sum. | ```Input:``` <br>{1, 10, -3, 2, -40, -4, 5, 3, 18, -2}<br> ```Output:``` <br>  range=[6, 8], sum=26 | O(N) | [Maximum Sum](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=44)
| Maximum Sum 2D Array | Given 2D array, find rectangle with maximum sum | ```Input:``` <br> array=<br> `1 2 3 -4` <br> `-5 -1 2 4` <br> `1 1 2 1` <br> `3 -2 1 1` <br><br> ```Output:``` <br>  range=[[1, 2] -> [3, 3]], sum=11 | O(N^3) | [Maximum Sum](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=44)


## Bits<a name="bits"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	|
| Bit Manipulations | Implementing various snippets: <br>• Check if bit 0 or 1. <br> • Set a bit to 1. <br>• Given N, return 2^k, where k is th position of first 1-bit(from right, get number of different bits.<br> • Given n1 & n2, get number of different bits.<br>• Count number of 1 bits. |   _Check Test Cases in src/Bits._ | O(N) | [B. Fedor and New Game](http://codeforces.com/problemset/problem/467/B), <br>[B. The Child and Set](http://codeforces.com/problemset/problem/437/B)
| Generate Combinations | Generate combinations with all possible sizes. | ```Input:``` <br>{1, 2} <br> ```Output:``` <br>  {}, {1}, {2}, {1, 2} | O(N * 2^N) | [B. Preparing Olympiad](http://codeforces.com/problemset/problem/550/B), <br>[324. Problem Set](http://a2oj.com/p.jsp?ID=324)
| Binary Conversions | Convert decimal to binary number(integer/string), and back to decimal.  | ```Input:``` <br>10 <br> ```Output:``` <br>  {"1010", 10} | O(logN), O(N) | [B. New Year and Old Property](http://codeforces.com/problemset/problem/611/B)
| Binary Addition | Take binary expansions n1 & n2 as strings. Return a binary string containing their sum.  | ```Input:``` <br> n1="1101", n2="101" <br> ```Output:``` <br>  "10010" | O(N) | —

## Recursion<a name="recursion"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	|
| Print Number | Given a number print it and print number in bits recursively. | ```Input:``` <br>213 <br> ```Output:``` <br>  decimal=213, binary=11010101  | O(N) | —
| 3n+1 | Given a number, if even divide by 2, if odd, multiply by 3, and add 1. <br>Count the steps till number = 1 recursively. | ```Input:``` <br>7 <br> ```Output:``` <br>  17 | — | [The 3n + 1 problem](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=36)

## BFS<a name="bfs"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	|
| 4 & 7 | Generate all possible children nodes starting from 4 & 7 until you find the goal. | ```Input:``` <br>goal=47 <br> ```Output:``` <br>  {4, 7, 44, 47} | O(2^number of goal digits+1) | [B. Lucky Numbers (easy)](http://codeforces.com/problemset/problem/96/B)

## DFS<a name="dfs"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	|
| Permutation | Given array, generate all permutations. | ```Input:```<br> {4, 5, 6}<br> ```Output:``` <br>  {{4, 5, 6}, {4, 6, 5}, {5, 4, 6}, ...} | O(N!) | [Generating Fast](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1039)
| Combination | Given array, generate all combinations of length **L**. | ```Input:``` <br> array={1, 7, 2}, L=2<br> ```Output:``` <br>  {1, 2}, {1, 7}, {7, 2} | O(N! / ( (N-L)!  * L!)) | —
| Beautiful Numbers | Generate all numbers that has a given number of digits and consists of 1 to **N**. | ```Input:```<br> N=2, digits=3<br> ```Output:``` <br>  {{1, 1, 1}, {1, 1, 2}, {1, 2, 1}, ...} | O(N^digits) | [BNUMBERS](http://www.spoj.com/problems/BNUMBERS/)
| Max Path | Given 2D array, starting from (0, 0), move only to right and down. <br>Find the maximum sum by exploring all possible paths | ```Input:``` <br> {{1, 5}, {2, 4}}<br> ```Output:``` <br>  10 | — | —
| Maze | Given 2D array, starting from (0, 0), move to up, left, right and down. <br>Find the goal node by exploring all possible paths | ```Input:``` <br> array=<br> `. . X .` <br> `. X . G` <br> `. . . X` <br> `X . X X` <br><br> ```Output:``` <br>  [1, 3] | — | [C. Maze](http://codeforces.com/problemset/problem/378/C)
| Connected Cells | Given 2D array, starting from (0, 0), Return the number of connected blocks| ```Input:``` <br> array=<br> `. . X .` <br> `X X X X` <br> `. . . X` <br> `X . X X` <br> <br> ```Output:``` <br>  3 | — | —
| Generate Binaries | Generate all binary numbers of length **N** and has given number of 1s, <br> and print them sorted(in ascending lexicographical order) | ```Input:``` <br> N=4, Ones=2<br> ```Output:``` <br>  {0011, 0101, 0110, 1001, 1010, 1100}| O(N! / ( (N-Ones)! * Ones!)) | [The Hamming Distance Problem](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=670)


## DP<a name="dp"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	|
| Fibonanci | Calculate the [fibonanci](https://en.wikipedia.org/wiki/Fibonacci_number) number. | ```Input:``` <br> 5 <br> ```Output:``` <br>  8 | O(2N ~ N) | —
| Divide | Given a number, get f(n) where f(n) = f(n/2) + f(n/2), f(0) = f(1) = 1, and n <= 2^31. <br>_(i.e. If n = 7, then f(7) = f(3) + f(4))_| ```Input:``` 7 <br> ```Output:``` <br>  7 | — | [TRUCKL](http://www.spoj.com/problems/TRUCKL/)

## Binary Search<a name="binary-search"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	
| First & Last True | Given array of true(s) and false(s), get the first and last true. <br>_The first and last true represents the goal element._| ```Input:``` <br> array1={true, true, true, true, true, true, false}, <br>array2={false, false, false, false, true, true, true}<br> ```Output:``` <br>  last true(array1)=5, first true(array1)=4| O(LogN) | [Exact Sum](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1998)
| Max Subarray(Less than or equal value) | Given an array, find max subarray <= **t**. | ```Input:``` <br> {6, 8, 14, 9, 4, 11, 10}, t=13<br> ```Output:``` <br>  [3 -> 4]| O(NlogN) | [B. Books](http://codeforces.com/problemset/problem/279/B)

## Next Array<a name="next-array"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	
| Max Number | Given a number, remove **K** numbers so that result is max. | ```Input:```<br> 11912346213, K=4<br> ```Output:``` <br>  9346213| O(number of digits) | [MAX_NUM](http://www.spoj.com/problems/MAX_NUM/)
| Min Number | Given a number, remove **K** numbers so that result is min. | ```Input:``` 11912346213, k=4<br> ```Output:``` <br>  1112213| O(number of digits) | —

## Divide & Conquer<a name="divide-and-conquer"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	
| Mergesort | Given array, sort it.| ```Input:``` <br> {1, 4, -1, 0, 2, 6, 1, 145, 7}<br> ```Output:``` <br>  {-1, 0, 1, 1, 2, 4, 6, 7, 145} | O(NLogN) | —
| Big Mod | Given **B**, **P**, & **M**, Find: B^P % M.| ```Input:```<br> B=2147483647, P=2147483647, M=46340<br> ```Output:``` <br>  13903 | O(LogP) | [Big Mod](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=310)


## Grid<a name="grid"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 	
| Expanding Grid | Given **N x N** 2D array called _the model_, cells are either painted with white or black. <br>Every white cell is expanded into **N x N** 2D array(some of cells are white and black according to the model). <br>If cell is black then it's expanded into **N x N** 2D array with black cells. Black cells represented by 'b'. <br>Expand the model **K - 1** times. | ```Input:``` <br> array=<br> `w b` <br> `w w` <br> N=2, K=2<br><br> ```Output:``` <br>  <br> `w b b b` <br> `w w b b` <br> `w b w b` <br> `w w w w` <br>| O(N^2) | [B. Fractal](http://codeforces.com/problemset/problem/36/B)
| Maximize Smallest Area | Given 2D array, and **K** lines, divide the grid by **K** lines(rows & columns) <br>So that the smallest area to be as large as possible. Return the smallest area. | ```Input:``` rows=6, cols=4, k=2<br> ```Output:``` <br>  8 | O(1) | [C. Jzzhu and Chocolate](http://codeforces.com/contest/450/problem/C)


## Other<a name="other"></a>
| Code Name		| Problem Statement | Test Case | Complexity | Related Problems |
| ------------- | ------------- | ------------- | -----      | ----- 
| Guess the Data Structure | Given set of insertion and deletion with the return values. <br>Guess whether the data structure is queue, stack or priority queue(largest value) | ```Input:```<br> {{"insert", 2}, {"insert", 1}, {"pop", 1}, {"pop", 2}}<br> ```Output:``` <br>  stack | O(N) | [I Can Guess the Data Structure!](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3146)
| Unique Sets(Fixed Length) | Generate max number of unique sets of length **L**. <br>It's not valid to use one array element more than once.| ```Input:```<br> {1, 2, 3, 4, 4, 4, 7, 8, 9, 10}, L=2<br> ```Output:``` <br>  {{4, 10}, {4, 9}, {8, 7}, {4, 3}, {2, 1}}| O(NlongN) | —
| Unique Sets(largest possible sizes) | Generate & Get the max number of unique sets with largest possible sizes. | ```Input:``` <br> {1, 2, 3, 4, 1, 2, 3, 1, 2, 1}<br> ```Output:``` <br>  {{1,2,3,4}, {1,2,3}, {1,2}, {1}}, max=4 | O(N) | [B. Beautiful Paintings](http://codeforces.com/problemset/problem/651/B)
| Regular Expression | Applying common regular expression patterns for matching, <br>searching and replacing strings using [regex](http://www.cplusplus.com/reference/regex/). |  _Check Test Case in src/Other_ | — | —
| Generate Subarrays | Given array, Loop through each subarray of length **L**. | ```Input:``` {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, L=5<br> ```Output:``` <br>  {12345, 23456, 34567, ...} | O(N*L) | —
| Alternating Array | Given array, perform on each 4 consecutive elements the following operations: +1, -1, 0, 0.| ```Input:``` <br> {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} <br> ```Output:``` <br>  {2, 1, 3, 4, 6, 5, 7, 8, 10, 9}| O(N) | [B - Jzzhu and Sequences](http://codeforces.com/problemset/problem/450/B)
| Draw Triangle | Given odd number **N** >= 3. Draw a Triangle.<br>_Check Test Case._ | ```Input:``` <br>5<br> ```Output:``` <br>  <br>`##D##`<br>`#DDD#`<br>`DDDDD`<br>`#DDD#`<br>`##D##`| O(N^2) | [A. Little Pony and Crystal Mine](http://codeforces.com/problemset/problem/454/A), [A. Valera and X](http://codeforces.com/problemset/problem/404/A)
| Unique Numbers | Given array of numbers, return count of unique values, and print them.| ```Input:``` <br>{7, 2, 4, 5, 16, 2, 0, 2, 4, 6}<br> ```Output:``` <br>  count=7, numbers={7, 2, 4, 5, 16, 0, 6} | O(N) | [A. Inna and Alarm Clock](http://codeforces.com/problemset/problem/390/A), [A. Valera and Antique Items](http://codeforces.com/problemset/problem/441/A), [A. I Wanna Be the Guy](http://codeforces.com/problemset/problem/469/A), [A. Asphalting Roads](http://codeforces.com/problemset/problem/583/A), [A. Bulbs](http://codeforces.com/contest/615/problem/A)
| Lowest Common Ancestor | Given two nodes in a tree(with and without parent pointers).<br> Return their lowest common ancestor.|  _Check Test Case in src/Other_  | O(h), O(N) | —
| Painting Grid | Given a grid, and set of operations, each operation will paint all cells in a row or a column in a color(initial color is 0). <br>What's the resulting grid.<br>_Each operation consists of 3 numbers; row or column(1 or 0), index, and color._ | ```Input:``` <br>{{1, 1, 3}, {0, 2, 1}, {1, 2, 2}}<br> ```Output:``` <br>  {{3,1,3}, {2,2,2}, {0,1,0}} | O(NxM) | [B. Print Check](http://codeforces.com/problemset/problem/631/B)
| Total Attacks | How many tanks can attack each other? <br>Given N tanks, each tank represented by a number. Two tanks can only attack each other if they have the same number. Return number of total attacks. | ```Input:``` <br> {1, 2, 5, 1, 5, 7, 2, 6, 2, 6}<br> ```Output:``` <br>  6 | O(N) | [B. Wet Shark and Bishops](http://codeforces.com/problemset/problem/621/B), <br> [C. Watchmen](http://codeforces.com/problemset/problem/651/C)
| The K-th Element | Given array of 10^5 element, which generates the following sequence of numbers. <br>For example, array=[10,4,18,3,...], generates the sequence: "10,10,4,10,4,18,10,4,18,3,...". <br>Return the K-th(1-Indexed) number. | ```Input:``` <br> array={10, 4, 18, 3}, K=5 <br> ```Output:``` <br>  4 | O(N) | [B. Game of Robots](http://codeforces.com/problemset/problem/670/B), <br> [A. Summer Camp](http://codeforces.com/problemset/problem/672/A)
| Cakes | Given two arrays with **N** ingredients, and additional **K** grams. <br>The 1st array for the needed grams, and 2nd for the available grams for each ingredient. <br>Return the max number of cakes we can bake using the additional K grams. <br><br>_• The needed grams for each ingredient can bake one cake, i.e available=4, needed=2, then cakes=4/2=2_<br> _• To prepare one cookie you need to use all N ingredients._ | ```Input:``` <br> needed={4, 3, 5, 6}, available={11, 12, 14, 20}, K=3 <br> ```Output:``` <br>  3 | O(NxK) | [D1. Magic Powder - 1](http://codeforces.com/problemset/problem/670/D1)

## Support <a name="support"></a>
I've written these snippets in my free time during my studies. If you find it useful, please support the project by spreading the word.

## Contribute <a name="contribute"></a>

Contribute by creating new issues, sending pull requests on Github or you can send an email at: omar.elgabry.93@gmail.com

## License <a name="license"></a>
Built under [MIT](http://www.opensource.org/licenses/mit-license.php) license.
