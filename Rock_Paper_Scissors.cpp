#include<iostream>
using namespace std;

int getresult(char ch1, char ch2){
	if(ch1 == ch2){
		return 0;
	}
	else if(ch1 == 'p' &&  ch2 == 'r'){
	       return 1;
	}
	else if(ch1 == 'p' && ch2 == 's'){
		return -1;
	}
	else if(ch1 == 'r' && ch2 == 'p'){
		return -1;
	}
	else if(ch1 == 'r' && ch2 == 's'){
		return 1;
	}
	else if(ch1 == 's' && ch2 == 'p'){
                return 1;
        }else if(ch1 == 's' && ch2 == 'r'){
                return -1;
        }
	return 0;
}
		
int main(){
	string player1,player2;
	cout << "----------------------------------------------" <<endl;
	cout << "Welcome to the rock, paper and scissor game : " << endl;
	cout << "Enter the player1 name : " << endl;
	cin >> player1;
	cout << "Enter the player2 name : " << endl;
	cin >> player2;
	cout << "----------------------------------------------" << endl;
	cout << " r = Rock \n p = paper \n s = scissor" << endl;
	cout << "----------------------------------------------" << endl;
	char player1_choice , player2_choice;
	int p1=0,p2=0;
	int result;
	int rounds;
	int i = 0;
	cout << "Enter the number of Rounds u want to play : ";
	cin >> rounds;
	cout << "----------------------------------------------" << endl;
	while(i < rounds){	
		cout << "Enter player1 and player2 choice : ";
		cin >> player1_choice >> player2_choice;
		//cout << player1 << " = " << player1_choice << " " << p1 << endl;
		//cout << player2 << " = " << player2_choice << " " << p2 << endl;
		if((player1_choice == 'p' || player1_choice == 'r' || player1_choice == 's') && (player2_choice == 'p' || player2_choice == 'r' || player2_choice == 's')){
				result = getresult(player1_choice,player2_choice);
		}
		else{
			cout << "Wrong Input" << endl;
			break;
		}
		if(result == 0){
			//cout << "Game tie between " << player1 << "and" << player2 << endl;
			p1++;
			p2++;
		}
		else if(result == 1){
			//cout << "congratulation " << player1 << " won the game." << endl;
			p1++;
		}
		else{
			//cout << "congratulation " << player2 << " won the game." << endl;
			p2++;
		}
		cout << player1 << " = " << player1_choice << " " << p1 << endl;
                cout << player2 << " = " << player2_choice << " " << p2 << endl;
		cout << "----------------------------------------------" << endl;
		i++;
	}
	cout << player1<< " Point = " << p1 << endl << player2 << " point = " << p2 << endl;
	if(p1 > p2){
		cout << "congratulation " << player1 << " won the game." << "with point " << p1-p2 << endl;
	}
	if(p2 > p1){
		cout << "congratulation " << player2 << " won the game." << "with point " << p2-p1 << endl;
	}
	else{
		cout << "Game tie between " << player1 << " and " << player2 << " with point " << p1 << endl;
	}
	return 0;
}
