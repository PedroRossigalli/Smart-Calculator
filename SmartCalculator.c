#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>

void cabecalho();
void usarsave();
void savn();

int main(){
	
	setlocale(LC_ALL,"Portuguese"); 
	
	char nome_usuario[15],senha[11],zero[11],tentativasenha[11],sair;
	char save1[10]={'S','a','v','e',' ','1'},save2[10]={'S','a','v','e',' ','2'},save3[10]={'S','a','v','e',' ','3'};
	char save4[10]={'S','a','v','e',' ','4'},save5[10]={'S','a','v','e',' ','5'},save6[10]={'S','a','v','e',' ','6'},save7[10]={'S','a','v','e',' ','7'};
	int opcao=0,control_menu=0,control_senha=0,control_firstnum=0,control_operacoes=1,control_lock=0,caso=0,caso2=0,saveteste=0,i=0,opcaosave,opcao2save;
	double numero=0,numero2=0;
	double save[7]={0,0,0,0,0,0,0};
	float potencia=0;
	int check=0,check1=0,check2=0,check3=0,check4=0,check5=0,check6=0,check7=0,check8=0,check9=0,check10=0,check11=0;
	
	for(i=0;i<1;i-1){
		cabecalho();
		printf("\n Bem vindo(a) a Calculadora Smart!\n\n Por favor, insira seu nome: ");
		gets(nome_usuario);
		if(nome_usuario[0]=='\0'){
			system("cls");
			cabecalho();
			printf("\n Insira um nome válido!!! ");
			getch();
			system("cls");
		}
		else{
			i=1;
		}
	}
	toupper(nome_usuario[0]);
	system("cls");
	fflush(stdin);
	nome_usuario[0]=toupper(nome_usuario[0]);
	cabecalho();
	printf("\n Olá %s!\n\n Para começar, digite uma senha\n (máx. 10 caracteres): ", nome_usuario);
	gets(senha);
	system("cls");
	fflush(stdin);
	while(control_senha==0){
		if(strlen(senha)>10 || senha[0]=='\0'){
			senha[0]='\0';
			cabecalho();
			printf("\n Digite uma senha válida(máx. 10 caracteres): ");
			gets(senha);
			system("cls");
			fflush(stdin);	
		}
		else{
			control_senha=1;
		}
	}
	while(control_menu==0){
		do{
			system("cls");
			cabecalho();
			printf("\n\t      -MENU- \n\n\t 1 - Operações \n\n\t 2 - Números salvos \n\n\t 3 - Trancar \n\n\t 4 - Sair \n\n\n Digite o número da opção desejada: ");
			check=scanf("%i", &caso);
			getchar();
		}while(check!=1);
		if(caso>0 && caso<5){
			system("cls");
			switch(caso){
				case 1:
					if(control_firstnum==0){
						do{
							cabecalho();
							printf("\n Digite um número para começar: ");
							check2=scanf("%lf",&numero);
							getchar();
							system("cls");
							control_firstnum=1;
						}while(check2!=1);
					}
					fflush(stdin);
					control_operacoes=0;
					while(control_operacoes==0){
						do{
							fflush(stdin);
							system("cls");
							cabecalho();
							printf("\n O número atual é: %lf", numero);
							printf("\n\n\t 1 - Somar \n\n\t 2 - Subtrair \n\n\t 3 - Dividir \n\n\t 4 - Multiplicar\n\n\t 5 - Ponteciar\n\n\t 6 - Raiz Quadrada\n\n\t 7 - Usar Número Salvo\n\n\t 8 - Salvar Número \n\n\t 9 - Sair (Número será zerado)\n\n Digite o número da opção desejada: ");
							check3=scanf("%i",&caso2);
							getchar();
						}while(check3!=1);
						if(caso2>0 && caso2<10){
							fflush(stdin);
							switch(caso2){
								case 1:	
									do{	
										system("cls");
										cabecalho();
										printf("\n O número atual é: %lf", numero);							
										printf("\n\n Qual número será somado?: ");
										check4=scanf("%lf",&numero2);
										getchar();
									}while(check4!=1);
									numero=numero+numero2;
								break;
								case 2:
									do{
										system("cls");
										cabecalho();
										printf("\n O número atual é: %lf", numero);	
										printf("\n\n Qual número será subtraído?: ");
										check5=scanf("%lf",&numero2);
										getchar();
									}while(check5!=1);
									numero=numero-numero2;
								break;
								case 3:
									if(numero==0){
										printf("\n É impossível o número 0 ser dividido ");
										getch();
									}
									else{
										do{
											system("cls");
											cabecalho();
											printf("\n O número atual é: %lf", numero);	
											printf("\n\n Qual número dividirá?: ");
											check6=scanf("%lf",&numero2);
											getchar();
										}while(check6!=1);
										numero=numero/numero2;
									}
								break;
								case 4:
									do{
										system("cls");
										cabecalho();
										printf("\n O número atual é: %lf", numero);	
										printf("\n\n Qual número multiplicará?: ");
										check7=scanf("%lf",&numero2);
										getchar();
									}while(check7!=1);
									numero=numero*numero2;
								break;
								case 5:
									do{
										system("cls");
										cabecalho();
										printf("\n O número atual é: %lf", numero);	
										printf("\n\n Qual potência deseja elevar?: ");
										check8=scanf("%f",&potencia);
										getchar();
									}while(check8!=1);
									numero=pow(numero,potencia);
								break;
								case 6:
									numero=sqrt(numero);
								break;
								case 7:
									do{
										system("cls");
										fflush(stdin);
										cabecalho();
										printf("\n O número atual é: %lf", numero);
										printf("\n\n\n\t %s(1) - %lf\n\n\t %s(2) - %lf\n\n\t %s(3) - %lf\n\n\t %s(4) - %lf\n\n\t %s(5) - %lf\n\n\t %s(6) - %lf\n\n\t %s(7) - %lf\n\n",save1,save[0],save2,save[1],save3,save[2],save4,save[3],save5,save[4],save6,save[5],save7,save[6]);
										printf("\n\n Digite o número entre parênteses da opção desejada: ");
										check10=scanf("%i", &opcaosave);
										getchar();
										if(opcaosave<0 || opcaosave>7){
											check10=check10-1;
										}
									}while(check10!=1);
									do{
										system("cls");
										fflush(stdin);
										cabecalho();
										printf("\n Save Escolhido: %lf\n\n Número Atual: %lf\n\n ",save[opcaosave-1],numero);
										usarsave();
										check11=scanf("%i",&opcao2save);
										getchar();
										if(opcao2save<0 || opcao2save>5){
											check11=check11-1;
										}
									}while(check11!=1);
									switch(opcao2save){
										case 1:
											numero=save[opcaosave-1];
										break;
										case 2:
											numero=numero+save[opcaosave-1];
										break;
										case 3:
											numero=numero-save[opcaosave-1];
										break;
										case 4:
											numero=numero*save[opcaosave-1];
										break;
										default:
											if(save[opcaosave-1]!=0){
											numero=numero/save[opcaosave-1];
											}
											else{
												system("cls");
												cabecalho();
												printf("\n Impossível dividr um número por 0 ");
												getch();
												fflush(stdin);
											}
									}
								break;
								case 8:
									do{
										system("cls");
										fflush(stdin);
										cabecalho();
										printf("\n O número atual é: %lf", numero);
										printf("\n\n\n\t %s(1) - %lf\n\n\t %s(2) - %lf\n\n\t %s(3) - %lf\n\n\t %s(4) - %lf\n\n\t %s(5) - %lf\n\n\t %s(6) - %lf\n\n\t %s(7) - %lf\n\n",save1,save[0],save2,save[1],save3,save[2],save4,save[3],save5,save[4],save6,save[5],save7,save[6]);
										printf("\n\n Digite o número entre parênteses da opção desejada: ");
										check9=scanf("%i",&saveteste);
										getchar();
									}while(check9!=1);
									save[saveteste-1]=numero;
									system("cls");
									fflush(stdin);
									if(saveteste>0 && saveteste<8){
										fflush(stdin);
										switch(saveteste){
											case 1:
												savn();
												gets(save1);
												fflush(stdin);	
											break;
											case 2:
												savn();
												gets(save2);
												fflush(stdin);	
											break;
											case 3:
												savn();
												gets(save3);
												fflush(stdin);	
											break;	
											case 4:
												savn();
												gets(save4);
												fflush(stdin);	
											break;
											case 5:
												savn();
												gets(save5);
												fflush(stdin);
											break;	
											case 6:
												savn();
												gets(save6);
												fflush(stdin);	
											break;
											default:
												savn();
												gets(save7);
												fflush(stdin);	
										}
									}
									else{
										cabecalho();
										printf("\n Digite um save válido!!! ");
										getch();
									}
								break;	
								default:
									control_operacoes=1;
									control_firstnum=0;		
							}
						}	
					}
				break;
				case 2:
					cabecalho();
					printf("\n\n\t %s - %lf\n\n\t %s - %lf\n\n\t %s - %lf\n\n\t %s - %lf\n\n\t %s - %lf\n\n\t %s - %lf\n\n\t %s - %lf",save1,save[0],save2,save[1],save3,save[2],save4,save[3],save5,save[4],save6,save[5],save7,save[6]);
					printf("\n\n\n Aperte ENTER para voltar. ");
					getch();
				break;
				case 3:
					control_lock=0;
					while(control_lock==0){
						cabecalho();
						printf("\n Calculadora Trancada! \n\n Digite a senha para desbloquear: ");
						gets(tentativasenha);
						fflush(stdin);
						if(strcmp(tentativasenha,senha)==0){  //se ambas strings forem iguais, retorna 0
							control_lock=1;
						}
						else{
							system("cls");
							cabecalho();
							printf("\n Senha Incorreta!!!");
							getch();
							system("cls");
						}
					}
				break;
				default:
					fflush(stdin);
					cabecalho();
					printf("\n Para Sair digite 'S', para continuar digite qualquer tecla: ");
					scanf("%c",&sair);
					if(sair==toupper('s') || sair=='s'){
						control_menu=1;
					}
			}
		}
		else{
			system("cls");
			cabecalho();
			printf("\n Digite um número válido!!! ");
			getch();
		}
	}
	printf("\nObrigado pela sua visita %s! \nEsperamos que volte mais vezes :) \n", nome_usuario);
	return 0;
}

void cabecalho(){
	printf("\n\t|CALCULADORA SMART|\n");
}

void usarsave(){
	printf("\n 1 - Usá-lo como número atual\n\n\n 2 - Soma-lo com o número atual\n\n\n 3 - Subtraí-lo do número atual\n\n\n 4 - Multiplicá-lo com o número atual\n\n\n 5 - Dividi-lo do número atual\n\n\n Digite o número da opção desejada: ");
}

void savn(){
	cabecalho();
	printf("\n Digite o nome do número\n(máx. 15 caracteres e sem espaço): ");
}
