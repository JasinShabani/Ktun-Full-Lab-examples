#include <stdio.h>


struct isci{
	char adi[30];
	char soyadi[30];
	int yas;
	double aylik;
};
struct isci fonk(isci yeni){
	gets(yeni.adi);
	gets(yeni.soyadi);
	scanf("%d",&yeni.yas);
	scanf("%lf",&yeni.aylik);
	return yeni;
}
int main(){
	struct isci yepyeni;
	struct isci yen;
	yepyeni=fonk(yen);
	printf("%s",yepyeni.adi);
	printf("%s",yepyeni.soyadi);
	printf("%d",yepyeni.yas);
	printf("%lf",yepyeni.aylik);
	return 0;
}











/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int a;
	srand(time(NULL));
	a =rand()%100;
	printf("%d",a);
	
	
	
	return 0;
}
*/











/*
#include <stdio.h>
struct Ogrenci{
	int vize;
	int final;
	int derskodu;
	float ortalama[5];
};
struct Okul{
	char isim[20];
	struct Ogrenci ogr;
}s[5];

struct Ogrenci fonk(struct Okul s[5]){
	struct Ogrenci ogrr;
	int kac;
	printf("kac ogrenci");
	scanf("%d",&kac);
	for(int i =0;i<kac;i++){
	printf("derskodu? ");
		scanf("%d",&s[i].ogr.derskodu);
		printf("vize? ");
		scanf("%d",&s[i].ogr.vize);
		printf("final? ");
		scanf("%d",&s[i].ogr.final);
		ogrr.ortalama[i]= (float)s[i].ogr.vize*0.4+s[i].ogr.final*0.6;
	}
	return ogrr;
}
int main(){
	struct Ogrenci ogr;
	struct Okul ok[100];
	ogr=fonk(ok);
	for(int i=0;i<2;i++){
		printf("Ortalama====== %3.2f",ogr.ortalama[i]);
	}
	return 0;
}



*/
















/*
#include<stdio.h>



int main(){
	int yildiz=1,bosluk,adet;
	scanf("%d",&adet);
	bosluk=adet-1;
	for(int i=0;i<adet;i++){
		for(int j=0;j<bosluk;j++){
			printf(" ");
		}
		for(int j=0;j<yildiz;j++){
			printf("*");
		}
		yildiz++;
		bosluk--;
		printf("\n");
	}
	
	
	
	
	return 0;
}

*/





















/*
#include<stdio.h>


int main(){
	char metin[200];
	int toplam=0,fark,uzunluk=0;
	fark='a'-'A';
	printf("giriniz");
	gets(metin);
	for(int i=0;metin[i]!='\0';i++){
		uzunluk++;
	}
	for(int i=0;i<uzunluk;i++){
		if(metin[i]>='A'&& metin[i]<='Z'){
			metin[i]+=fark;
		}
	}
	for(int i=0;i<uzunluk;i++){
		if(metin[i]>='a'&& metin[i]<='z'){
			if(i%2!=0){
				metin[i]-=fark;
			}
		}
	}
	printf("%s",metin);
	return 0;
}

*/




















/*
#include <stdio.h>

int asalmi(int asal){
	int deg=0;
	if(asal==1){
		return 0;
	}
	for(int i=2;i<asal;i++){
		if(asal%i==0){
			deg++;
		}
	}
	if(deg<1){
		return 1;
	}
	else{
		return 0;
	}
	
}



int main(){
	int sayi,bul;
	scanf("%d",&sayi);
	bul=asalmi(sayi);
	if(bul){
		printf("sayi asal");
	}
	else{
		printf("degil");
	}
	
	
	
	return 0;
}

*/









/*

#include<stdio.h>
int main(){
	int yildiz=1,bosluk,girdi;
	printf("kac sira cizmek istiyorsunuz");
	scanf("%d",&girdi);
	bosluk=girdi-1;
		if(girdi%2==0){
		}
		for(int j=0;j<=(girdi)/2;j++){
			for(int k=0;k<bosluk;k++){
				printf(" ");
			}
			for(int k=0;k<yildiz;k++){
				printf("*");
			}
			printf("\n");
			yildiz+=2;
			bosluk--;
		}
		yildiz-=4;
		bosluk+=2;
		for(int j=0;j<=(girdi/2);j++){
			for(int k=0;k<bosluk;k++){
				printf(" ");
			}
			for(int k=0;k<yildiz;k++){
				printf("*");
			}
			printf("\n");
			yildiz-=2;
			bosluk++;
		}

	return 0;
}

*/




























