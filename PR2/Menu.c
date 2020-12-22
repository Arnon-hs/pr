#include "List.c"
#include "Logic.c"

void PrintMenu(char *menuT,int selecRow){
		int done = 1;
	char c;

	int num;
while(done){

	if(strcmp(menuT,"StartMenu")==0){
	int MaxRows = 2;
	system("clear");
	if(selecRow == 0)	printf("\e[36mНовая база данных\e[0m\n" ); else printf("Новая база данных\n" );
	if(selecRow == 1)	printf("\e[36mЗагрузить\e[0m\n" ); else printf("Загрузить\n" );
	if(selecRow == 2)	printf("\e[36mВыйти\e[0m\n"); else printf("Выйти\n");
	c = Getchars();
	//scanf("%c",&c);
	switch(c){
		case 's': 
	if(selecRow == MaxRows) selecRow = 0; else selecRow++;
		break;
		case 'w': 
	if(selecRow == 0) selecRow = MaxRows; else selecRow--;
		break;
		case '1': 
		CreateBD();
		PrintMenu("MainMenu",0);
		break;
		case '2': 
		Load();
		PrintMenu("MainMenu",0);	
		break;
		case '3': 
		done =0;
		break;
		case '\n': 
	switch(selecRow){
			case 0: 
			PrintMenu("MainMenu",0);
			break;
			case 1: 

			break;
			case 2: 
			done = 0;
			break;
		}
		break;
	}

	}
	if(strcmp(menuT,"MainMenu")==0){
	int MaxRows = 5;
	system("clear");
	if(selecRow == 0)	printf("\e[36mСоздать новую запить\e[0m\n" ); else printf("Создать новую запить\n" );
	if(selecRow == 1)	printf("\e[36mСохранить\e[0m\n" ); else printf("Сохранить\n" );
	if(selecRow == 2)	printf("\e[36mВывести\e[0m\n"); else printf("Вывести\n");
	if(selecRow == 3)	printf("\e[36mУдалить\e[0m\n"); else printf("Удалить\n");
	if(selecRow == 4)	printf("\e[36mИзменить\e[0m\n"); else printf("Изменить\n");
	if(selecRow == 5)	printf("\e[36mВыйти\e[0m\n"); else printf("Выйти\n");
	c = Getchars();
	//scanf("%c",&c);
	switch(c){
		case 's': 
	if(selecRow == MaxRows) selecRow = 0; else selecRow++;
		break;
	case 'w': 
	if(selecRow == 0) selecRow = MaxRows; else selecRow--;
		break;
	case '1': 
		AddNewItem();
		break;
	case '2': 
		system("clear");
		Save();
		done = 0;
		break;
	case '3': 
		system("clear");
		PrintTab();
		char b;
		b = Getchars();
		if(b == '1') {done=0; PrintMenu("MainMenu",0);}
		break;
		case '4': 
	    printf("Введите номер которого вы хотите удалить\n");
	    DelNum(atoi(GetStrt(5)));
		break;
	case '5': 
		 printf("Введите номер которого вы хотите изменить\n");
	    EditNum(atoi(GetStrt(5)));
		break;
	case '6': 
	done =0;
		break;
				case '\n': 
	switch(selecRow){
			case 0: 

			break;
			case 1: 

			break;
			case 2: 

			break;
			case 3: 

			break;

			case 4: 

			break;
			case 5: 
			done =0;
			break;
		}
		break;
	}

	}
		
}

}


