#include<iostream>
#include "Header.h"
#include<time.h>
using namespace std;

void Menu_of_actions(Hero & hero, Boss &boss)
{
	srand(time(NULL));

	
	int choice;
	int r = 0;
	do {
		Evil *wolf = new Wolf;
		Evil * goblin = new Goblin;
		Evil * monster = new Monster;
		Evil * witch = new Witch;
		Evil * dragon = new Dragon;

		cout << "\n\t\t\t MENU OF ACTIONS" << endl << endl;
		cout << "Choose :" << endl;
		cout << " 1  -  Show characteristics " << endl;
		cout << " 2  -  Go to the Forest( Attack ) " << endl;
		cout << " 3  -  Shop " << endl;
		cout << " 4  -  Information about Enemies " << endl;
		cout << " 5  -  Special tasks " << endl;
		cout << " 6  -  Show inventar " << endl;
		cout << " 7  -  Exit " << endl;
		cin >> choice;
		system("cls");
		switch (choice)
		{
		case 1:
			Statistics(hero);
			Delete_evils(wolf, goblin, monster, witch, dragon);
			system("pause");
			system("cls");
			break;
		case 2:
			r = rand() % 5;
			if (r == 0) Fight(hero, wolf); 
			if (r == 1) Fight(hero, goblin); 
			if (r == 2) Fight(hero, monster);
			if (r == 3) Fight(hero, dragon);
			if (r == 4) Fight(hero, witch);
			Delete_evils(wolf, goblin, monster,witch,dragon);
			break;
		case 3:
			Shop(hero);
			Delete_evils(wolf, goblin, monster, witch, dragon);
			break;
		case 4:
			 Display_Name(wolf , goblin, monster, witch, dragon);

			Delete_evils(wolf, goblin, monster, witch, dragon);
			break;
		case 5:
			cout << "IF you pressed '5' it means you are ready to beat the most dangerous beasts in your area.\nGo ahead !!!" << endl;
			system("pause");
			system("cls");
			Boss_Fight(hero, boss);
			Delete_evils(wolf, goblin, monster, witch, dragon);
			break;
		case 6:
			hero.Show_inventar();
			Delete_evils(wolf, goblin, monster, witch, dragon);
			break;
		case 7:
			Delete_evils(wolf, goblin, monster, witch, dragon);
			break;
		default:
			Delete_evils(wolf, goblin, monster, witch, dragon);
			break;
		}
	} while (choice != 7 && hero.Get_xp() >= 0);
}