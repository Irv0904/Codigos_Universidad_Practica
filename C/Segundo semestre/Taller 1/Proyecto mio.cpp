#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<cstdlib>

void respuesta1();
void pregunta1_1(int res1);
void pregunta1_2(int res2);
void pregunta1_3(int res3);

void respuesta2();
void pregunta2_1(int res2_1);
void pregunta2_2(int res2_2);
void pregunta2_3(int res2_3);

void LimpiarPantalla();
void vida(int vid);

main(){
	system( "Title Codigazo: Podras adivinar" );
	setlocale(LC_ALL,"");
	int pre;
	printf("Hola...\n");
	printf("Este juego trata sobre adivinar la pregunta o adivinar el resultado.\n");
	printf("Quieres...\nPreguntas sobre:\n\t 1->Cultura General o 2->Preguntas Matematicas...?");
	printf("\nRespuesta: "); scanf("%d",& pre);
	if (pre==1){
		LimpiarPantalla();
		respuesta1();
		}
	else
		LimpiarPantalla();
		respuesta2();
}

void respuesta1(){
	char res1,res2,res3;
	printf("Comenzemos...");
	printf("\n\tpregunta 1...\nDonde esta ubicado el río Nilo?\n");
	printf("1-> Brasil\t2->Camboya\t3->Egipto\nRespuesta: "); scanf("%d",& res1);
	LimpiarPantalla();
	pregunta1_1(res1);
	printf("\n\tpregunta 2...\nQuién es Zeus?\n");
	printf("1-> Un rey\t2->Un Dios\t3->Un Heroe\nRespuesta: "); scanf("%d",& res2);
	LimpiarPantalla();
	pregunta1_2(res2);
	printf("\n\tpregunta 3...\nDe que esta compuesto el agua?\n");
	printf("1->H2O\t2->H3O\t3->CO2\nRespuesta: "); scanf("%d",& res3);
	LimpiarPantalla();
	pregunta1_3(res3);
}

void pregunta1_1(int res1){
	int vid;
		if(res1==3)
			printf("felicidades respuesta correcta...Siguiente Pregunta...\n");
		
		else{
			printf("Vuelva a intentarlo...");
			vida(vid);
		}
}

void pregunta1_2(int res2){
	int vid;
	if(res2==2)
		printf("felicidades respuesta correcta...Ultima Pregunta...\n");
		
	else{
		printf("Uy... no, es incorrecto.\nLa respuesta correcta es las 2.\nZeus fue un dios de la mitologia Griega.");
		vida(vid);
		}
}

void pregunta1_3(int res3){
	int vid;
	if(res3==1){
		printf("Felicidades Ganaste el QUIZ\n");
		LimpiarPantalla();
		printf("Quieres Serguir Jugando??");
		system("Pause");
		main();
	}
	else{
		printf("Uy... no, es incorrecto.\nLa respuesta correcta es las 2.\nZeus fue un dios de la mitologia Griega.");
		vida(vid);
		}
}

void respuesta2(){
	int res2_1,res2_2,res2_3;
	printf("Comenzemos...");
	printf("\nPregunta 1\n Cual es el resultado de la siguiente operacion?\n");
	printf("\t15+18*3+6\n1-75\t2->105\t3->117\nRespuesta: ");scanf("%d",&res2_1);
	LimpiarPantalla();
	pregunta2_1(res2_1);
	printf("\n\tpregunta 2...\nCual es la raiz Cuadrada de 81?\n");
	printf("1-> 8\t2->9\t3->11\nRespuesta: "); scanf("%d",& res2_2);
	LimpiarPantalla();
	pregunta2_2(res2_2);
	printf("\n\tpregunta 3...\nCual es el numero PI?\n");
	printf("1-> 2.1516\t2->3.1617\t3->3.1516\nRespuesta: "); scanf("%d",& res2_3);
	LimpiarPantalla();
	pregunta2_3(res2_3);
}

void pregunta2_1(int res2_1){
	int vid;
		if(res2_1==1)
			printf("felicidades respuesta correcta...Siguiente Pregunta...\n");
		
		else{
			printf("Vuelva a intentarlo...");
			vida(vid);
		}
}

void pregunta2_2(int res2_2){
	int vid;
		if(res2_2==2)
			printf("felicidades respuesta correcta...Siguiente Pregunta...\n");
		
		else{
			printf("Vuelva a intentarlo...");
			vida(vid);
		}	
}

void pregunta2_3(int res2_3){
	int vid;
		if(res2_3==3)
			printf("felicidades respuesta correcta...Siguiente Pregunta...\n");
		
		else{
			printf("Vuelva a intentarlo...");
			vida(vid);
		}	
}

void LimpiarPantalla(){
	if(system("cls") == -1){
		printf("Error al borrar la pantalla.");
	}
}

void vida(int vid){
	for(vid=0;vid>=0;vid--){
		printf("\nTe queda %d vida",vid);		
	}
}
