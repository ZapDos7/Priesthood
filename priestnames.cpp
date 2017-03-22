#include <stdlib.h>
#include <iostream.h>

int main (void)
{
	char ans1, ans2, ans3,ans4, married, bachelor, dead, polis, salonika, autokef;
	bool married1=false, bachelor1=false;

	cout << "Hello! Welcome to Priest Simulator. Please provide us with basic information. It won't be shared with anyone.\nAre you married?";
	cin >> married;
	if (married == 'Y') married1 = true;
	cout << "Did you study priesthood?";
	cin >> bachelor;
	if (bachelor == 'Y') bachelor1 = true;

	cout << "You are now a diakos/diakonos. Level up?\nY or N";
	cin >> ans1;
	if (ans1 == 'Y')
	{
		cout << "Congratulations! You are now a presvyteros (papas).\nContinue?\nY or N";
		cin << ans2;
		if (ans2 == 'Y')
		{
			cout << "Do you have a base as a patriarhis?\nY or N";
			cin >> ans3;
			if (ans3 == 'Y')
			{
				cout << "Grats! You're an Episkopos!\nDo you have an epikospi (xartofulakio)\nY or N";
				cin >> ans4;
				if ((bachelor1==true)&&(ans4=='Y')) cout << "They call you Theofilestatos.\n";
				else cout << "They call you sevasmiotatos.\n";
			}
			cout << "Are you dead?";
			cin >> dead;
			if (dead == 'Y') cout << "They call you Makaristos\n";
			cout << "Are you Patriarhis Konstantinoupolis?";
			cin >> polis;
			if (polis == 'Y') cout << "They call you Panagiotatos.\n";
			cout << "Are you in charge of Thessaloniki?";
			cin >> salonika;
			if (salonika == 'Y') cout << "They call you Panagiotatos as an exception.\n";
			cout << "Are you in charge of an autokefali church?";
			cin >> autokef;
			if (salonika == 'Y') cout << "They call you Makariotatos.\n";
		}
		else
		{
			cout << "Thanks for playing!\nYou finished the game with level: Papas (2 pts).";
			if ((married1 == true)&&(bachelor1 == false)) cout << "\nThey call you aidesimotatos.\n";
			else if ((married1 == true)&&(bachelor1 == true)) cout << "\nThey call you aidesimologiotatos.\n";
			else if ((married1 == false)&&(bachelor1 == true)) cout << "\nThey call you panosiologiotatos.\n";
			else if ((married1 == false)&&(bachelor1 == false)) cout << "\nThey call you panosiotatos.\n";
		}
	}
	else
	{
		cout << "Thanks for playing!\nYou finished the game with level: Diakos (1 pt).";
		if ((married1 == true)&&(bachelor1 == false)) cout << "\nThey call you ierotatos.\n";
		else if ((married1 == true)&&(bachelor1 == true)) cout << "\nThey call you ierologiotatos.\n";
		else if ((married1 == false)&&(bachelor1 == true)) cout << "\nThey call you panierologiotatos.\n";
		else if ((married1 == false)&&(bachelor1 == false)) cout << "\nThey call you panierotatos.\n";
	}
    return 0;
}