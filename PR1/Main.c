#include <stdio.h>
#include <math.h>

int main(void){
	int f = 0;//Чтобы зациклить выполнение программы
	double h = 0;//Для сравнение с e(штука что проверяет зацыкленость на лям)
	while(f++ < 1000000000){ 
	double varCheck = 0;
	double e = 0.0000001; 

	//fib values
	double fn[2] = {1,1};//устанавливаем значения fib. на 1 проход(по варианту)	
	double answer = 0;

	//fakt
	double answerfak = 1;

	//kvad
	double kv = 3;
	double i = 1;
	do{
		//fib		
		answer = fn[0] + fn[1];
		fn[0] = fn[1];
		fn[1] = answer;

		//fak
		if(i>1)answerfak = answerfak * i;	

		//kvad
		kv = kv * 4;
		h = (answer * kv) ;
		for(int k = 1;k<= i;k++){
			h = h*k;
		}
		h = h / answerfak;//Джамбулат сказал что sqrt разрешён
		varCheck += h / answerfak;
		i++;
	}while (h > e);
}
}
		