/*
#include<stdio.h>
int main(){
	char dizi[200],diziuzunluk=0;
	int fark='a'-'A';
	printf("gir");
	gets(dizi);
	for(int i=0;dizi[i]!='\0';i++){
		diziuzunluk++;
	}
	for(int i=0;i<diziuzunluk;i++){
		if(dizi[i]>='A'&&dizi[i]<='Z'){
			dizi[i]+=fark;
		}
	}
	for(int i=3;i<diziuzunluk;i+=3){
		if(i%2!=0){
			if(dizi[i-1]>='a' && dizi[i-1]<='z')
				dizi[i-1]-=fark;
			if(dizi[i-2]>='a' && dizi[i-1]<='z')
				dizi[i-2]-=fark;
			if(dizi[i-3]>='a' && dizi[i-3]<='z')
				dizi[i-3]-=fark;
		}
		}
	
	for(int i=0;i<diziuzunluk;i++){
		printf("%c",dizi[i]);
	}
	return 0;
}
*/























/*
#include <stdio.h>


int armstrong(int bul){
	int kalan,toplam=0;
	while(bul>0){
		kalan=bul%10;
		bul/=10;
		toplam+=kalan*kalan*kalan;
	}
	return toplam;
}


int main(){
	int gir,gelen;
	printf("3 haneli sayi gir");
	scanf("%d",&gir);
	gelen=armstrong(gir);
	if(gelen==gir){
		printf("sayi armstrong");
	}
	else{
		printf("degil");
	}
	return 0;
}
*/




/*
#include<stdio.h>
#include<conio.h>

int main(){
	int yildiz=1;
	int kac,bosluk;
	
	printf("kac satir bastirmak istiyorsunuz");
	scanf("%d",&kac);
	bosluk=kac-1;
	for(int i=1;i<=kac;i++){
		if(i<kac){
			for (int j=0;j<bosluk;j++){
				printf(" ");
			}
			for (int j=0;j<yildiz;j++){
				printf("*");
		}	
		yildiz+=2;
		bosluk--;
		}else{
			for (int j=0;j<bosluk;j++){
				printf(" ");
			}
			for (int j=0;j<yildiz;j++){
				printf("*");
			}
		yildiz-=2;
		bosluk++;	
		}
		
		
		
		
		printf("\n");
	}
	return 0;
}
*/
/*
#include<stdio.h>
#include<conio.h>

int main(){
	int yildiz=1;
	int kac,bosluk;
	
	printf("kac satir bastirmak istiyorsunuz");
	scanf("%d",&kac);
	bosluk=kac-1;
	for(int i=0;i<kac;i++){
		for (int j=0;j<bosluk;j++){
			printf(" ");
		}
		for (int j=0;j<yildiz;j++){
			printf("*");
		}
		yildiz++;
		bosluk--;
		printf("\n");
	}
	return 0;
}
*/









/*
#include<stdio.h>
#include<conio.h>
struct Kitap
{
	char ad[20];
	int yil;
	int no;
	float fiyat;
	float kazanc=0;
};
struct Kisi
{
	char ad[20];
	struct Kitap kitap;
}sahis[5],yeni;
struct Kitap fonk(struct Kisi sahis[5]){
	struct Kitap kitap;
	for (int i=0;i<2;i++){
		printf("Kisi ad");
		scanf("%s",&sahis[i].ad);
		printf("kitap ad");
		scanf("%s",&sahis[i].kitap.ad);
		printf("no");
		scanf("%d",&sahis[i].kitap.yil);
		printf("no");
		scanf("%d",&sahis[i].kitap.no);
		printf("fiyat");
		scanf("%f",&sahis[i].kitap.fiyat);
		kitap.kazanc += sahis[i].kitap.fiyat;
	}
	return kitap;
}
int main(){
	struct Kitap kitap;
	kitap= fonk(sahis);
	
		printf("kazanc");
		printf("%f",kitap.kazanc);
	return 0;
}
*/




