//###############################
//#	Created by Alexis MORTELIER	#
//#		All Rights Reserved		#
//###############################
#include <stdafx.h>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>

void main() {
	char sousMenu, sousSousMenu;
	while (1) {
		do {
			system("cls");
			puts("#########################");
			puts("#       Main Menu:      #");
			puts("#########################");
			puts("#     1-Sous Menu 1     #");
			puts("#     2-Sous Menu 2     #");
			puts("#     3-Sous Menu 3     #");
			puts("#     4-Copyrights      #");
			puts("#########################");
			sousMenu = _getch();
		} while (sousMenu != '1' && sousMenu != '2' && sousMenu != '3' && sousMenu != '4');
		switch (sousMenu) {
		case '1':
			system("cls");
			puts("#########################");
			puts("#      Sous Menu 1:     #");
			puts("#########################");
			puts("# Bienvenu dans le sous #");
			puts("#     menu numero 1     #");
			puts("#########################");
			_getch();
			break;
		case '2':
			do {
				system("cls");
				puts("#########################");
				puts("#      Sous Menu 2:     #");
				puts("#########################");
				puts("#   1-Sous Sous Menu 1  #");
				puts("#   2-Sous Sous Menu 2  #");
				puts("#   3-Sous Sous Menu 3  #");
				puts("#########################");
				sousSousMenu = _getch();
			} while (sousSousMenu != '1' && sousSousMenu != '2' && sousSousMenu != '3');
			switch (sousSousMenu) {
			case '1':
				system("cls");
				puts("#########################");
				puts("#    Sous Sous Menu 1:  #");
				puts("#########################");
				puts("# Bienvenu dans le sous #");
				puts("#   sous menu numero 1  #");
				puts("#########################");
				_getch();
				break;
			case '2':
				system("cls");
				puts("#########################");
				puts("#    Sous Sous Menu 2:  #");
				puts("#########################");
				puts("# Bienvenu dans le sous #");
				puts("#   sous menu numero 2  #");
				puts("#########################");
				_getch();
				break;
			case '3':
				system("cls");
				puts("#########################");
				puts("#    Sous Sous Menu 3:  #");
				puts("#########################");
				puts("# Bienvenu dans le sous #");
				puts("#   sous menu numero 3  #");
				puts("#########################");
				_getch();
				break;
			}
		case '3':
			system("cls");
			puts("#########################");
			puts("#      Sous Menu 3:     #");
			puts("#########################");
			puts("# Bienvenu dans le sous #");
			puts("#     menu numero 3     #");
			puts("#########################");
			_getch();
			break;
		case '4':
			system("cls");
			puts("#########################");
			puts("#      Copyrights:      #");
			puts("#########################");
			puts("#       Created By      #");
			puts("#    MORTELIER Alexis   #");
			puts("#########################");
			_getch();
			break;
		}
	}
}