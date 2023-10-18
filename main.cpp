//task_1
//guessing number game
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{  //get the random number
    srand(time(0));
    int number=rand()%100+1 ;
    //get first guess from the user
    int number_entered;
    cout<<"Guess the number \n You have 5 attempts "<<endl;
    cin>>number_entered;
    int attempts=1;
    //get the guesses and tell the user if close or not
    while (number_entered !=number && attempts<5)
    {

        if (abs(number_entered-number) <=10)
        {
            cout<<"Too close!"<<endl;

        }
        else if(abs(number_entered-number)>=20)
            cout<<"The gab is more than 20 number"<<endl;

        else
            {cout<<"Far away from the right answer!"<<endl;}
        cout<<"Guess again"<<endl;
        if(number_entered<number)
            cout<<"The right number is greater than your guess!"<<endl;
        else
            cout<<"The right number is smaller than your guess!"<<endl;
        cin>>number_entered;
        attempts++;
    }
    //tell the result
    if (number_entered==number)
    cout<<"RIGHT,GOOD JOB!"<<number<<endl;
    else cout<<"Hard luck!\n The true number is "<<number<<endl;
    cout<<number<<endl;
    return 0;
}
