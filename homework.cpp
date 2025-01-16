/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector
#include <cmath> 

bool isPrime (int a)
{
    int index = 2;
   if (a <= 1)
   {
    return false;
   }      
while (index < a)
 {
    if (a % index == 0)
    {
        return false;
    }
    index = index + 1;
 }
 return true;
}

int main()
{
    // 1. 
    std::cout << "type in one number to check if it is prime." << std::endl;
    int prime1;
    std::cin >> prime1;
    if (isPrime(prime1) == 1)
    {
        std::cout << prime1 << " returned true (" << prime1 << " is prime)" << std::endl; 
    }
    else
    {
        if (isPrime(prime1) == 0)
        {
            std::cout << prime1 << " returned false (" << prime1 << " is composite)" << std::endl; 
        }
    }
    
    return 0;
}
