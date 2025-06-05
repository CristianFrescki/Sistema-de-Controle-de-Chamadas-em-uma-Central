#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int main() {
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar chamada\n");
        printf("2. Atender chamada\n");
        printf("3. Mostrar chamadas\n");
        printf("4. Verificar se a fila est� vazia\n");
        printf("5. Obter tamanho da fila\n");
        printf("6. Buscar chamada na fila\n");
        printf("7. Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);
        getchar(); 

        switch (opcao) {
            case 1:
                adicionarChamada();
                break;
            case 2:
                atenderChamada();
                break;
            case 3:
                mostrarChamadas();
                break;
            case 4:
                if (filaVazia()) {
                    printf("A fila est� vazia.\n");
                } else {
                    printf("A fila n�o est� vazia.\n");
                }
                break;
            case 5:
                printf("Tamanho da fila: %d chamadas\n", tamanhoFila());
                break;
            case 6: {
                char nome[50];
                printf("Digite o nome do respons�vel pela chamada para buscar: ");
                fgets(nome, sizeof(nome), stdin);
                nome[strcspn(nome, "\n")] = 0; 
                int pos = buscarChamada(nome);
                if (pos != -1) {
                    printf("Chamada de '%s' encontrada na posi��o %d da fila.\n", nome, pos);
                } else {
                    printf("Chamada de '%s' n�o encontrada na fila.\n", nome);
                }
                break;
            }
            case 7:
                liberarFila();
                printf("Saindo do sistema.\n");
                break;
            default:
                printf("Op��o inv�lida. Tente novamente.\n");
        }
    } while (opcao != 7);

    return 0;
	
	
	return 0;
}
