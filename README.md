Sistema de Galpão Logístico
Um sistema simples em C para gerenciar itens de um galpão logístico. O sistema permite adicionar, listar e remover itens armazenados, utilizando uma estrutura de dados em memória e uma interface de linha de comando. Esse projeto é ideal para fins educativos e de demonstração, oferecendo uma base para sistemas de gestão de inventário.

📜 Funcionalidades
Adicionar Itens: Insira nome, quantidade e preço de cada item.
Listar Itens: Exibe todos os itens cadastrados com suas informações.
Remover Itens: Permite a remoção de um item específico pelo índice informado.
🛠 Estrutura do Código
Este sistema é composto por um único arquivo C que implementa as funcionalidades básicas de um sistema de gestão de estoque. Os dados são armazenados em um array na memória, e o número máximo de itens é definido por uma constante MAX_ITENS (100 por padrão).

Estrutura de Dados
A estrutura Item representa um item do galpão:


typedef struct {
    char nome[50];
    int quantidade;
    float preco;
} Item;


Funções

adicionarItem: Função para adicionar novos itens ao galpão.
listarItens: Exibe todos os itens armazenados, com nome, quantidade e preço.
removerItem: Remove um item específico, identificado por seu índice.


⚙️ Dependências
Compilador C: Este projeto usa apenas bibliotecas padrão da linguagem C, então qualquer compilador C moderno (como GCC ou Clang) deve ser suficiente.
Sistema Operacional: Compatível com Linux, Windows e macOS, com a condição de ter um terminal para execução e compilação.