/*
#include<stdio.h>
#include<conio.h>
struct isci{
	char adi[30];
	char soyadi[30];
	int yas;
	double aylikucret;
}yeni;
struct isci bilgigir(struct isci yeni){
	printf("Adiniz");
	scanf("%s",&yeni.adi);
	printf("Soyadiniz");
	scanf("%s",&yeni.soyadi);
	printf("yas");
	scanf("%d",&yeni.yas);
	printf("ucret");
	scanf("%lf",&yeni.aylikucret);
	return yeni;
}
int main(){
	struct isci yeniisci;
	yeniisci = bilgigir(yeni);
	printf("Adiniz: %s\n",yeniisci.adi);
	printf("Soyadiniz: %s\n",yeniisci.soyadi);
	printf("yas: %d\n",yeniisci.yas);
	printf("ucret: %3.2f\n",yeniisci.aylikucret);
	return 0;
}
*/
























/*
#include<stdio.h>
#include<stdlib.h>
void ort(int yuz[100]){
	int ort=0,ortalama,altindami=0;
	for (int i =0;i<100;i++){
		scanf("%d",&yuz[i]);
		ort+=yuz[i];
	}
	ortalama = ort/100;
	for (int i =0;i<100;i++){
		if(yuz[i]<ort){
			altindami+=yuz[i];
		}
	}
	printf("altinda kalan %d",altindami);
}
int main(){
	int yuz[100];
	ort(yuz);
	
	
	return 0;
}
*/

/*
int kumsaati() {
	int bosluksayisi, yildizsayisi, boyut;
	printf("Kac satirlik yildiz olusturulsun?");
	scanf("%d", &boyut);
	if (boyut % 2 == 0) {
		boyut += 1;
	}
	bosluksayisi = 0;
	yildizsayisi = boyut;
	for (int i = 0; i < boyut; i++) {
		for (int j = 0; j < yildizsayisi; j++) {
			printf("*");
		}
		if (i < boyut / 2) {
			bosluksayisi++;
			yildizsayisi -= 2;
		}
		else {
			bosluksayisi--;
			yildizsayisi += 2;
		}
		printf("\n");
		for (int j = 0; j < bosluksayisi; j++) {
			printf(" ");
		}
	}
}*/








/*
#include<stdio.h>
#include<stdlib.h>



struct insan{
	int yas;
}ali;


int main(){
	insan yasin;
	//insan ali;
	insan bilmemkim;
	yasin.yas=15;
	bilmemkim.yas=65;
	printf("%d",bilmemkim.yas);
return 0;	
}


*/





/*
#include<stdio.h>
#include<conio.h>

int main(){
	char cumle[200];
	int uzunlukcumle=0,kelimekontrol=0,anakontrol=0,i,sayac=0,aradakifark;
	printf("cumle gir");
	gets(cumle);
	for (i=0;cumle[i]!='\0';i++){
		uzunlukcumle++;
	}
	aradakifark='a'-'A';
	for (i=0;i<uzunlukcumle;i++){
		if(cumle[i]>='a' && cumle[i]<='z'){
			cumle[i]-=aradakifark;
		}
		else if(cumle[i]>='A' && cumle[i]<='Z'){
			cumle[i]+=aradakifark;
		}
	}
	printf("%s",cumle);
return 0;	
}
*/

/*
#include<stdio.h>
#include<conio.h>

int main(){
	char cumle[200],kelime[200];
	int uzunlukcumle=0,uzunlukkelime=0,kelimekontrol=0,anakontrol=0,i,j,k,sayac=0;
	printf("cumle gir");
	gets(cumle);
	printf("kelime gir");
	gets(kelime);
	for (i=0;cumle[i]!='\0';i++){
		uzunlukcumle++;
	}
	for (i=0;kelime[i]!='\0';i++){
		uzunlukkelime++;
	}
	for (i=0;i<uzunlukcumle;i++){
		if(cumle[i]==kelime[0]){
			kelimekontrol=0;
			k=i;
			for(j=0;j<uzunlukkelime;j++){
				if(cumle[k]==kelime[j]){
					kelimekontrol++;
				}
				k++;
			}
			if(uzunlukkelime == kelimekontrol){
				printf("%d indexten basliyor\n",i);
				anakontrol++;
			}
		}
		
	}
	if(anakontrol<1){
		printf("bulunamadi");
	}
	
	
	
	return 0;
}
*/

