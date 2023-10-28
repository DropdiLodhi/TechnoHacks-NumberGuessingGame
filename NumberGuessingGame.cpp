#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int NumberGuessingGame()
{
	int score,inputuser;
	cout<<"Welcome to Guess the number game"<<endl;
	cout<<"You have to guess a number between 1 to 100 "<<endl;
	while(true)
	{
		int srand(time(0));
		int secretNumber=rand()%100 +1;
		int totalAttempt=10;
		for(int i=1;i<=10;i++)
		{
			cout<<"Enter the number:";
		    cin>>inputuser;
			if(inputuser == secretNumber)
		    {
			    cout<<"Congratulations!! You won\n"<<inputuser<<" is the secret number"<<endl;
			    cout<<"Thanks for playing......"<<endl;
			    cout<<"Play the game again with us!!"<<endl;
			    break;
		    }
			    else if(inputuser>secretNumber)
			    {
			       cout<<"Too high! Try again "<<endl;
				}
				else if(inputuser<secretNumber)
				{
					cout<<"Too low"<<endl;
				}
				totalAttempt--;
				cout<<totalAttempt<<"\n Attempts left."<<endl;
				if(totalAttempt==0)
				{
					cout<<"You couldn't find the secret number,it was"<<secretNumber<<"You lose the game!!"<<endl;
					cout<<"Please try again.. "<<endl;
				}
		}
	}
   return 0;
}