#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();

int main ()
{ 
	PrintIntro();
	GetGuessAndPrintBack();
	GetGuessAndPrintBack();

	return 0;
}

void PrintIntro()
{
	constexpr int WORLD_LENGTH = 5;
	cout << "Welcom to Bull and Cows, a fun word game." << endl;
	cout << "Can u guess the " << WORLD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}

string GetGuessAndPrintBack()
{
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	cout << "Your guess was: " << Guess << endl;
	cout << endl;
	return Guess;
}