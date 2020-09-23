/*
#include<stdio.h>
int main()
{
    int saniye, dakika, saat;
    double sonuc;
    scanf("%d %d %d",saat,dakika,saniye);
    printf("Girilen saat değerleri %d saat, %d dakika, %d saniye olarak girdiniz. Simdi cevirme islemini yapiyorum. ",saat, dakika, saniye);
    printf("Cevrilen deger: ", saat*3600+60*dakika+saniye);



    return 0;
}
*/
/*
 *
#include<stdio.h>
int main(){
     double x,v;
     scanf("%lf %lf",&x,&v);
     printf("%lf",x/v);
     return 0;

}
*/
/*
#include<stdio.h>
int main()
{
    int pi=3.14;
    double r=0;
    scanf("%lf,",&r);
    printf("Alani: %lf ",4*pi*r*r);
    printf("Hacmi: %lf ",4*pi*r*r*r/3);
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int saat, dakika;
    scanf("%d,%d",&saat,&dakika);
    printf("%d",saat*30-6*dakika);
    return 0;




}
*/
/*
#include<stdio.h>
int main()
{

    double a,b,c,d,e;
    scanf(" %lf %lf %lf %lf %lf ", &a, &b, &c, &d, &e);
    printf("%lf sayinin ortalamasi ",(a+b+c+d+e)/5);




    return 0;



}
*/
/*
#include<stdio.h>
int main()
{
    /* size NxN 'lik bir matris verilsin. Matrisin içi (0,0) başlamak üzere soldan sağa artan sayılar yazılsın. ve aynı şekilde alta devam edilsin.
     * verilen sayılar hangi satır ve sutunda olduğunu gösteren isteniyor. Bize verilen ise, NxN deki N sayısı ve ikincisi ise sayının kaç olduğudur.
     * programı yazınız.
     * Her bir satır N adet sayıdan oluştuğundan verilen sayı N'ye bölünürse, kaç satır geçtiğini bulunur. N ye bölünürse kaç satır geçtiği bulunur.
     * Ancak satır numarası için 1 eklenmesi gerekir. Örneğin 2 sayısı 2/5=0 çıkar Ancak satır numarasına 1 eklenmelidir
     * Benzer şekilde, sayı N'ye tam bölünüyorsa en baştaki sütunda, N'ye bölümünden kalan 1 ise ikinci sütunda... Haliyle sütunu bulmak için sayının N'ye bölümünden kalana 1 eklemek gerekir.
     * */
/*
int N, sayi;
scanf("%d, %d ",&N,&sayi);
printf("%d %d \n", sayi/N+1, sayi%N+1);


return 0;
}
*/
/*
 *

#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("%d %d %d %d \n" ,a,d,b,c);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{*/
    /*
     * bir doğum günü kutlamasına, N kişi gelmiştir. Kutlama hakkında ertesi gün 5 farklı köşe yazısı çıkmıştır.
     * Yazarlar, yazıları içersinde gelen kişi saysını tahmini olarak vermişlerdir. Size metrekareye düşen insan sayısı veriliyor. Buna göre
     * yazarların, yazılarında verilen kişi sayılarının gerçekliğe yaknlığını bulan programı yazınız. Verilen ilk sayı kutlamasının kaç metrekarede yapıldığını, ikinci sayı ise kaç metrekareye düşen insan sayısıdır. Sonraki 5 sayı ise yazarların belirttiği sayıyı göstermektedir.
     * */
     /*
    int n,x,y;
    int a,b,c,d,e;
    scanf("%d %d",&x,&y);
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    n=x*y;
    printf("%d %d %d %d %d",a-n,b-n, c-n,d-n,e-n);
    return 0; 
}

*/
/*

#include<stdio.h>
int main(){
    int sayi;
    int a,b,c,d;
    scanf("%d",&sayi);
    a=(sayi/1000)%10;
    b=(sayi/100)%10;
    c=(sayi/10)%10;
    d=(sayi/1)%10;
    printf("%d", a+b+c+d);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int a,b;
    printf("a ve be degerlerini giriniz:\n");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("a>b");
        
    }
    if(a<b)
    {
        printf("a<b");
    }
    if(a==b)
    {
        printf("a=b");
        
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    bas:
    int a;
    printf("0 ile 100 arasinda deger giriniz:\n");
    scanf("%d",&a);
    if(a>=1000)
        printf("a sayisi 4 basamaklidir \n");
        else if(a>=100)
            printf("a sayisi 3 basamaklidir\n");
            else if(a>=10)
                printf("a sayisi 2 basamaklidir.\n");
                else if(a>1)
                    printf("a bir basamaklidir \n");
                    else 
                        printf("a sayisi ya 9999 büyük ya da negatif sayidir.\n");
                        goto bas;
    
    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int i=3, j=4, k=5,m=2;
    printf("%d",!k);
    printf("%d",!(k-m-i));
    printf("%d",!(j>i));
    printf("%d",k+j>=i+m&&j==0);
    printf("%d",k<=m||k==m+i);
    
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
     
    int a,b,c;
    printf("a,b,c deger giriniz:");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a<b && b<c)
        printf("a<c \n");
    if(a>0 || b>0 || c>0)
        printf("En az birisi sifirdan farklidir.");
        
     
    return 0;
}
*/
/*
 * 
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("a ve b degerlerini giriniz: ");
    scanf("%d %d", &a, &b);
    (a>=0)?printf("negatif degil \n"):printf("negatif \n");
    c=((b==0)?0:1);
    printf("b nin dogruluk degeri %d dir.",c);
    return 0;
}
*/
/*
 * 
#include<stdio.h>
int main()
{
    int plaka;
    printf("plaka kodunu giriniz:");
    scanf("%d",&plaka);
    switch(plaka){
        case 1: printf("Adana"); break;
        case 34: printf("İstanbul"); break;
        case 26:printf("Eskişehir"); break;
        case 44:printf("Malatya"); break;
        
    }
    
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    printf("a degerini giriniz:");
    int a;
    scanf("%d",&a);
    switch(a)
    {
        case 3>2: printf("1"); break;
        case 4: printf("4"); break;
        default: printf("bitti.. \n");
        case 2: printf("2"); break;
        case 3: printf("3"); break;
        
    }
    return 0;
}
*/
