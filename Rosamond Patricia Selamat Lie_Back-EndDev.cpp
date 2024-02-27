#include <stdio.h>

int main(){
	

    int mainMenu, subMenu, subsubMenu, convertTo;
    double num1, num2;
    double result;
//    char degrees=176;
//    char operatoR;
	for(int i=1; i<=100;i++){
    	puts("");
	}
    puts("CALCULATOR");
    puts("1) Arithmetic Operation for two variabels(+ - x /)");
    puts("2) Conversion");
    printf("type the number to select >> ");

    scanf("%d", &mainMenu);
    getchar();
    
    for(int i=1; i<=100;i++){
    	puts("");
	}
//    clrscr();
//	system("cls");
    
    if(mainMenu==1){
    	puts("1) Addition");
    	puts("2) Subtraction");
    	puts("3) Multiplication");
    	puts("4) Division");
    	puts("type the number to select >> ");
    	scanf("%d", &subMenu); getchar();
    	
		for(int i=1; i<=100;i++){
    	puts("");
	}
	
    	if(subMenu==1){
    		printf("Input equation in %%d (operation) %%d: \n");
    		scanf("%lf + %lf", &num1, &num2);
    		result=num1+num2;
		}else if(subMenu==2){
			printf("Input equation in %%d (operation) %%d: \n");
    		scanf("%lf - %lf", &num1, &num2);
    		result=num1-num2;
		}else if(subMenu==3){
			printf("Input equation in %%d (operation) %%d: \n");
    		scanf("%lf x %lf", &num1, &num2);
    		result=num1*num2;
		}else if(subMenu==4){
			printf("Input equation in %%d (operation) %%d: \n");
    		scanf("%lf / %lf", &num1, &num2);
    		result=num1/num2;
		}else{
			printf("Invalid Input");
		}
		printf("result    >> %.2lf", result);
		
	}else if(mainMenu==2){
		puts("Select Menu:");
		puts("1) Time Converter");
		puts("2) Temperatur Converter");
		puts("3) Length Converter");
		printf("type the number to select >> ");
		scanf("%d", &subMenu);
		
		for(int i=1; i<=100;i++){
    	puts("");
	}
	
		if(subMenu==1){
			puts("1) Second to Minute");
			puts("2) Second to Hour");
			puts("3) Minute to Second");
			puts("4) Minute to Hour");
			puts("5) Hour to Second");
			puts("6) Hour to Minute");
			printf("type the number to select >> ");
			scanf("%d", &subsubMenu);
			
			for(int i=1; i<=100;i++){
    		puts("");
		}
	
			if(subsubMenu==1){
				printf("second(s) >> ");
				scanf("%lf", &num1);
				printf("%.0lf second(s) = %.2lf minute(s)\n", num1, num1/60);
			}else if(subsubMenu==2){
				printf("second(s) >> ");
				scanf("%lf", &num1);
				printf("%.0lf second(s) = %.2lf hour(s)\n", num1, num1/3600);
			}else if(subsubMenu==3){
				printf("minute(s) >> ");
				scanf("%lf", &num1);
				printf("%.0lf minute(s) = %.2lf second(s)\n", num1, num1*60);
			}else if(subsubMenu==4){
				printf("minute(s) >> ");
				scanf("%lf", &num1);
				printf("%.0lf minute(s) = %.2lf hour(s)\n", num1, num1/60);
			}else if(subsubMenu==5){
				printf("hour(s) >> ");
				scanf("%lf", &num1);
				printf("%.0lf hour(s) = %.2lf second(s)\n", num1, num1*3600);
			}else if(subsubMenu==6){
				printf("hour(s) >> ");
				scanf("%lf", &num1);
				printf("%.0lf hour(s) = %.2lf minute(s)\n", num1, num1*60);
			}else{
				printf("Invalid Input");
			}
			
		}else if(subMenu==2){
			puts("select input type:");
			puts("1) Celcius");
			puts("2) Reamur");
			puts("3) Fahrenheit");
			puts("4) Kelvin");
			printf("type the number to select >> ");
			scanf("%d",&subsubMenu);
			
			for(int i=1; i<=100;i++){
    			puts("");
			}
	
			puts("Convert to ");
			puts("1) Celcius");
			puts("2) Reamur");
			puts("3) Fahrenheit");
			puts("4) Kelvin");
			printf("type the number to select >> ");
			scanf("%d",&convertTo);
			
			for(int i=1; i<=100;i++){
    			puts("");
			}
	
			if(subsubMenu==1){
				if(convertTo==1){
					printf("Celcius >> ");
					scanf("%lf",&num1);
					printf("%.2lf Celcius = %.2lf Celcius\n", num1, num1);
				}else if(convertTo==2){
					printf("Celcius >> ");
					scanf("%lf",&num1);
					printf("%.2lf Celcius = %.2lf Reamur\n", num1, 4*num1/5);
				}else if(convertTo==3){
					printf("Celcius >> ");
					scanf("%lf",&num1);
					printf("%.2lf Celcius = %.2lf Fahrenheit\n", num1, (9*num1/5)+32);
				}else if(convertTo==4){
					printf("Celcius >> ");
					scanf("%lf",&num1);
					printf("%.2lf Celcius = %.2lf Kelvin\n", num1, num1+273);
				}else{
					printf("Invalid Input");
				}
				
			}else if(subsubMenu==2){
				if(convertTo==1){
					printf("Reamur >> ");
					scanf("%lf", &num1);
					printf("%.2lf Reamur = %.2lf Celcius\n", num1, 5*num1/4);
				}else if(convertTo==2){
					printf("Reamur >> ");
					scanf("%lf", &num1);
					printf("%.2lf Reamur = %.2lf Reamur\n", num1, num1);
				}else if(convertTo==3){
					printf("Reamur >> ");
					scanf("%lf", &num1);
					printf("%.2lf Reamur = %.2lf Fahrenheit\n", num1, (9*num1/4)+32);
				}else if(convertTo==4){
					printf("Reamur >> ");
					scanf("%lf", &num1);
					printf("%.2lf Reamur = %.2lf Kelvin\n", num1, (5*num1/4)+273);
				}else{
					printf("Invalid Input");
				}
				
			}else if(subsubMenu==3){
				if(convertTo==1){
					printf("Fahrenheit >> ");
					scanf("%lf", &num1);
					printf("%.2lf Fahrenheit = %.2lf Celcius\n", num1, (num1-32)*5/9);
				}else if(convertTo==2){
					printf("Fahrenheit >> ");
					scanf("%lf", &num1);
					printf("%.2lf Fahrenheit = %.2lf Reamur\n", num1, (num1-32)*4/9);
				}else if(convertTo==3){
					printf("Fahrenheit >> ");
					scanf("%lf", &num1);
					printf("%.2lf Fahrenheit = %.2lf Fahrenheit\n", num1, num1);
				}else if(convertTo==4){
					printf("Fahrenheit >> ");
					scanf("%lf", &num1);
					printf("%.2lf Fahrenheit = %.2lf Kelvin\n", num1, (num1-32)*5/9+273);
				}else{
					printf("Invalid Input");
				}
				
			}else if(subsubMenu==4){
				if(convertTo==1){
					printf("Kelvin >> ");
					scanf("%lf", &num1);
					printf("%.2lf Kelvin = %.2lf Celcius\n", num1, num1-273);
				}else if(convertTo==2){
					printf("Kelvin >> ");
					scanf("%lf", &num1);
					printf("%.2lf Kelvin = %.2lf Reamur\n", num1, 4*(num1-273)/5);
				}else if(convertTo==3){
					printf("Kelvin >> ");
					scanf("%lf", &num1);
					printf("%.2lf Kelvin = %.2lf Fahrenheit\n", num1, 9*(num1-273)/5+32);
				}else if(convertTo==4){
					printf("Kelvin >> ");
					scanf("%lf", &num1);
					printf("%.2lf Kelvin = %.2lf Kelvin\n", num1, num1);
				}else{
					printf("Invalid Input");
				}
				
			}else {
				printf("Invalid Input");
			}
		}else if(subMenu==3){
			puts("select input type:");
			puts("1) Kilometer (km)");
			puts("2) Hektometer (hm)");
			puts("3) Dekameter (dam)");
			puts("4) Meter (m)");
			puts("5) Desimeter (dm)");
			puts("6) Centimeter (cm)");
			puts("7) milimeter (mm)");
			printf("type the number to select >> ");
			scanf("%d",&subsubMenu);
			
			for(int i=1; i<=100;i++){
    			puts("");
			}
	
			puts("Convert to:");
			puts("1) Kilometer (km)");
			puts("2) Hektometer (hm)");
			puts("3) Dekameter (dam)");
			puts("4) Meter (m)");
			puts("5) Desimeter (dm)");
			puts("6) Centimeter (cm)");
			puts("7) milimeter (mm)");
			printf("type the number to select >> ");
			scanf("%d",&convertTo);
		
			for(int i=1; i<=100;i++){
    			puts("");
			}
		
		if(subsubMenu==1){
			if(convertTo==1){
				printf("Kilometer >> ");
					scanf("%lf",&num1);
					printf("%.2lf km = %.2lf km\n", num1, num1);
			}else if (convertTo==2){
				printf("Kilometer >> ");
					scanf("%lf",&num1);
					printf("%.2lf km = %.2lf hm\n", num1, num1*10);
			}else if(convertTo==3){
				printf("Kilometer >> ");
					scanf("%lf",&num1);
					printf("%.2lf km = %.2lf dam\n", num1, num1*100);
			}else if(convertTo==4){
				printf("Kilometer >> ");
					scanf("%lf",&num1);
					printf("%.2lf km = %.2lf m\n", num1, num1*1000);
			}else if(convertTo==5){
				printf("Kilometer >> ");
					scanf("%lf",&num1);
					printf("%.2lf km = %.2lf dm\n", num1, num1*10000);
			}else if(convertTo==6){
				printf("Kilometer >> ");
					scanf("%lf",&num1);
					printf("%.2lf km = %.2lf cm\n", num1, num1*100000);
			}else if(convertTo==7){
				printf("Kilometer >> ");
					scanf("%lf",&num1);
					printf("%.2lf km = %.2lf mm\n", num1, num1*1000000);
			}else{
				printf("Invalid Input\n");
			}
			
		}else if (subsubMenu==2){
			if(convertTo==1){
				printf("Hektometer >> ");
					scanf("%lf",&num1);
					printf("%.2lf hm = %.2lf km\n", num1, num1/10);
			}else if (convertTo==2){
				printf("Hektometer >> ");
					scanf("%lf",&num1);
					printf("%.2lf hm = %.2lf hm\n", num1, num1);
			}else if(convertTo==3){
				printf("Hektometer >> ");
					scanf("%lf",&num1);
					printf("%.2lf hm = %.2lf dam\n", num1, num1*10);
			}else if(convertTo==4){
				printf("Hektometer >> ");
					scanf("%lf",&num1);
					printf("%.2lf hm = %.2lf m\n", num1, num1*100);
			}else if(convertTo==5){
				printf("Hektometer >> ");
					scanf("%lf",&num1);
					printf("%.2lf hm = %.2lf dm\n", num1, num1*1000);
			}else if(convertTo==6){
				printf("Hektometer >> ");
					scanf("%lf",&num1);
					printf("%.2lf hm = %.2lf cm\n", num1, num1*10000);
			}else if(convertTo==7){
				printf("Hektometer >> ");
					scanf("%lf",&num1);
					printf("%.2lf hm = %.2lf mm\n", num1, num1*100000);
			}else{
				printf("Invalid Input\n");
			}
			
		}else if (subsubMenu==3){
			if(convertTo==1){
				printf("Dekameter >> ");
					scanf("%lf",&num1);
					printf("%.2lf dam = %.2lf km\n", num1, num1/100);
			}else if (convertTo==2){
				printf("Dekameter >> ");
					scanf("%lf",&num1);
					printf("%.2lf dam = %.2lf hm\n", num1, num1/10);
			}else if(convertTo==3){
				printf("Dekameter >> ");
					scanf("%lf",&num1);
					printf("%.2lf dam = %.2lf dam\n", num1, num1);
			}else if(convertTo==4){
				printf("Dekameter >> ");
					scanf("%lf",&num1);
					printf("%.2lf dam = %.2lf m\n", num1, num1*10);
			}else if(convertTo==5){
				printf("Dekameter >> ");
					scanf("%lf",&num1);
					printf("%.2lf dam = %.2lf dm\n", num1, num1*100);
			}else if(convertTo==6){
				printf("Dekameter >> ");
					scanf("%lf",&num1);
					printf("%.2lf dam = %.2lf cm\n", num1, num1*1000);
			}else if(convertTo==7){
				printf("Dekameter >> ");
					scanf("%lf",&num1);
					printf("%.2lf dam = %.2lf mm\n", num1, num1*10000);
			}else{
				printf("Invalid Input\n");
			}
		
		}else if(subsubMenu==4){
			if(convertTo==1){
				printf("Meter >> ");
					scanf("%lf",&num1);
					printf("%.2lf m = %.3lf km\n", num1, num1/1000);
			}else if (convertTo==2){
				printf("Meter >> ");
					scanf("%lf",&num1);
					printf("%.2lf m = %.2lf hm\n", num1, num1/100);
			}else if(convertTo==3){
				printf("Meter >> ");
					scanf("%lf",&num1);
					printf("%.2lf m = %.2lf dam\n", num1, num1/10);
			}else if(convertTo==4){
				printf("Meter >> ");
					scanf("%lf",&num1);
					printf("%.2lf m = %.2lf m\n", num1, num1);
			}else if(convertTo==5){
				printf("Meter >> ");
					scanf("%lf",&num1);
					printf("%.2lf m = %.2lf dm\n", num1, num1*10);
			}else if(convertTo==6){
				printf("Meter >> ");
					scanf("%lf",&num1);
					printf("%.2lf m = %.2lf cm\n", num1, num1*100);
			}else if(convertTo==7){
				printf("Meter >> ");
					scanf("%lf",&num1);
					printf("%.2lf m = %.2lf mm\n", num1, num1*1000);
			}else{
				printf("Invalid Input\n");
			}
			
		}else if(subsubMenu==5){
			if(convertTo==1){
				printf("Desimeter >> ");
					scanf("%lf",&num1);
					printf("%.2lf dm = %.4lf km\n", num1, num1/10000);
			}else if (convertTo==2){
				printf("Desimeter >> ");
					scanf("%lf",&num1);
					printf("%.2lf dm = %.3lf hm\n", num1, num1/1000);
			}else if(convertTo==3){
				printf("Desimeter >> ");
					scanf("%lf",&num1);
					printf("%.2lf dm = %.2lf dam\n", num1, num1/100);
			}else if(convertTo==4){
				printf("Desimeter >> ");
					scanf("%lf",&num1);
					printf("%.2lf dm = %.2lf m\n", num1, num1/10);
			}else if(convertTo==5){
				printf("Desimeter >> ");
					scanf("%lf",&num1);
					printf("%.2lf dm = %.2lf dm\n", num1, num1);
			}else if(convertTo==6){
				printf("Desimeter >> ");
					scanf("%lf",&num1);
					printf("%.2lf dm = %.2lf cm\n", num1, num1*10);
			}else if(convertTo==7){
				printf("Desimeter >> ");
					scanf("%lf",&num1);
					printf("%.2lf dm = %.2lf mm\n", num1, num1*100);
			}else{
				printf("Invalid Input\n");
			}
			
		}else if(subsubMenu==6){
			if(convertTo==1){
				printf("Centimeter >> ");
					scanf("%lf",&num1);
					printf("%.2lf cm = %.5lf km\n", num1, num1/100000);
			}else if (convertTo==2){
				printf("Centimeter >> ");
					scanf("%lf",&num1);
					printf("%.2lf cm = %.4lf hm\n", num1, num1/10000);
			}else if(convertTo==3){
				printf("Centimeter >> ");
					scanf("%lf",&num1);
					printf("%.2lf cm = %.3lf dam\n", num1, num1/1000);
			}else if(convertTo==4){
				printf("Centimeter >> ");
					scanf("%lf",&num1);
					printf("%.2lf cm = %.2lf m\n", num1, num1/100);
			}else if(convertTo==5){
				printf("Centimeter >> ");
					scanf("%lf",&num1);
					printf("%.2lf cm = %.2lf dm\n", num1, num1/10);
			}else if(convertTo==6){
				printf("Centimeter >> ");
					scanf("%lf",&num1);
					printf("%.2lf cm = %.2lf cm\n", num1, num1);
			}else if(convertTo==7){
				printf("Centimeter >> ");
					scanf("%lf",&num1);
					printf("%.2lf cm = %.2lf mm\n", num1, num1*10);
			}else{
				printf("Invalid Input\n");
			}
			
		}else if(subsubMenu==7){
			if(convertTo==1){
				printf("Milimeter >> ");
					scanf("%lf",&num1);
					printf("%.2lf mm = %.6lf km\n", num1, num1/1000000);
			}else if (convertTo==2){
				printf("Milimeter >> ");
					scanf("%lf",&num1);
					printf("%.2lf mm = %.5lf hm\n", num1, num1/100000);
			}else if(convertTo==3){
				printf("Milimeter >> ");
					scanf("%lf",&num1);
					printf("%.2lf mm = %.4lf dam\n", num1, num1/10000);
			}else if(convertTo==4){
				printf("Milimeter >> ");
					scanf("%lf",&num1);
					printf("%.2lf mm = %.3lf m\n", num1, num1/1000);
			}else if(convertTo==5){
				printf("Milimeter >> ");
					scanf("%lf",&num1);
					printf("%.2lf mm = %.2lf dm\n", num1, num1/100);
			}else if(convertTo==6){
				printf("Milimeter >> ");
					scanf("%lf",&num1);
					printf("%.2lf mm = %.2lf cm\n", num1, num1/10);
			}else if(convertTo==7){
				printf("Milimeter >> ");
					scanf("%lf",&num1);
					printf("%.2lf mm = %.2lf mm\n", num1, num1);
			}else{
				printf("Invalid Input\n");
			}
			
		}else{
			printf("Invalid Input\n");
		}
		
		
	}else{
		printf("Invalid Input\n");
//		scanf("%[^\n]");
//		getchar();
	}
	
}else{
	printf("Invalid Input\n");
//		scanf("%[^\n]");
//		getchar();

}


 return 0;

}