Problem 1 ------ HackerRank 
* Forming a Magic Square * 
The problem asks us to find the minimum cost required to make a given input matrix to a magic square
3x3 Matrix has a constant magic number of 15. n x n matirx has distinct positive integers from 1 to (n*n). So, for a 3 x 3 matrix,  numbers are from 1 to 9 , inclusive. Thus , 1 + 2+3 ..+9 = 45 , since there are 3 rows and each row should be equl to the magic constant number , thus , 3 m = 45 , hence m = 15. 
Solution: Precompute all possible matrix that form a magic sqaure, and then iterate over input matrix and compute the cost of changing to a magic sqare. Find the least cost magic square. 
Complexity: Order of the precomputed matrix . In this case 8 such matrix exists. We will have to iterate over all 8 matrix and find the one with the least conversion cost. hence 0(8n) , input size is 9, (n = 9)  , since n will not change , O(n) time complexity. 

Problem 2 
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Solutions : Maintain a map that stores the value and its location. While iterating over input vector, if currently at i , check to see if target - i exists. Make sure to look into corner case , where the target -i = i itself. eg: target = 6 and i = 3. Then 6 - 3 = 3. If two 3's are present , are different location then we can return true. 