/*
#include<stdio.h>
#include<conio.h>

int main(){
	char cumle[200];
	int uzunlukcumle=0,i,sayac=0;
	printf("cumle gir");
	scanf("%[^\n]s",cumle);
	for (i=0;cumle[i]!='\0';i++){
		uzunlukcumle++;
	}
	for (i=0;i<uzunlukcumle;i++){
		if(cumle[i]==32 && cumle[i-1]!=32 && cumle[i+1]!=32){
			sayac++;
		}
		
	}
	if(sayac==0){
		printf("girilmedi");
	}
	else{
		printf("%d kadar kelime var",sayac+1);
	}
	
	
	
	
	return 0;
}
*/




/*
#include<stdio.h>
#include<conio.h>
int main(){
	char cumle[200];
	int aralarindakimesafe,i,cumleuzunluk=0;
	printf("cumle gir");
	gets(cumle);
	for (i=0;cumle[i]!='\0';i++){
		cumleuzunluk++;
	}
	aralarindakimesafe='a'-'A';
	for(i=0;i<cumleuzunluk;i++){
			if(cumle[i]>='A' && cumle[i]<='Z'){
				cumle[i]+=aralarindakimesafe;
			}
			else if(cumle[i]>='a' && cumle[i]<='z'){
				cumle[i]-=aralarindakimesafe;
			}
		
	}
		printf("%s",cumle);
	return 0;
}

*/









/*

#include<stdio.h>
#include<conio.h>
int main(){
	char cumle[200],kelime[200];
	int uzunlukcumle=0,uzunlukkelime=0,i,j,k,kontrolkelime=0,anakontrol=0;
	printf("Cumle gir: ");
	gets(cumle);
	printf("Kelime gir: ");
	gets(kelime);
	for (i=0;cumle[i]!='\0';i++){
		uzunlukcumle++;
	}
	for (i=0;kelime[i]!='\0';i++){
		uzunlukkelime++;
	}
	for (i=0;i<uzunlukcumle;i++){
		if(cumle[i]==kelime[0]){
			kontrolkelime=0;
			k=i;
			for(j=0;j<uzunlukkelime;j++){
				if(cumle[k]==kelime[j]){
					kontrolkelime++;
				}	
				k++;
			}
			if(uzunlukkelime == kontrolkelime){
				printf("%d indexten basliyor",i);
				anakontrol++;
			}
		}	
	}
	if(anakontrol<1){
	
		printf("Bulunamadi");
}
	
	return 0;
}


*/



























/*
#include<stdio.h>
#include<conio.h>

int main(){
	char cumle[200];
	int sayac=1,kelimeuzun=0,i;
	gets(cumle);
	for (i=0;cumle[i]!='\0';i++){
		kelimeuzun++;
	}
	for (i=0;i<kelimeuzun;i++){
		if(cumle[i]==32 && cumle[i-1]!=32 && cumle[i+1]!=32){
			sayac++;
		}
	}
	printf("%d kadar kelime var",sayac);
	
	return 0;
}

*/

















/*
#include<stdio.h>

int main(){
	int i,j,yildiz=1,bosluk=2;
	for(i=1;i<=3;i++){
		for(j=1;j<=bosluk;j++)
			printf(" ");
		for(j=1;j<=yildiz;j++)
			printf("*");
		printf("\n");
		yildiz+=2;
		bosluk--;
	}
	yildiz-=4;
	for(i=1;i<3;i++){
		for(j=1;j<=i;j++)
			printf(" ");
		for(j=1;j<=yildiz;j++)
			printf("*");
		printf("\n");
		yildiz-=2;
	}	
	return 0;
}
*/

/*
#include<stdio.h>


int main(){
	
	int sayi=2,i,j,k;
	for (i=0;i<4;i++){
		for (j=0;j<=i;j++){
			//	printf("%d ",sayi);
			printf("* ");
			//k=++sayi;
			//printf("%d",k);
			//printf("%d",sayi);
		}
		printf("\n");
		//sayi++;
	}
	
	return 0;
}

*/

/*
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int rastgele;
    srand(time(NULL)); 
    rastgele=rand()%100;
    int tahmin;
    int kacdefa=1;
    	do{
    		printf("tahmini sayiniz girni\n");
    		scanf("%d",&tahmin);
    		if(tahmin==rastgele){
    			printf("Bravo be baba ");
    			printf("denemen %d",kacdefa);
			}
			else{
				if(tahmin>rastgele)
					printf("da kucuk gir babus\n");
				else
					printf("babus da buyuk gir\n");
				kacdefa++;
			}
		}while(tahmin!=rastgele);
        
 getch ();
 return 0;
}
*/

