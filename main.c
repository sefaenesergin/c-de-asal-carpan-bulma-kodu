//Sefa Enes Ergin-sefaenesergin@gmail.com
#include <stdio.h>
#include <time.h>
int main(){
    //klavyeden okunan bir sayının asal çarpanları...
    int sayi;
    printf("Lütfen bir sayı giriniz.");
    scanf("%d",&sayi);
    for(int i=2;sayi>1;i++){//2 den az asal çarpan olamayacağından int=2'den başlattık.
        while(sayi%i==0){//bu satırda sayımızı tam bölenlerin kontrolünü sağlıyoruz.
            printf(" %d  \n", i);// asal çarpanı yazdırdığımız satır.
            sayi=sayi/i;// sayının bir tane asal çarpanını bulduğumuz için 'sayi' değerimizi güncelliyoruz.
        }
    }
    return 0;
}
