#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{
    srand(time(0));
    int randomnumber=rand()%100 + 1;
    int guess;
    int attempts = 0;
    cout<<"Welcome to the Number Guessing Game!"<<endl;
    cout<<"I have selected a number between 1 and 100."<<endl;
    cout<<"Can you guess what it is?" <<endl;

    do {
       cout<<"Enter Your Guess:";
       cin >> guess;
       attempts++;

       if(guess > randomnumber){
        cout<<"Too high! Try again."<<endl;
       }
       else if (guess < randomnumber){
        cout<<"Too Low! Try again."<<endl;
       }
       else{
        cout<<"Congratulations! You guessed the correct number in "<< attempts <<" attempts!"<< endl;
       }
    }
    while(guess != randomnumber);
    return 0;
}