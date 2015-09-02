#include <iostream>
#include <string>
#include <Windows.h>

void map();


using namespace std;

int main(){
	//Variables
	bool Sniper = false, Assault = false, Counter = false;

	int Team = 3, Team2 = 3;

	char number, letter;
	string clas;
	char sniper[3], sniper2[3], counter[3], counter2[3], assault[3], assault2[3];

	//main
	cout << "PAINTBALL-TACTIX\n";

	map();

	cout << "In this game you have to select a tactic for your Paintball team.\nHere we go!\nExample:\n\nPlease enter a class (Sniper, Assault, Counter): Sniper\nNumber Position: 3 \nLetter Position: 1\n\n{ENTER}";

	cin.get();
	
	system("CLS");

	map();
	
for(int a = 0; a < 2; a++){ // 2 Spieler
	for(int i = 0; i < 3; i++){ //3 Klassen
		cout << "\nPlease enter a class (Sniper, Assault, Counter): ";
		
		if(Sniper == true) cout << "\nExcept Sniper";
		if(Assault == true) cout << "\nExcept Assault";
		if(Counter == true) cout << "\nExcept Counter";

		cin >> clas;

		if(clas == "Sniper"){
			Sniper = true;
			cout << "Number Position: ";
			cin >> number;
			if(number != '1' && number != '2' && number != '3'){ cout << "\nIncorrect number entered!"; i--; Sniper = false;}
			else{
			cout << "\nLetter Position: ";
			cin >> letter;
			if(letter != 'l' && letter != 'm' && letter != 'r'){ cout << "\nIncorrect letter entered!"; i--; Sniper = false;}
			else {
				if(a == 0){
				//sniper = "S" + number + letter;
					sniper[0] = 'S';
					sniper[1] = number;
					sniper[2] = letter;
				}
				else{
					sniper2[0] = 'S';
					sniper2[1] = number;
					sniper2[2] = letter;
				}
			}
			}//Else 
		} //If Sniper

		if(clas == "Assault"){
			Assault = true;
			cout << "Number Position: ";
			cin >> number;
			if(number != '1' && number != '2' && number != '3'){ cout << "\nIncorrect number entered!"; i--; Assault = false;}
			else {
			cout << "\nLetter Position: ";
			cin >> letter;
			if(letter != 'l' && letter != 'm' && letter != 'r'){ cout << "\nIncorrect letter entered!"; i--; Assault = false;}
			else {
				if(a == 0){
					assault[0] = 'A';
					assault[1] = number;
					assault[2] = letter;
				}
				else{
					assault2[0] = 'A';
					assault2[1] = number;
					assault2[2] = letter;
				}
			}
			} //Else
		} //If Assault

		if(clas == "Counter"){
			Counter = true;
			cout << "Number Position: ";
			cin >> number;
			if(number != '1' && number != '2' && number != '3'){ cout << "\nIncorrect number entered!"; i--; Counter = false;}
			else { cout << "\nLetter Position: ";
			cin >> letter;
			if(letter != 'l' && letter != 'm' && letter != 'r'){ cout << "\nIncorrect letter entered!"; i--; Counter = false;}
			else {
				if(a == 0){
				counter[0] = 'C';
				counter[1] = number;
				counter[2] = letter;
				}
				else{
				counter2[0] = 'C';
				counter2[1] = number;
				counter2[2] = letter;
				}
			}
			} //Else
		} //If Counter
		if(clas != "Assault" && clas != "Sniper" && clas != "Counter") {
			cout << "\nFail! Enter :{Sniper, Assault or Counter}\n"; i--; //Scheife soll einmal mehr durchlaufen
		}
		
	}//For
	
		system("CLS");
		map();
		Counter = false;
		Sniper = false;
		Assault = false;
} //For 2 Spieler

		//Positionsvergleich
		if(sniper[1] == sniper2[1] && sniper[2] == sniper2[2]){Team--; Team2--;} //Wenn sie auf gleicher Nummern && Buchstabenzeile sind
		if(assault[1] == assault2[1] && assault[2] == assault2[2]){Team--; Team2--;} //Wenn sie auf gleicher Nummern && Buchstabenzeile sind
		if(counter[1] == counter2[1] && counter[2] == counter2[2]){Team--; Team2--;} //Wenn sie auf gleicher Nummern && Buchstabenzeile sind

		if(sniper[1] == assault2[1] && sniper[2] == assault2[2]){Team--;} //Sniper gegen Assault --> Sniper verliert (Team)
		if(sniper2[1] == assault[1] && sniper2[2] == assault[2]){Team2--;} //Sniper gegen Assault --> Sniper verliert (Team2)
		if(sniper[1] == counter2[1] && sniper[2] == counter2[2]){Team--;} //Sniper gegen Counter --> Sniper verliert (Team)
		if(sniper2[1] == counter[1] && sniper2[2] == counter[2]){Team2--;} //Sniper gegen Counter --> Sniper verliert (Team2)
		if(counter[1] == assault2[1] && counter[2] == assault2[2]){Team2--;} // Assault gegen Counter --> Assault verliert(Team2)
		if(counter2[1] == assault[1] && counter2[2] == assault[2]){Team--;} // Assault gegen Counter --> Assault verliert(Team)

		if(Team == 0 && Team2 == 0){system("CLS"); cout << "\n\nUnentschieden!";}
		else if (Team > Team2){system("CLS"); cout << "Erster Spieler gewinnt!";}
		else {system("CLS"); cout << "Zweiter Spieler gewinnt!";}
		Sleep(5000);
	return 0;
}

void map(){

	cout << "Map:\n"
		<< "################################################################----------------------------------\n"
		<< "#                                                              #                               1  \n"
		<< "#  ######                                              ######  #                               1  \n"
		<< "#  #    #                                              #    #  #                               1  \n"
		<< "#  #    #                                              #    #  #                               1  \n"
		<< "#                                                              #----------------------------------\n"
		<< "#                                                              #                               2  \n"
		<< "#                                                              #                               2  \n"
		<< "#  ######                                              ######  #                               2  \n"
		<< "#                          #        #                          #                               2  \n"
		<< "#                          ##########                          #                               2  \n"
		<< "#                          #        #                          #                               2  \n"
		<< "#  ######                                              ######  #                               2  \n"
		<< "#                                                              #                               2  \n"
		<< "#                                                              #                               2  \n"
		<< "#                                                              #----------------------------------\n"
		<< "#  #    #                                              #    #  #                               3  \n"
		<< "#  #    #                                              #    #  #                               3  \n"
		<< "#  ######                                              ######  #                               3  \n"
		<< "#                                                              #                               3  \n"
		<< "################################################################----------------------------------\n"
		<< "|         |                                          |         |\n"
		<< "|         |                                          |         |\n"
		<< "|         |                                          |         |\n"
		<< "|         |                                          |         |\n"
		<< "|         |                                          |         |\n"
		<< "|         |                                          |         |\n"
		<< "|         |                                          |         |\n"
		<< "|         |                                          |         |\n"
		<< "|         |                                          |         |\n"
		<< "|         |                                          |         |\n"
		<< "|         |                                          |         |\n"
		<< "|   l     |                      m                   |    r    |\n"
		<< "Troups:\n\n1 x Sniper\n3 x Assault\n5 x Counter\n";


}
