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

std::vector<int> primeList (int x)
{
    bool intPrime;
    int newindex = 2;
    std::vector<int> primeN = {2}; 
    if (x <=1)
    {
        std::cout << "this number cannot be used. pick a number greater than 1." << std::endl;
        return {0};
    }
    while (newindex < x)
     {
           if (x % newindex == 0)
          {
              std::cout << x << " is not prime!" << std::endl;
          }
          
          newindex = newindex + 1;
     }
     
        // from here I'm lost
     int listTracker = 2; // number being tested
     int listIndex = 2; // what position in list
    while (listTracker < x)
    {
     while (listIndex < listTracker)
     {
        if (listTracker % listIndex == 0)
        {
            listIndex = listTracker;
        }
        else
        {
          if (listTracker % listIndex == !0)
        {
            primeN.push_back(listTracker);
        }
        }
        listIndex = listIndex + 1; // must get it to skip
     }
     listTracker = listTracker + 1;
     listIndex = 2;
    }
    
     
    return primeN;
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
    std::cout << std::endl;
    
    //2. 
    int plN;
    std::cout << "choose one number for the primeList procedure" << std::endl;
    std::cin >> plN;
    display(primeList(plN));


    return 0;
}
