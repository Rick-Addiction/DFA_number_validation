#include <stdio.h>



//NOME: HENRIQUE RACHTI ASSUMPÇÃO - 31580548
//      BRUNO CESAR SALGADO       - 31544010 





void scanner();
int main(){

char x[] = "";
while(x != "q"){

char entrada[10000];
printf("Digite um numero inteiro ou com ponto flutuante:\n");
scanf("%s", entrada);
int retorno=sscanner(entrada);

if(retorno)
printf("Aceita a palavra\n");
else
printf("Nao aceita a palavra\n");
scanf("%s",x);
}



}

int sscanner(char entrada[]){
		int i=0;//variavel para executar iteracao
		q0: if	(entrada[i]=='0'||entrada[i]=='1'||entrada[i]=='2'||entrada[i]=='3'||entrada[i]=='4'||entrada[i]=='5'||entrada[i]=='6'||entrada[i]=='7'||entrada[i]=='8'||entrada[i]=='9'){
				i++;
				
				goto q1;
			}
			else	if	(entrada[i]=='+'||entrada[i]=='-'){
				i++;
				goto q2;
			}
			else	if	(entrada[i]=='.'){	
			    goto q3;}
			return 0;
		q1: if	(entrada[i]=='0'||entrada[i]=='1'||entrada[i]=='2'||entrada[i]=='3'||entrada[i]=='4'||entrada[i]=='5'||entrada[i]=='6'||entrada[i]=='7'||entrada[i]=='8'||entrada[i]=='9'){
				i++;
				goto q1;
			}
			else	if	(entrada[i]=='+'||entrada[i]=='-'){	
			    goto q3;
			}
			else	if	(entrada[i]=='.'){
				i++;
				goto q4;
			}
		return 1;	
		q2: if	(entrada[i]=='0'||entrada[i]=='1'||entrada[i]=='2'||entrada[i]=='3'||entrada[i]=='4'||entrada[i]=='5'||entrada[i]=='6'||entrada[i]=='7'||entrada[i]=='8'||entrada[i]=='9'){
				i++;
				goto q1;
			}
			else	if	(entrada[i]=='+'||entrada[i]=='-'||entrada[i]=='.'){
			    goto q3;
			}
			return 0;
		q3: if	(entrada[i]=='0'||entrada[i]=='1'||entrada[i]=='2'||entrada[i]=='3'||entrada[i]=='4'||entrada[i]=='5'||entrada[i]=='6'||entrada[i]=='7'||entrada[i]=='8'||entrada[i]=='9'||entrada[i]=='+'||entrada[i]=='-'||entrada[i]=='.'){								
				return 0;
			}
		
		q4: if	(entrada[i]=='0'||entrada[i]=='1'||entrada[i]=='2'||entrada[i]=='3'||entrada[i]=='4'||entrada[i]=='5'||entrada[i]=='6'||entrada[i]=='7'||entrada[i]=='8'||entrada[i]=='9'){
				i++;
				goto q4;
			}
		else	if	(entrada[i]=='+'||entrada[i]=='-'||entrada[i]=='.'){
			    goto q3;
			}
		return 1;
	
	return 0;
	
}

	

