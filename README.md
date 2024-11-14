# ComparingArraysCPlusPlus
ComparingArrays C++ code

#include <iostream>

using namespace std;

#include <iostream>: Includes the I/O library to use cout for printing to the console.    
  
using namespace std;: Allows direct use of standard library names like cout without prefixing them with std::.

void common_elements(int array_1[], int array_2[]){
    
    unsigned int arraySize = 10;
    
    unsigned int common_count {0};
    
    int common_data[10];

    Function Definition: common_elements takes two integer arrays array_1 and array_2 as parameters.
    
    arraySize: Stores the fixed size of the arrays, set to 10.
    
    common_count: Tracks the number of common elements found.
    
    common_data: Array to store the common elements found between array_1 and array_2.

    for(unsigned int i{}; i < arraySize; ++i) {
    
        for(unsigned int t{}; t < arraySize; ++t) {
                    
            if(array_1[i] == array_2[t]) {
            
                common_data[common_count++] = array_1[i];
                
                break;
                
                cout << array_1[i] << endl;
                
            }
            
        }
        
    }
    
    

    Outer Loop (i index): Loops through each element in array_1.
    
    Inner Loop (t index): For each element in array_1, it loops through array_2 to check for matches.
    
        Condition if(array_1[i] == array_2[t]): Checks if the current element from array_1 is found in array_2.
        
            If true, it stores the common element in common_data at the index common_count and increments common_count.
            
            break;: Stops the inner loop to avoid counting the same common element multiple times if it appears more than once in array_2.
            
            Note: The line cout << array_1[i] << endl; is unreachable here because it’s placed after the break statement. This line will never execute and can be removed.

   cout << "There are " << common_count << " common elements";
  
   if(common_count != 0) {
   
       cout << " they are : ";
       
       for(unsigned int i{} ; i < common_count; ++i) {
       
           cout << common_data[i] << " ";
           
       }
       
   }

    Printing the Result:
    
        If common_count is zero: It simply prints There are 0 common elements.
        
        If common_count is not zero:
        
            Prints There are X common elements they are : , where X is the count of common elements.
            
            Loops through common_data up to common_count, printing each common element with a trailing space after each.
            

int main() {

    int arrayOne[] {1,2,4,5,9,3,6,7,44,55};
    
    int arrayTwo[] {11,2,44,45,49,43,46,47,55,88};
    
    common_elements(arrayOne, arrayTwo);
    
}

    The main function defines two arrays (arrayOne and arrayTwo) and calls common_elements to print the common elements between them.

Summary

    Finding Common Elements:
    
        Uses nested loops to compare each element in array_1 with each element in array_2.
        
        Adds common elements to common_data and counts them with common_count.
        
    Output Formatting:
    
        Prints the count of common elements.
        
        If there are common elements, it prints them with a trailing space after each one.
        
  
        





