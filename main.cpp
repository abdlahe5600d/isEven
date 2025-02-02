#include <iostream>//Include the input-output stream header file

using namespace std;//using namespace directive 

int main() //Start of main function
{
    int  num;//Declare an integer variable num
    cout<<"Enter a number: ";//Ask the user to enter a number
    cin>>num;//Get the input from the user

    // test if the number is even by dividing it by 2
	double dive=num/2.0;
    dive =dive-((int)dive);
    bool isEven = dive==0;
    cout<<isEven;

    //test if the number is even by using the module operator %
    bool isEven2 = num%2==0;
    cout<<isEven2;

    //text if the number is even by checking the last digit of the number 
    int lastDigit = num%10;
    bool isEven3 = lastDigit==0 || lastDigit==2 || lastDigit==4 || lastDigit==6 || lastDigit==8;
    cout<<isEven3;

    return 0;
}//end of main function 
