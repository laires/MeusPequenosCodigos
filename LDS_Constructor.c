#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

//Algumas solu��es pra serem usadas em lojas de materiais de cosntru��o...  
	void cobertaTelhas();
	void medidaLage();
	void tetoForrado();
	void rendimentoTinta();
	//int menuOp(int op);  

int main(int argc, char* argv[]){
	setlocale(LC_ALL,"");  
	int op = 0;
	 
		                 
do{	
		printf("\t\t\t\t *****TELA USU�RIO*****\n\n");
		printf(" [1]-Coberta De Telhas  [2]-Medida De Lage  [3]-Medida de forro  [4]-Rendimento Tinta	[5]-Sair.\n\n");
	
		printf("Sua Op��o: ");
  	scanf("%d", &op);
	                 
		system("cls");		
		switch(op){	
		case 1:  
		//Calcula quantas telhas ser�o usadas em uma �rea quadrada;  
		cobertaTelhas();		
	break;
	   case 2:
	   //Calcula quanto de material consome uma lage...
	   medidaLage(); 
	break;
	   case 3:
	   //Deve calcular tamanha quantidade e tamanho de placas de forro, para cobertura...
	   tetoForrado();
	break;
	
	   case 4:
	   	//Deve calcular consumo de tinta
	   	rendimentoTinta();
	break;
	   	
	   default:
	   printf("\t\tObrigado por usar meu programa!\n\t    Desenvolvido por Laires De Ara�jo Sales.\n\n");	
	   printf("\t        LIC. EM COMPUTA��O - EAD/UFPB\n\n\n");		
	}
	
	}while(op != 5);
	
		system("pause");
	return 0;
}


	
	//Fun��o que calcula coberta de telhas.
	void cobertaTelhas(){
			float largura = 0, comprimento = 0, area = 0;
			int metroCoberto = 35, quantidadeTelha = 0;
	
			printf("          *****Forne�a informa��o sobre a area a ser coberta:*****\n\n");
	
			printf("     Forne�a largura: ");
			scanf("%f", &largura);
	
			printf("     Forne�a o comprimento: ");
			scanf("%f", &comprimento);
		
			area = largura * comprimento;
			quantidadeTelha = area * metroCoberto;
	
			printf("\n");
			printf("\t\t                 *****Resultado*****\n\n");
			printf("\tA �rea de %.2f metros quadrados, leva %d telhas pra cobrila.\n\n", area, quantidadeTelha);
			printf("\n");
		}
	void medidaLage(){
	   	float largura = 0, comprimento = 0, area = 0, comp_trilho = 0, const2_ = 0.20,const_ = 0.36;
				int quantidadeTelha = 0, quant_lages, quant_trilhos = 0, op = 0;
				//bool truncou = false; 	
	   	printf("          *****Forne�a informa��o sobre as medidas da lage:*****\n\n");
	   	
	printf("     Forne�a largura: ");
	scanf("%f", &largura);
	
	printf("     Forne�a o comprimento: ");
	scanf("%f", &comprimento);
	
	quant_trilhos = largura / const_;
	comp_trilho = comprimento / const2_;
	quant_lages = comp_trilho  * quant_trilhos;
	
	printf("\n");
	printf("                     *****Resultado*****\n\n");
	
	printf("Ser�o usados %d trilhos treli�ados de %.2f metros cada.\n", quant_trilhos, comprimento);
	printf("Ser�o usados tamb�m %d lajotas.\n", quant_lages);
	printf("\n");
	
	}
	
	void tetoForrado(){
		float largura = 0.0, comprimento = 0, area = 0, QuantidadePlacasForro = 0, larguraAmbiente = 0, 
		TotalMetragemPlacas = 0, tamanhoForro = 0, larguraPlacaForro = 0.20, metro_quadrado,
		const2_ = 0.20, medida_tamPlaca = 0;
		int quantidadeArredondadaPlacas = 0, placas = 0, op = 0;
	//bool truncou = false;
	
	printf("        *****Forne�a informa��o sobre as medidas da �rea a ser forrada:*****\n\n");
	     
	printf("     Medidas da area quadrada (largura x comprimento):\n");
	printf("Largura:_");
	scanf("%f", &largura); printf("\n");
	printf("Comprimento:_");
	scanf("%f", &comprimento); printf("\n");
	area = largura * comprimento;
	//Escolhe a medida maior para ser dividida por 0.20, que � a largura padr�o do forro.
		if(largura  > comprimento){
			 QuantidadePlacasForro = largura / const2_;
			 medida_tamPlaca = comprimento;
		}else{
			QuantidadePlacasForro = comprimento / const2_;
			medida_tamPlaca = largura;
			printf("numeros no else. quant: %.2f e medida: %.2f\n", QuantidadePlacasForro, medida_tamPlaca);	
		}
		//Metragem corrida total(Necessidade ainda n�o identificada...)
		//TotalMetragemPlacas = QuantidadePlacasForro * medida_tamPlaca;	
		printf("     Qual o tamanho da placa de forro?: ");
		scanf("%f", &tamanhoForro);
		metro_quadrado = tamanhoForro * const2_;
		TotalMetragemPlacas = area / metro_quadrado;
		 //comprimento tem que ser arredondada pra cima
    //Truncation...
		quantidadeArredondadaPlacas = TotalMetragemPlacas + 1;   
      //quantidadeAreedondadaPlacas = TotalMetragemPlacas + 1;
		  //TotalMetragemPlacas = quantidadePlacas * tamanhoForro; 
    printf("\n");
		printf("\t                    *****Resultado*****\n\n");
	
	printf("\t\tPara cobrir area de %.2f metros quadrados, ser�o usadas %d placas de %.2f metros cada. \n", 
	area, quantidadeArredondadaPlacas, medida_tamPlaca);
	
	printf("\n");
}


	void rendimentoTinta(){
		float largura_parede = 0, altura_parede = 0, area = 0, consumoTinta = 0, rendimento_tinta = 0;
		int demaos = 0;

		printf("          *****Forne�a informa��o sobre as medidas da parede a ser pintada:*****\n\n");
		
		printf("Altura da parede:_ ");
    scanf("%f", &largura_parede);
    
    printf("Largura da parede:_ ");
    scanf("%f", &altura_parede);
    
    printf("Rendimento fabricante:_ ");
    scanf("%f", &rendimento_tinta);
    
    printf("Quantas dem�os?_ ");
    scanf("%d", &demaos);
    
		
		area = (largura_parede * altura_parede) * demaos;
		consumoTinta = area / rendimento_tinta;
		
		 printf("\n");
    printf("                     *****Resultado*****\n\n");
    
    printf("�rea da parede %.2f Ser�o usados %.2f litros de tintas.", area, consumoTinta);
    
    printf("\n\n");
		
		}

