/*6. Ordene as letras em ordem alfabética.*/

#include <stdio.h>

void main()
{
    int i, j;
    char palavra[50], copia;

    printf("Digite 10 caracteres: ");

    scanf("%s", palavra);

    for (i = 0; palavra[i] != '\0'; i++)
    {
        for (j = i + 1; palavra[j] != '\0'; j++)
        {
            if (palavra[i] > palavra[j] && palavra[j] != '\0')
            {
                copia = palavra[i];
                palavra[i] = palavra[j];
                palavra[j] = copia;
            }
        }
    }

    printf("%s", palavra);
}
