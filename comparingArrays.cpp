#include <iostream>
using namespace std;

// Function to find common elements between two arrays
void common_elements(int array_1[], int array_2[]){
    
    unsigned int theSize=10;
    unsigned int common_count{0};
    int common_data[10];
    
    
     // Iterate over the first array
    for(unsigned int i{};i<theSize;++i)
    {
         // Iterate over the second array
        for(unsigned int t{};t<theSize;++t)
        {
             // If the elements are equal, add it to the common_data 
             //array and increment the count
            if(array_1[i]==array_2[t])
            {
                common_data[common_count++]=array_1[i];
                break;
                
                
                
            }
            
        }
        
    }
        
    
   // Print the number of common elements
   cout << "There are " << common_count << " common elements";
  // If there are common elements, print them
  if(common_count != 0){

    cout << " they are : ";
    for(unsigned int i{} ; i < common_count; ++i){
    cout << common_data[i] << " ";
    }
  }
  