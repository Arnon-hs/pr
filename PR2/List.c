
#include <stdlib.h>
#include "Checks.c"
#include "IList.c"
static struct Type_head head;
void CreateBD(){
	struct Type_head *temp = malloc(sizeof(struct Type_head));
	(*temp).count = 0;
	(*temp).first = 0;
	head =  (*temp);
}
void addlast(struct Type_item *item){
struct Type_item *pt;
if(head.count == 0){
item->next=0;
head.first = item;
head.count = head.count + 1;
}else{
pt = head.first;
while(pt->next != NULL){
	pt = pt->next;
}
item->next=0;
pt->next = item;
head.count = head.count + 1;
}
}
void AddNewItem(){
	struct  Type_item *item = malloc(sizeof(struct Type_item));
	printf("Введите дату (dd.mm.yyyy)\n");
	strcpy((*item).Date,GetStrt(11));
	printf("Введите время начала лекции (hh.mm)\n");
	strcpy((*item).TimeStart,GetStrt(5));
	printf("Введите время конца лекции (hh.mm)\n");
	strcpy((*item).TimeEnd,GetStrt(5));
	printf("Введите номер аудитории\n");
	strcpy((*item).Aud,GetStrt(10));
	printf("Введите фамилию преподователя\n");
	strcpy((*item).Teacher,GetStrt(26));
	addlast(item);
}
void PrintTab(){
	struct Type_item *pt;
		pt = head.first;
		//struct BDHEAD h = *head;
		//int count = h.count;
		printf("|    Дата   |Время|Время| Аудитория|      Преподователь       |\n");
  		while(pt != NULL) {
    	printf("|%11s|%5s|%5s|%10s|%26s|\n",pt->Date,pt->TimeStart,pt->TimeEnd,pt->Aud,pt->Teacher );
    	pt = pt->next; // переход к следующему узлу
  		}
}
void Load(){
	struct Type_item *pt;
	FILE *fp;
	char *name = "save.dat";
	fp = fopen(name, "rb");
		CreateBD();
		int co = 0;
  		while (!feof(fp)){
  			co++;
  		 pt = malloc(sizeof(struct Type_item));
  		 fread(pt, sizeof(struct Type_item),  1, fp);
  		 pt->next=0;
  		 addlast(pt);
  		};
		    fclose(fp);
}
void Save(){
	struct Type_item *pt;
			FILE *fp;
		char *name = "save.dat";
		fp = fopen(name, "wb");
		pt = head.first;
  		while (pt != NULL) {
  		 fwrite(pt, sizeof(struct Type_item),  1, fp);
   		 pt = pt->next; // переход к следующему узлу
  		};
		    fclose(fp);
}
void DelNum(int Num){
	struct Type_item *pt,*p;
	head.count=head.count-1;
	pt = head.first;
	if(Num == 0){
		p =	head.first->next;
		head.first = p;
	}else{
  for(int i=0;i<Num;i++) {
    p = pt;
    pt = pt->next; // переход к следующему узлу
    } 
	p->next = pt->next;
	}

}
void EditNum(int Num){
	if(Num <= head.count){
	struct Type_item *pt,*p;
		struct  Type_item *item = malloc(sizeof(struct Type_item));
	printf("Введите дату (dd.mm.yyyy)\n");
	strcpy((*item).Date,GetStrt(11));
	printf("Введите время начала лекции (hh.mm)\n");
	strcpy((*item).TimeStart,GetStrt(5));
	printf("Введите время конца лекции (hh.mm)\n");
	strcpy((*item).TimeEnd,GetStrt(5));
	printf("Введите номер аудитории\n");
	strcpy((*item).Aud,GetStrt(10));
	printf("Введите фамилию преподователя\n");
	strcpy((*item).Teacher,GetStrt(26));
	if(Num == 0){
		p =	head.first->next;
		item->next =p;
		head.first = item;
	}else{
  for(int i=0;i<Num;i++) {
    p = pt;
    pt = pt->next; // переход к следующему узлу
    } 
    item->next = pt->next;
	p->next = item;
	}
}

}