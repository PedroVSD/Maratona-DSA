#include <stdio.h>

#define MAX_CARROS 20
#define FRAMES_CICLO 1		

typedef struct _CARRO
{
	float x;
	float y;
	float x_direcao;
	float y_direcao;
	float aceleracao;
	float aceleracao_max;
	float velocidade; 	
	float velocidade_max;
} CARRO;

typedef struct _CORRIDA
{
	CARRO carros[MAX_CARROS];
	int n;
} CORRIDA;

/* Funções para a corrida */
void estado_corrida(CORRIDA *);
void adiciona_carro(CORRIDA *, CARRO);
int tamanho_corrida(CORRIDA *);
void atualiza_corrida(CORRIDA *);

void aceleracao(CARRO *);
void atualiza_carro(CARRO *);
void imprime_carro(CARRO carro);

int main()
{
	char tecla;

	CORRIDA corrida;
	corrida.n = 0;

	CARRO jogador;

	jogador.x = 10;
	jogador.y = 25;
	jogador.x_direcao = 0.5;
	jogador.y_direcao = 0.5;
	jogador.aceleracao = 0;
	jogador.aceleracao_max = 10;
	jogador.velocidade = 0;
	jogador.velocidade_max = 100;

	while(1)
	{
		printf("Ação: ");
		scanf("%c", &tecla);
		if(tecla == 'a')
		{
			int i;
	
			for(i = 0; i < tamanho_corrida(&corrida); i++)
			{
				aceleracao(&(corrida.carros[i]));
			}
		}
		else if(tecla == 's')
		{
			adiciona_carro(&corrida, jogador);
		}
		else if(tecla == 'q')
		{
			break;
		}

		getchar();

		atualiza_corrida(&corrida);
		estado_corrida(&corrida);
	}

	return 0;
}

void estado_corrida(CORRIDA *p_corrida)
{
	int i;
	printf("Estado da Corrida (%d carro(s)):\n", tamanho_corrida(p_corrida));
	
	for(i = 0; i < tamanho_corrida(p_corrida); i++)
	{
		printf("Carro %d:\n", i+1);
		imprime_carro(p_corrida->carros[i]);
	}
}

void imprime_carro(CARRO carro)
{
	printf("x = %f, y = %f\na = %f\bv = %f\n\n", carro.x, carro.y, carro.aceleracao, carro.velocidade);
}

int tamanho_corrida(CORRIDA *p_corrida)
{
	return p_corrida->n;
}

void adiciona_carro(CORRIDA *p_corrida, CARRO carro)
{
	p_corrida->carros[tamanho_corrida(p_corrida)] = carro;
	p_corrida->n++;
}

void atualiza_carro(CARRO *p_carro)
{
	p_carro->velocidade = p_carro->velocidade + p_carro->aceleracao * FRAMES_CICLO;
	
	if(p_carro->velocidade > p_carro->velocidade_max)
		p_carro->velocidade = p_carro->velocidade_max;

	p_carro->x = p_carro->x + p_carro->x_direcao * p_carro->velocidade;
	p_carro->y = p_carro->y + p_carro->y_direcao * p_carro->velocidade;
}

void atualiza_corrida(CORRIDA *p_corrida)
{
	int i;
	
	for(i = 0; i < tamanho_corrida(p_corrida); i++)
	{
		atualiza_carro(&(p_corrida->carros[i]));
	}
}

void aceleracao(CARRO *p_carro)
{
	if(p_carro->aceleracao < p_carro->aceleracao_max)
	{
		p_carro->aceleracao += 1;
	}
}
