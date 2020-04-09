/*
 * Função que literalmente realiza a listagem do conteúdo de um diretório.
 */

#include "ls.h" // Nosso arquivo de cabeçalho contendo bibliotecas e protótipos.

/*
 * Declaração de função (implementa o protótipo definido em ls.h).
 *
 * Sugestão: para entender sua definição consulte o cabeçalho citado acima.
 */
static void list_directory(const char *dirname)
{
    struct dirent *dir; // Um ponteiro do tipo struct dirent

    /*
     * Em caso de sucesso opendir() retorna um ponteiro do tipo DIR, do contrário
     * retorna NULL.
     */
    DIR *d = opendir(dirname);

    if (d != NULL) // Verifica se foi possível abrir o diretório.
    {
        /*
         * Concluindo com sucesso retorna um ponteiro para um objeto do tipo struct dirent.
         * Em caso de erro um ponteiro nulo é retornado e errno é definido para indicar o erro.
         */
        while ((dir = readdir(d)) != NULL)
        {
            printf("%s\n", dir->d_name);
        }

        closedir(d); // Sempre feche recursos ou arquivos abertos após terminar de usar.
    }
    else
    {
        fprintf (stderr, "Cannot open %s (%s)\n", dirname, strerror (errno));
        exit(EXIT_FAILURE);
    }
}
