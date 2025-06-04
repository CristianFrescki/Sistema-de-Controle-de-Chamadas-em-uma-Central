DATA 10/06  Projeto - 02: Sistema de Controle de Chamadas em uma Central
Curso: Ciência da Computação
Disciplina: Estrutura de Dados / Programação em C
Conceitos abordados: Fila, ponteiros, alocação dinâmica, manipulação de estruturas
© Objetivo Geral
Desenvolver um sistema simples, em linguagem C, que simule o controle de atendimento de chamadas em uma central telefônica, utilizando a estrutura de dados do tipo fila (FIFO).
• Funcionalidades obrigatórias
O sistema deve apresentar um menu com as seguintes opções:
1. Registrar nova chamada (Enfileirar)
• O usuário informa o nome da pessoa que está ligando e o motivo da chamada.
• A chamada é adicionada ao final da fila.
2. Atender próxima chamada (Desenfileirar)
o A chamada que estiver na frente da fila é removida e seus dados são exibidos como
"em atendimento".
3. Listar todas as chamadas na fila
• Exibe todos os registros de chamadas na ordem em que foram recebidos.
4. Ver quantidade de chamadas aguardando atendimento
• Exibe o número total de chamadas atualmente na fila.
5. Esvaziar a fila
• Remove todos os registros da fila, liberando a memória alocada dinamicamente.
6. Sair do programa
• 0 programa deve encerrar após liberar toda a memória utilizada.
Estrutura sugerida (alunos podem adaptar)
typedef struct chamada {
char nome[50];
char motivo[100];
struct chamada* prox;
} Chamada;
Requisitos técnicos obrigatórios
• Implementar a fila dinamicamente com alocação de memória (malloc, free).
• Utilizar ponteiros para manipular os elementos da fila.
• Criar funções separadas para as operações principais: o enfileirar()
• desenfileirar()
o listarChamadas()
o quantidadeChamadas()
• esvaziarFila()
Requisitos de teste (sugestão para validação)
• Registrar pelo menos 3 chamadas diferentes.
• Atender uma ou mais chamadas e verificar a fila.
• Confirmar se a contagem de chamadas está correta após cada operação.
• Testar a função de esvaziar a fila e verificar se a memória foi liberada.
•
Encerrar o programa com a fila vazia.
a Dicas e orientações para os alunos
• Inicialize a fila com ponteiros inicio e fim (ou frente e traseira).
• Verifique sempre se malloc() retornou ponteiro válido.
• Cuide das situações especiais: fila vazia, único elemento, esvaziamento completo.
• Use fgets para ler strings com espaços.
• Evite usar variáveis globais - priorize parâmetros e retorno de ponteiros nas funções.
• Teste o código progressivamente: primeiro enfileirar, depois desenfileirar, depois listar.
• Entrega
• Arquivo.c com o código bem organizado e comentado.
• Arquivo .txt ou .pdf com:
• Nome do aluno, matrícula.
