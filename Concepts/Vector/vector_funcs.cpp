// Implement: (1)push_back operation, (2)pop_back operation

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //Initializing the vector
    vector<int> arr(1,0) ;  //Here the size of the array is 1 with value 0, looks something like this [0]
    //Let's print the array size
    cout<<"Size of the array at the beginning: " <<arr.size()<<endl;
    
    //Push Operation -> Suppose vector is a Stack, and we are pushing values to it. That's the function.
    for(int i=1;i<9;i++)
    {
        arr.push_back(i);  //Pushing all the values from 1 till 8 in the back. ARRAY LOOK-> [0,1,2,3,4,5,6,7,8]
    }

    cout<<"After Push result: ";
    //Here we will see how Vector is Dynamic in nature, and changes its size.
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Pop Operation -> It erases/deletes values from the end.
    for (int i = 0; i < 3; i++)
    {
        arr.pop_back();
    }
    cout<<"After Pop result: ";
    for(int i=1;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }    

   return 0; 
}
