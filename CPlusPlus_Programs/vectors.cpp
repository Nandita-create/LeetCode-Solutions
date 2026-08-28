//Using vectors in C++
//help in dynamic memry allocation
#include <iostream>
#include <vector>
#include <algorithm>  //required for find
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3};
    cout<<"First element: "<<nums.front()<<endl;  //printing first element
    cout<<"Last element: "<<nums.back()<<endl;  //printing last element

    cout<<"Element at index 1: "<<nums[1]<<endl;

    nums.push_back(4);  
    //inserting an element at the end by default. 
    //Syntax: vector_name.push_back(value)

    nums.erase(nums.begin() + 1);  
    //removing value at index 1, as nums.begin()=0 index. 
    //Syntax: vector_name.erase(index)

    //traversing a vector
    for (const auto& number: nums)
    {
        cout<<number<<" ";
    }
    cout<<endl;
    //here number acts like int i in for loop
    //nums is actual vector of integers

    auto index = find(nums.begin(), nums.end(), 3);
    auto end_index = nums.end();
    //here index and end_index are like iterators so they cannot be directly printed
    //to print them do index - nums.begin() which is index-0 converting them to integers

    cout<<"Index of element 3 is: "<<index - nums.begin()<<endl;
    cout<<"Index of last element is: "<<end_index - nums.begin() - 1 <<endl;
    return 0;
}
//auto is not a datatype
//'auto' infers datatype of variable based on initialised value at compile time

//nums.front() and nums.back() are first and last values
//nums.begin() and nums.end() are first and last indexes
//nums.end() will give size of array and nums.end()-1 will give last index