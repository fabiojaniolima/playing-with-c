/*
 * Este simples exemplo de código realiza a listagem do contéudo de um diretório.
 * Este código é interoperável entre difernetes sistemas: Windows, Linux, Mac e outros.
 */

#include "utils/ls.c" // Importa nossa lib, assim mantemos o main limpo e claro.
 
/*
 * argc: armazena o total (inteiro) de parâmetros passados na chamada do binário final.
 * Este valor será 1 caso o binário seja chamado sem parâmetros adicionais, pois por padrão
 * o nome do próprio binário é passado como parâmetro ao realizar sua execução.
 *
 * *argv um ponteiro do tipo char que aponta para uma matriz contendo os parâmetros/argumentos
 * passados na chamada do binário.
 */
int main(int argc, char *argv[])
{
    /*
     * Essa chamada irá herdar o locale padrão do sistema operacional, observe
     * que no segundo parâmetro realizamos uma chamada vazia. Se você passar NULL
     * estará desativando a herança de local.
     */
    setlocale (LC_ALL, "");

    /*
     * argv[0] aponta para o nome do binário chamado, logo temos que olhar para a próxima
     * posição da matrix.
     */
    if (argv[1] == NULL)
    {
        list_directory("."); // se nenhum argumento foi passado olhamos para o diretório corrente.
    }
    else
    {
        list_directory(argv[1]); // tenta acessar o diretório especificado na posição 1 da matriz.
    }

    return 0; // a função main retorna um inteiro, então se chegou até aqui retornamos 0 = sucesso.
}
