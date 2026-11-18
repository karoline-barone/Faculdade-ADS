# Projeto Prático: Catálogo de Jogos Digitais (TAD com Persistência em C)

## 1. Identificação da Dupla
* **Aluno(a) 1:** Karoline Barone Semolini          **RA:** 1630482613004
* **Aluno(a) 2:** Vinicius de Andrade Souza Rosa    **RA:** 1630482613035

---

## 2. Motivo da Escolha do Tema
A escolha pelo tema **Catálogo de Jogos Digitais** deu-se pelo interesse comum da dupla na área de entretenimento digital e desenvolvimento de software voltado para gerenciamento de inventários de mídia. O modelo permite estruturar de forma clara atributos variados (como códigos numéricos, strings para títulos e desenvolvedoras, preços em ponto flutuante e contagem de horas jogadas), além de viabilizar relatórios estatísticos analíticos interessantes, como o cálculo da média de preços e a identificação do jogo com maior tempo de dedicação.

---

## 3. Modelagem do Problema e Arquitetura
O sistema foi desenvolvido aplicando o conceito de **Tipo Abstrato de Dados (TAD)** e estruturado de forma modular em três arquivos principais:
* **`jogo.h` (Interface):** Contém a definição da `struct Jogo`, as constantes (`#define MAX 100`), os apelidos de tipos via `typedef` (incluindo o ponteiro `p_jogo`) e os protótipos de todas as funções do sistema.
* **`jogo.c` (Implementação):** Concentra a lógica de manipulação dos dados, alocação dinâmica, persistência em arquivo e relatórios.
* **`main.c` (Aplicação):** Contém a função `main()`, o fluxo principal de navegação via menu interativo (`do-while` com `switch-case`) e as chamadas das rotinas do TAD.

### Gerenciamento de Memória e Persistência
* **Vetor de Ponteiros:** Utilizamos um vetor estático global de ponteiros (`p_jogo v[MAX]`), cujos elementos são inicializados explicitamente como `NULL`.
* **Alocação Sob Demanda:** Novos cadastros alocam memória dinamicamente via `malloc(sizeof(jogo))` apenas para os registros efetivamente inseridos, evitando desperdício de RAM.
* **Persistência em Arquivo Texto:** Ao iniciar, o sistema verifica a existência do arquivo `jogos.txt` e realiza a carga automática dos dados. Ao encerrar a aplicação pela opção de saída, o estado atual do acervo é gravado de forma formatada (`fprintf`), e toda a memória alocada é devidamente liberada com `free()`.

---

## 4. Instruções de Compilação e Execução

### Opção A: Utilizando a IDE CLion
1. Abra o projeto na pasta raiz.
2. Certifique-se de que o ficheiro `CMakeLists.txt` inclui o `jogo.c` no executável (`add_executable(projeto main.c jogo.c)`).
3. Clique no botão de **Play (Run)** verde no canto superior direito para compilar e executar.

### Opção B: Via Terminal (GCC)
Abra o terminal na pasta raiz onde se encontram os ficheiros e execute o comando de compilação:
```bash
gcc main.c jogo.c -o catalogo_jogos
```
* **No Windows:**
  ```bash
  .\catalogo_jogos.exe
* **No Linux/MacOs:**
    ```bash
  ./catalogo_jogos