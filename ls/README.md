# ls

Para entender o propósito deste projeto leia o [README.md]((https://github.com/fabiojaniolima/playing-with-c/blob/master/README.md)) presente na raiz deste repositório.

## Sobre

Este projeto é bem simples, porém, utiliza alguns conceitos bem bacana como a utilização de ponteiros e captura de erros ou exceções. Para este projeto a biblioteca mais relevante utilizada é a **dirent.h**, dedique alguns minutos ao seu estudo.

Algumas referências:
- `dirent.h`: https://github.com/tronkko/dirent/blob/master/README.md https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/dirent.h.html
- `errno.h`: https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/errno.h.html
- `locale.h`: https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/locale.h.html
- `stdlib.h`: https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/stdlib.h.html
- `string.h`: https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/string.h.html

> Este projeto pode ser compilado para Windows, Unix-like, Mac e outros.

## Start

> As instruções abaixo consideram o escopo de um sistema Unix-like, porém, pode ser facilmente adaptado para ser executado em outros sistemas.

Para modificar este código ou compilar seu binário, primeiramente clone este repositório:
```
git clone https://github.com/fabiojaniolima/playing-with-c.git
```

Acesse o subprojeto:
```
cd ./playing-with-c/ls
```

Para compilar:
```
gcc -std=c11 -o my-ls main.c
```
- `gcc`: compilador utilizado, você pode utilizar outro
- `-std`: determina o padrão ou especificação a ser utilizada
- `-o`: arquivo para onde a output do compilador será "jogado"
- `my-ls`: arquivo de saída, ou seja, binário gerado após compilação
- `main.c`: arquivo de entrada ou ponto de entrada

O binário gerado precisa receber permissão de execução, recomendo:
```
chmod 755 ./my-ls
```

Sintaxe:
```
./my-ls [-opção|--opções] [diretório]
```

> Chame o binário passando a opção --help para acessar o resumo de ajuda.

## Licença:

Este repositório em sua forma mais ampla de referência segue o que determina a licença [MIT](https://github.com/fabiojaniolima/playing-with-c/blob/master/LICENSE).
