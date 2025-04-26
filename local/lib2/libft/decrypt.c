#include <stdio.h>
#include "libft.h"
#include <ctype.h>

char rot_13(char c) {
    if (ft_isalpha(c)) {
        char base = islower(c) ? 'a' : 'A';
        return (c - base + 13) % 26 + base;
    }
    return c;
}

int main(void) {
    char *to_decrypt = "Rnpu cebwrpg bs gur 97 Pbzzba Pber pbagnvaf na rapbqrq uvag. Sbe rnpu pvepyr, bayl bar cebwrpg cebivqrf gur pbeerpg uvag arrqrq sbe gur arkg pvepyr. Guvf punyyratr vf vaqvivqhny, gurer vf bayl n cevmr sbe bar fghqrag jvaare cebivqvat nyy qrpbqrq zrffntrf. Nal nqinagntrq crbcyr pna cynl, yvxr pheerag be sbezre fgnss, ohg gur cevmr jvyy erznva flzobyvp. Gur uvag sbe guvf svefg cebwrpg vf: Ynetr pbjf trarebfvgl pbzrf jvgu punegf naq sbhe oybaqr ungf gb qrsl hccre tenivgl ureb";
    int length = ft_strlen(to_decrypt);
    char new[length + 1];
    int i = 0;

    while (i < length) {
        new[i] = rot_13(to_decrypt[i]);
        i++;
    }
    new[length] = '\0';

    printf("%s\n", new);

    return 0;
}

