# 📊 Sistema de Cadastro e Média de Notas em C++

Este é um projeto simples desenvolvido para fins de estudo e prática inicial na linguagem **C++**. O programa solicita ao usuário o nome de um aluno e suas três notas escolares, calcula a média aritmética final e determina se o aluno foi **Aprovado** ou **Reprovado**.

---

## 🚀 Funcionalidades

- **Entrada de Dados:** Recebe o nome do aluno e 3 notas individuais.
- **Processamento:** Calcula a média aritmética das notas.
- **Estrutura Condicional:** Avalia a situação do aluno com base na média obtida (Média mínima para aprovação: `7.0`).
- **Compatibilidade:** Código ajustado para rodar perfeitamente em ambientes como **Code::Blocks** e terminais Windows/Linux.

---

## 🛠️ Tecnologias Utilizadas

- **Linguagem:** C++
- **Bibliotecas Padrão:**
  - `<iostream>` — Manipulação de entrada e saída de dados (`cin`, `cout`).
  - `<string>` — Manipulação de texto para armazenar o nome do aluno.
  - `<cstdlib>` — Execução de comandos do sistema (como `system("pause")`).

---

## 💻 Como Executar o Projeto

### Opção 1: Utilizando o Code::Blocks (Recomendado para Iniciantes)

1. Abra o **Code::Blocks**.
2. Vá em **File > New > Project...**
3. Escolha **Console Application** e selecione a linguagem **C++**.
4. Defina um nome para o projeto e conclua o assistente.
5. No painel esquerdo (*Management*), abra a pasta `Sources` e clique duas vezes no arquivo `main.cpp`.
6. Substitua o conteúdo do arquivo pelo código da aplicação.
7. Pressione a tecla **F9** (ou clique no ícone de engrenagem com a seta verde) para **Compilar e Rodar**.

> **Atenção:** Certifique-se de salvar o arquivo com a extensão `.cpp`. Se o arquivo for salvo como `.c`, o compilador tentará compilar como C puro e exibirá o erro `fatal error: iostream: No such file or directory`.

---

### Opção 2: Linha de Comando (GCC/G++)

Caso tenha o compilador `g++` instalado no seu terminal:

1. Clone este repositório:
   ```bash
   git clone [https://github.com/seu-usuario/nome-do-seu-repositorio.git](https://github.com/seu-usuario/nome-do-seu-repositorio.git)
