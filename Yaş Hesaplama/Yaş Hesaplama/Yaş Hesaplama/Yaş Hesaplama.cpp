// Yaş Hesaplama.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <stdio.h>

int main()
{
    int Dogumyili;
    int yas;
    printf("*Yas Hesaplama Programina Hosgeldiniz*\n");
    printf("Lutfen Dogum Yilinizi giriniz: ");
    scanf_s("%d", &Dogumyili);
    yas = 2022 - Dogumyili;
    printf("Kullanicinin Yasi: %d", yas);

    
    
}

