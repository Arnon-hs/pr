#include "List.c"
#include "Logic.c"
#include "Checks.c"
void PrintMenu(){
		int done = 1;
	char c;

	int num;
while(done){

	if(strcmp(menuT,"StartMenu")==0){
	int MaxRows = 2;
	system("clear");
	if(selecRow == 0)	printf("\e[32mНовая база данных\e[0m\n" ); else printf("Новая база данных\n" );
	if(selecRow == 1)	printf("\e[32mЗагрузить\e[0m\n" ); else printf("Загрузить\n" );
	if(selecRow == 2)	printf("\e[32mВыйти\e[0m\n"); else printf("Выйти\n");
	scanf("%s",&c);
	//scanf("%c",&c);
	switch(c){
		case 'w': 
	if(selecRow == MaxRows) selecRow = 0; else selecRow++;
		break;
				case 's': 
	if(selecRow == 0) selecRow = MaxRows; else selecRow--;
		break;
		case '1': 

		break;
		case '2': 

		break;
		case '3': 
	
		break;
		case ' ': 
	switch(selecRow){
			case 0: 

			break;
			case 1: 

			break;
			case 2: 

			break;
		}
		break;
	}

	}
	if(strcmp(menuT,"MainMenu")==0){
	int MaxRows = 5;
	system("clear");
	if(selecRow == 0)	printf("\e[32mСоздать новую запить\e[0m\n" ); else printf("Создать новую запить\n" );
	if(selecRow == 1)	printf("\e[32mСохранить\e[0m\n" ); else printf("Сохранить\n" );
	if(selecRow == 2)	printf("\e[32mВывести\e[0m\n"); else printf("Вывести\n");
	if(selecRow == 3)	printf("\e[32mУдалить\e[0m\n"); else printf("Удалить\n");
	if(selecRow == 4)	printf("\e[32mИзменить\e[0m\n"); else printf("Изменить\n");
	if(selecRow == 5)	printf("\e[32mВыйти\e[0m\n"); else printf("Выйти\n");
	scanf("%s",&c);
	//scanf("%c",&c);
	switch(c){
		case 'w': 
	if(selecRow == MaxRows) selecRow = 0; else selecRow++;
		break;
				case 's': 
	if(selecRow == 0) selecRow = MaxRows; else selecRow--;
		break;
				case '1': 

		break;
	case '2': 
	
		break;
	case '3': 

		break;
	case '5': 
	
		break;
	case '6': 
	
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
		}
		break;
	}

	}
		
}

}


