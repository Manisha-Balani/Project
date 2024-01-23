#include<iostream>
using namespace std;

#define SIZE 3

int main(){
	string player1,player2;
	cout << "-----------------------" << endl;
	cout << "Welcome to Tic Toe Game" << endl;
	cout << "Enter the player1 name : " << endl;
	cin >> player1;
	cout << "Enter the player2 name : " << endl;
	cin >> player2;
	cout << "-----------------------" << endl;

	int board[SIZE][SIZE];
	int count = 1;
	for(int i = 0; i < SIZE; i++){
		for(int j = 0; j < SIZE; j++){
			board[i][j] = count;
			count++;
		}
	}
	for(int i = 0; i < SIZE; i++){
		for(int j = 0; j < SIZE; j++){
			cout << board[i][j] << "|";
		}
		cout << endl;
	}
	cout << "----------------------" << endl;
	return 0;

}
