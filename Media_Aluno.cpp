


//Se a not
#include<stdio.h>

main(){
	

float nota, notarecuperacao;

printf ("Digite sua nota.");
scanf("%f", &nota);

if(nota>=7){
	printf("Aluno Aprovado.");
} 
else{
	printf("Aluno em recupera��o.");
	printf("Digite a nota da recuperacao:");
    scanf("%f", &notarecuperacao);

      if(notarecuperacao>=7){
	    printf("Aluno Aprovado pela recupera��o.");
       }else{
	     printf("Aluno perdeu de ano.");
       }
    }


}


