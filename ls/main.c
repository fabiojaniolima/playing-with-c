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
    int show_attributes = 0; // Quando > que zero irá mostrar se o item é um diretório ou arquivo.
    /*
     * Essa chamada irá herdar o locale padrão do sistema operacional, observe
     * que no segundo parâmetro realizamos uma chamada vazia. Se você passar NULL
     * estará desativando a herança de local.
     */
    setlocale(LC_ALL, "");

    for (int i = 0; i < argc; i++)
    {
        if (strstr(argv[i], "--help") != NULL || strstr(argv[i], "-h") != NULL)
        {
            printf("Lista o conteúdo de um diretório.\n"
                   "Sintaxe: COMANDO [-opção|--opção] [diretório]\n\n"
                   "Opções:\n"
                   "-a  --attributes \tlista se o item é um diretório ou arquivo\n"
                   "-h  --help \t\tAjuda do comando\n");

            exit(0);
        }
        else if (strstr(argv[i], "--attributes") != NULL || strstr(argv[i], "-a") != NULL)
        {
            show_attributes = 1;
            argv[i] = NULL; // Remove --attributes do vetor
        }
    }

    /*
     * argv[0] aponta para o nome do binário chamado, logo temos que olhar para a próxima
     * posição da matrix.
     */
    if (argv[1] == NULL)
    {
        list_directory(".", show_attributes); // se nenhum argumento foi passado olhamos para o diretório corrente.
    }
    else
    {
        list_directory(argv[1], show_attributes); // tenta acessar o diretório especificado na posição 1 da matriz.
    }

    return 0; // a função main retorna um inteiro, então se chegou até aqui retornamos 0 = sucesso.
}
