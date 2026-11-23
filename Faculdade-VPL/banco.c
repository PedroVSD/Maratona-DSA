#include <stdio.h>

struct dadosCliente
{
	int numConta;
	char sobrenome[15];
	char primNome[10];
	float saldo;
};

int digitaEscolha(void);
void arquivoTexto(FILE *);
void atualizaRegistro(FILE *);
void novoRegistro(FILE *);
void excluiRegistro(FILE *);
void visualizaContas(FILE *);

int main(void)
{
	FILE *cfPtr;
	int escolha;
	
	if ((cfPtr = fopen( "credito.dat", "r+")) == NULL)
	{
		printf("Arquivo nao pode ser aberto.\n");

		return 1;
	}
	else 
	{
		
		do
		{
			escolha = digitaEscolha();

			switch (escolha) 
			{
				case 1:
					arquivoTexto(cfPtr);
					break;
				case 2 :
					visualizaContas(cfPtr);
					break;
				case 3 :
					atualizaRegistro(cfPtr);
					break;
				case 4:
					novoRegistro(cfPtr);
					break;
				case 5:
					excluiRegistro(cfPtr);
					break;
			}
		} while(escolha > 0 && escolha < 6);
	}
	
	fclose(cfPtr);

	return 0;
}

void visualizaContas(FILE *lePtr)
{
	struct dadosCliente cliente;

	rewind(lePtr);

	printf("%-6s%-16s%-11s%10s\n", "Conta", "Sobrenome", "Nome", "Saldo");

	while (!feof(lePtr))
	{
		int size = fread(&cliente, sizeof(struct dadosCliente), 1, lePtr);

		if (size > 0 && cliente.numConta != 0)
			printf("%-6d%-16s%-11s%10.2f\n", cliente.numConta, cliente.sobrenome, cliente.primNome, cliente.saldo);
	}
}

void arquivoTexto(FILE *lePtr)
{
	FILE *gravaPtr;

	struct dadosCliente cliente;

	if ((gravaPtr = fopen("contas.txt", "w")) == NULL)
	{
		printf("Arquivo nao pode ser aberto.\n");
	}
	else 
	{
		rewind(lePtr);

		fprintf(gravaPtr, "%-6s%-16s%-11s%10s\n", "Conta", "Sobrenome", "Nome", "Saldo");

		while (!feof(lePtr))
		{
			int size = fread(&cliente, sizeof(struct dadosCliente), 1, lePtr);

			if (size > 0 && cliente.numConta != 0)
				fprintf(gravaPtr, "%-6d%-16s%-11s%10.2f\n",cliente.numConta, cliente.sobrenome, cliente.primNome, cliente.saldo);
		}
	}

	fclose(gravaPtr);
}

void atualizaRegistro(FILE *fPtr) 
{
	int conta;
	float transacao;
	struct dadosCliente cliente;

	printf("Digite a conta a atualizar (1 - 100): ");
	scanf("%d", &conta);

	fseek(fPtr, (conta - 1) * sizeof(struct dadosCliente), SEEK_SET);
	fread(&cliente, sizeof(struct dadosCliente), 1, fPtr);

	if (cliente.numConta == 0)
	{
		printf(">> Conta #%d nao contem informações.\n", conta);
	}
	else 
	{

		printf("%-6d%-16s%-11s%10.2f\n\n", cliente.numConta, cliente.sobrenome,cliente.primNome, cliente.saldo);

		printf("Digite debito (+) ou pagamento (-): ");
		scanf("%f", &transacao);

		cliente.saldo += transacao;

		printf("%-6d%-16s%-11s%10.2f\n", cliente.numConta, cliente.sobrenome, cliente.primNome, cliente.saldo);

		fseek(fPtr, (cliente.numConta - 1) * sizeof(struct dadosCliente), SEEK_SET);
		fwrite(&cliente, sizeof(struct dadosCliente), 1, fPtr);
	}
}

void excluiRegistro(FILE *fPtr)
{
	struct dadosCliente cliente, clienteNulo = {0, "", "", 0};
	int numeroConta;

	printf("Digite a conta a atualizar (1 - 100): ");
	scanf("%d", &numeroConta);

	fseek(fPtr, (numeroConta - 1) * sizeof(struct dadosCliente), SEEK_SET);
	fread(&cliente, sizeof(struct dadosCliente), 1, fPtr);

	if(cliente.numConta == 0)
	{
		printf(">> Conta #%d nao exite.\n", numeroConta);
	}
	else
	{
		fseek(fPtr, (numeroConta - 1) * sizeof(struct dadosCliente), SEEK_SET);
		fwrite(&clienteNulo, sizeof(struct dadosCliente), 1, fPtr);

		printf(">> Conta #%d excluida.\n", numeroConta);
	}
}

void novoRegistro(FILE *fPtr)
{
	struct dadosCliente cliente;
	int numeroConta;

	printf("Digite a conta a atualizar (1 - 100): ");
	scanf("%d", &numeroConta);

	fseek(fPtr, (numeroConta - 1) * sizeof(struct dadosCliente), SEEK_SET);
	int size = fread(&cliente, sizeof(struct dadosCliente), 1, fPtr);

	if(size != 0)
	{
		if(cliente.numConta != 0)
		{
			printf(">> Conta #%d ja contem informacoes.\n", cliente.numConta);
		}
	}
	else
	{
		printf("Digite sobrenome, primeiro nome, saldo?\n");
		scanf("%s%s%f", &cliente.sobrenome, &cliente.primNome, &cliente.saldo);

		cliente.numConta = numeroConta;
		fseek(fPtr, (cliente.numConta - 1) * sizeof(struct dadosCliente), SEEK_SET);
		fwrite(&cliente, sizeof(struct dadosCliente), 1, fPtr);
	}
}

int digitaEscolha(void)
{
	int escolhaMenu;

	printf(	"----------------------------\n"
			"Digite sua escolha\n"
			"1 - armazena os dados em um arquivo texto\n"
			"2 - visualiza todas as contas\n"
			"3 - atualiza uma conta\n"
			"4 - adiciona uma conta nova\n"
			"5 - exclui uma conta\n"
			"6 - encerra o programa\n::");
	scanf("%d", &escolhaMenu);

	return escolhaMenu;
}