RELATÓRIO DE ESTRUTURAS DE DADOS
Equipa: Kelvin, Lucas, Emiliano e gabriel

Disciplina: Programação Estruturada e Estrutura de Dados

Professora: Jéssica de Paulo Rodrigues

1. Lista Encadeada (Playlist de Músicas)
Explicação: É uma sequência de elementos onde cada um aponta para o próximo. Como não tem tamanho fixo, podes adicionar ou remover músicas à vontade.

No Código: Cada música é um "nó". Se quiser apagar a música 2, o ponteiro da música 1 simplesmente "pula" a 2 e aponta direto para a 3.

2. Fila - FIFO (Atendimento Bancário)
Explicação: Segue a regra "First In, First Out" (O primeiro que entra é o primeiro que sai). A inserção é sempre no fim e a remoção é sempre no início.

No Código: Representa a Fila do Caixa. O cliente que chega com a senha nº 101 entra no fim da fila. Quando o caixa chama "Próximo", o sistema remove sempre quem está na frente (o mais antigo).

3. Pilha - LIFO (Histórico de Navegação)
Explicação: Segue a regra "Last In, First Out" (O último que entra é o primeiro que sai). Tudo acontece pelo "topo".

No Código: Representa as Páginas, Quando visitas um site novo, ele é "empilhado" no topo. Se clicas em "Voltar", o sistema faz um pop, removendo o site atual para te mostrar o que estava logo abaixo dele.
