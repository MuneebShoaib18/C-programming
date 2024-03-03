#include <iostream>
using namespace std;

    void palindrome_checker(int number)
    {
        int reverse_number=0;
        int remainder;
        int original_number=number;
        while(number!=0)
            {
            remainder=number%10;
            reverse_number=reverse_number*10+remainder;
            number= number/10;
            }
        if(original_number==reverse_number)
            {

           cout<<"The given number is a palindrome";
            }
        else
            {
            cout<<"The given number is NOT a palindrome";
            }
    }

int main()
{

    int input;

    cout<<"Enter a number: "<<endl;
    cin>>input;
    palindrome_checker(input);

}