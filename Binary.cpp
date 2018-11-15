
#include<iostream>
using namespace std;
int main()
{  int number;
    cout<<"Enter the number to search for \n"<<"Numbers are:7,8,11,13,14,16,24,32"<<endl;
	cin>>number;
int numbers[8]={7,8,11,13,14,16,24,32};
int first = 0;
int last = 10 - 1;
int mid;
bool found = false;
while (first <= last && !found)
{
mid = (first + last) / 2;
if (numbers[mid] == number)
found = true;
else if (numbers[mid] > number)
last = mid - 1;
else
first = mid + 1;
}
if (found)
cout<<number<<" found at position "<<mid+1;
else
return -1;
}


