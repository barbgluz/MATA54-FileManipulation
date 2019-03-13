## Descrição Geral do Trabalho
Neste trabalho deverá ser feito um programa para realizar operações sobre registros armazenados em arquivo. O programa permitirá a um usuário inserir, consultar, remover e imprimir registros do arquivo.

Cada registro conterá, além de dados de controle definidos pelo aluno: uma chave, de valor inteiro não negativo; uma cadeia de, no máximo, 20 caracteres, que irá armazenar um nome; e um outro valor inteiro não negativo, que irá armazenar uma idade.

## Observações importantes
O programa deve manter as atualizações em arquivo. A correção levará em consideração que o estado dos dados é persistente. Com isto, um teste pode ser feito, por exemplo, inserindo-se um registro, terminandoa execução do programa e fazendo uma consulta ao registro em nova invocação do programa. Neste caso oregistro deve ainda estar no arquivo.

Adicionalmente, lembre-se de que é assumido que a memória principal é insuficiente para armazenar todosos dados. Portanto, por exemplo, uma implementação que mantenha a estrutura do arquivo em memória(em um vetor, por exemplo) e o salva por completo no arquivo será considerada inaceitável.

O arquivo deve ser armazenado em formato binário.

O trabalho poderá ser feito em equipe de, no máximo, três alunos. A equipe deve procurar implementaro trabalho da forma mais eficiente que conseguirem.

Para realização do trabalho, somente podem ser utilizados recursos da linguagem de programação escolhida e bibliotecas comumente disponíveis com a linguagem. Não podem ser utilizadas bibliotecas queorganizem os arquivos de forma específica.

Além do código do programa, a equipe deve entregar um relatório (formato PDF) indicando: forma de organização do arquivo utilizada pela equipe; descrição sucinta dos algoritmos utilizados para as operações; e descrição do formato de impressão da estrutura do arquivo (ver operação de impressão de arquivo abaixo). O relatório não deve conter mais do que cinco páginas.

## Formato de Entrada e Saída
A entrada conterá uma sequência de operações sobre o arquivo. As operações e seus formatos estão descritos abaixo:

**insere registro**: esta operação conterá quatro linhas. A primeira linha conterá a letra ’i’. A segunda conterá um valor de chave. A terceira conterá uma sequência de até 20 caracteres, que corresponderá ao campo nome. A quarta linha conterá um valor de idade. A sequência de caracteres da terceiralinha conterá qualquer sequência de letras (minúsculas, sem acento, nem cedilha) e espaços, sendo queo primeiro e último caracteres não serão espaço.

Esta operação verifica se já há registro no arquivo na posição indicada pelo índice do registro. Se sim, esta operação gera na saída, em uma mesma linha, a sequência de caracteres ’registro com chaveexistente’. Se não houver registro com a chave indicada, o novo registro é inserido no arquivo. Neste caso, o programa não gera saída.

**consulta registro**: esta operação conterá duas linhas. A primeira linha conterá a letra ’c’. A segundaconterá um valor de chave.
Se houver registro no arquivo com o valor de chave indicado, esta operação gera na saída a sequênciade caracteres `chave:`, seguida de um espaço, seguido do valor da chave, seguido de um espaço, seguidodo valor do nome associado ao registro, seguido de um espaço, seguido pelo valor da idade associada ao registro. Se não houver registro com o valor de chave indicado, esta operação gera na saída a sequênciade caracteres `nao ha registro com chave:`, seguida de um espaço, seguido do valor da chave.

**remove registro**: esta operação conterá duas linhas. A primeira linha conterá a letra ’r’. A segundaconterá um valor de chave.
Se houver registro no arquivo com o valor de chave indicado, esta operação causará a remoção do registro correspondente e não gerará saída. Se não houver um tal registro, esta operação gera na saídaa sequência de caracteres` nao existe registro com chave:`, seguida de um espaço, seguido do valor da chave.

**imprime arquivo**: esta operação conterá apenas uma linha, contendo a letra ’p’. Esta operação imprimirá o arquivo. A forma de impressão do arquivo deve ser definida pela equipe. No entanto, a impressão do arquivo deve deixar claros: a organização do arquivo; e como os registros estão armazena-dos no arquivo (incluindo os campos dos registros).

**término da sequência de comandos**:a sequência de comandos será terminada por uma linha coma letra ’e’.

**Importante**: o programa não deve gerar nenhum caractere a mais na saída, além dos indicados acima.Em particular, o programa não deve conter menus.

Não deve haver espaço entre linhas na saída. A saída deve apresentar os caracteres em letras minúsculas.
