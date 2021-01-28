#include <iostream>

using namespace std;

int main(){
int attnum;
retrygame:
	char name[50];
	cout << "What is your name, explorer?" << endl;
	cin.getline(name, 50);
	cout << "You better move fast, " << name << " The cave may collapse in any second!" << endl;
	cout << "\n---------------------------------------------------------------------" << endl;

  cout<< "Two paths lay in front of you. The LEFT dark and haunting. The RIGHT bright and promising...\n\n";
	int choiceOne_Path;
	cout << "**What would you like to do?**" << endl;
	cout << "\t >> Enter '1' to go LEFT" << endl;
	cout << "\t >> Enter '2' to go RIGHT" << endl;
	retry:
	cout << "\nEnter your choice: ";
	cin >> choiceOne_Path;
	if(choiceOne_Path == 1)
	{
    
      attnum++;
		cout << "**You run LEFT towards the darkness, but your torch slowly lights up the room...**\n" << endl;
    	cout << "---------------------------------------------------------------------" << endl;

    cout<< "You now see THREE paths of which to take...\n";
    	cout << "**What would you like to do?**" << endl;
	cout << "\t >> Enter '1' to take the LEFT path" << endl;
	cout << "\t >> Enter '2' to take the RIGHT path" << endl;
  cout << "\t >> Enter '3 to take the MIDDLE path" << endl;
  	cout << "\nEnter your choice: ";
  cin >> choiceOne_Path;


  if(choiceOne_Path == 1)
	{
    
     cout << "ded";


	}
  if(choiceOne_Path == 2)
	{
    
    cout << "ded lol";
  }
if(choiceOne_Path == 3)
	{
    
      cout << "YOURE FREEEEEEEEEEEEEEEEEEEEEEEEEEEEEE";
  }
  }
	else if(choiceOne_Path == 2)
	{
    
		cout <<"Maybe ur safe maybe u aint";
      

	}




	else
	{
    
      attnum++;
		cout << "Not an existing choice!! You must hurry for the cave screams and your torch dims ever faster! \n\n Press either '1' or '2', nothing else!" << endl;
		goto retry;
	}
	cout << "\n----------------------Press 1 and ENTER to play again!----------------------\n" << endl;
  int again;
  cin >> again;
  
  if(again == 1 ){
  goto retrygame;
  }
  
  else {
    cout << "Thanks for playing our game! :)";
  }


if (attnum == 5){
  cout << "...your torch losses its final ember...\n\n";
  cout <<"The floor breaks below you as fall to your inevitble doom...";
}



}