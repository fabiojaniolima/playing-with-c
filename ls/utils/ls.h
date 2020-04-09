#include <dirent.h> // Permite obter informações a respeito de arquivos e diretórios
#include <stdio.h>  // Permite lidar com entrada e saída de dados
#include <string.h> // Facilita a manipulação de cadeia de caracteres
#include <stdlib.h> // Permite lidar com alocação de memória, controle de processos, conversões e outras
#include <errno.h>  // Facilita a identificação e anúncio de erros em tempo de execução
#include <locale.h> // Permite definir aspectos de localização (idioma e outros)

/*
 * Protópipo ou definição de função
 *
 * Detalhes:
 * - Recebe como parâmetro um ponteiro do tipo char declarado como uma constante
 * - Não possui retorno
 * - Define uma função estática 
 */
static void list_directory (const char *dirname); // Protótipo de função
