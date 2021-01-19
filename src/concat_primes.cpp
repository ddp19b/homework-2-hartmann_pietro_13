/*
    @mainpage Concat Primes
    @author Dante D'Onofrio, Tessa Hartman
    Figures a number n that is a starting position on a list of prime numbers and outputs 5 digits of that list.
*/

/*
    \file concat_primes.cpp
    \brief string manipulation using .substr

    main tests the program before output of initial prompt, then asks for integer n
    program then runs function get_concatenated_primes, which calculates all prime numbers between 0 - 1000 and returns the accumulated object of strings
    then program runs get_slice_of_5 which takes the index and a length of five and returns just the subsection to main before output of the final five digits and prompts for more input

    Requires: C++11
*/

#include<iostream>
#include <assert.h>
#include<string>

/** \brief Brief function explaination
   
   And a long one...

    @return std::string
*/

std::string get_concatenated_primes()
{
    std::string concat_primes = "";
    //Complete this function

    return concat_primes.substr(0, 1000);
}


std::string get_slice_of_5(const std::string & primes, const int index)
{
    std::string ret = "";
    //Complete this function
    return ret;
}

int main(int argc, char *argv[]){
    using namespace std;
    int n;
    string concat_primes;
    if (argc >= 2){
        concat_primes = get_concatenated_primes();
        assert(get_slice_of_5(concat_primes, 3) == "71113");
        cout<<"Unit Test 1 passed\n";
        assert(get_slice_of_5(concat_primes, 6) == "13171");
        cout<<"Unit Test 2 passed\n";
        
        //Please add 3 more unit test here/
    } else{
        cout<< "Please input n: ";
        while(std::cin >> n)
        {
            concat_primes = get_concatenated_primes();
            std::cout << get_slice_of_5(concat_primes, n) << std::endl;
            cout<< "Please input n: ";
        }
    }
    return 0;
}
