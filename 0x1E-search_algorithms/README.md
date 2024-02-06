0x1E. C - Search Algorithms
search algorithm - is used to check for an element or retrieve an element from any data structure where it is stored
    it is categorized into 
        . sequential search - list or array is traversed sequentially and every element is checked
           e.g linear search
        . interval search - designed for searching in sorted data structure
            e.g binary search

Linear search Algorithm - is a sequential algorithm where we start from one end and check if its equal to the key value we are looking for

    Algorithm
        Go through the array value by value from start to end
        Compare each value to check if it's equal to value we are looking for
        If value is found return index of the value
        If the end of the array is reached and value not found return -1
Binary search Algorithm - used in sorted array by repeatedly dividing the search interval in half

    Algorithm
        Divide the search space in to 2 halves
            mid = low+(high-low)/2
        Compare the middle element to search space with the key
        If key is found in the middle , terminate the process
        If not:
                . if key < mid ,then use the left side for the next search
                . if key > mid , then use the right side for the next search
        The process continues until we find the key in search