/*
//carpim tablosu
#include<stdio.h>
int main(){
	
	for (int i=1;i<=10;i++){
		
		for(int j=1;j<=10;j++){
			
			printf("%dX%d = %d ",i,j,i*j);
		}
		printf("\n");
		
		
	}
	
	return 0;
}
*/

/*
#include<stdio.h>
int main(){
	int sayi,kalan,sonuc;
	scanf("%d",&sayi);
	int orjinalsayi=sayi;
	while(sayi!=0){
		kalan=sayi%10;
		sonuc+=kalan*kalan*kalan;
		sayi/=10;
	}
	if(sonuc==orjinalsayi){
		printf("Armstrong numara");
		printf("%d",sonuc);
	}
	else{
		printf("Degil");
	}
	
	
	return 0;
	
	
}
*/

/*
#include <stdio.h>
int main(){
	int i,j;
	
	for (i=0;i<5;i++){
		
		for (j=0;j<5;j++){
			
			if(i==j || j== (5-i-1))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");	
	}
	return 0;
}

*/
/*

#include<stdio.h>
int main()
{
    //1
    int i,j;
	//int size;
    //2
    //printf("Enter size : ");
    //scanf("%d",&size);
    
    //3
    for(i=0; i < 5 ;i++)
    {
        //4
        for(j=0; j < 5 ;j++)
        {
            //5
            if(i==j || j==(5-i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        //6
        printf("\n");
    }
    return 0;
}
*/



/*
#include<stdio.h>
int main(){
int bosluk,yildiz;
bosluk=2;
yildiz=1;
int i,j;
for (i=1;i<=3;i++){
	for(j=1;j<=bosluk;j++)
		printf(" ");
	for(j=1;j<=yildiz;j++)
		printf("*");
	printf("\n");
	yildiz+=2;
	bosluk--;
}
yildiz-=4;
//bosluk+=2;
for (i=1;i<=2;i++){
	for(j=1;j<=i;j++)
		printf(" ");
	for(j=1;j<=yildiz;j++)
		printf("*");
	printf("\n");
	yildiz-=2;
	//bosluk++;
}


return 0;
}
*/

/*


#include<stdio.h>


int main()
{


int sayi,yildiz,bosluk;

 int i;

 int j;

 printf("enter the number:\n");
 sayi=3;	
 yildiz=1;
 bosluk=sayi-1;
 for(i=1;i<=sayi;i++)
 {
  for(j=1;j<=bosluk;j++)
  printf(" ");
  for(j=1;j<=yildiz;j++)
  printf("*");
  bosluk--;
  yildiz+=2;
  printf("\n");
 }
 yildiz-=4;
 for(i=1;i<sayi;i++)
 {
  for(j=1;j<=i;j++)
  printf(" ");
  for(j=1;j<=yildiz;j++)
  printf("*");
  yildiz-=2;

  printf("\n");

 }
return 0;

}
*/


/*
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,num;
        for(i=0;i<8;i++)
        {
        	if(i%2==0)
             {
                printf(" ");
             }
          for(j=0;j<=3;j++)
          {
             printf("\xDB");
             printf(" ");
           }
             printf("\n");
             
        }
 getch ();
 return 0;
}
*/

/*
#include <stdio.h>
int faktoriyel(int num){
	if(num==1){
		return 1;
	}
	return (num*faktoriyel(num-1));
	

}

int main(){
	int girdi,sonuc;
	
	scanf("%d", &girdi);
	sonuc=faktoriyel(girdi);
	printf("%d",sonuc);
return 0;	
	
}


*/
/*
int main()
{
    int number, originalNumber, kalan, result = 0;
    printf("Enter a three digit integer: ");
    scanf("%d", &number);
    originalNumber = number;
    while (originalNumber != 0)
    {
        kalan = originalNumber%10;
        //printf("%d number\n",kalan);
        
        result += kalan*kalan*kalan;
        //printf("%d result\n",result);
        
		originalNumber /= 10;
        //printf("%d orginalnumber\n",originalNumber);
    }
    if(result == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);
    return 0;
}*/
