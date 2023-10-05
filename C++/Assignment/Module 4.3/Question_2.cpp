/* Write a program of to sort the array using templates. */

#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
    int array[] = {3, 5, 1, 2, 4};


    std::sort(std::begin(array),std::end(array));

    for(int i : array)
    {
        std::cout<< i <<" ";
    }

    return 0;
}