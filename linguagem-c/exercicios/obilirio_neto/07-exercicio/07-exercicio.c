//programa que calcula media final de acordo com as diretrizes da escola e escreve a sua media final e situação:
// aprovado, recuperação, reprovado. 6 ou mais, aprovado, 4 ou menos, reprovado.

#include <stdio.h>

int main(void){
	//declarar variaveis
	int t1, t2, t3; // trabalhos
	int p1, p2, p3; // provas
	float mediatrabs, mediaprovs;
	float mediatotal;

	//solicitador dados dos trabalhos, e das provas.
	printf("Informe as notas dos trabalhos: ");
	scanf("%d %d %d", &t1, &t2, &t3);

	printf("Informe as notas das provas: ");
	scanf("%d %d %d", &p1, &p2, &p3);

	//processar media dos trabalhos e das provas. e a media total.
	mediatrabs = (t1 + t2 + t3)/(float) 3;
	mediaprovs = (p1 + 2*p2 + 3*p3)/ (float) 6;
	mediatotal = (mediatrabs + mediaprovs)/2;

	// comparar e decidir, por fim, imprimir.
	if (mediatotal >=6){
	printf("Aprovado com %.2f", mediatotal);
	}

	else if(mediatotal <=4){
	printf("Reprovado com %.2f", mediatotal);
	}

	else
	printf ("Recuperação com media de %.2f\n", mediatotal);

	//fim

return 0;}

