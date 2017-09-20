#include "stdafx.h"
#include <iostream>


using namespace std;

/* öncelikle tüm bu işlemler javada bir string dizi oluşturup daha sonra bunları substr ile alt dizilere bölüp bu dizileri, parseInt () fonksiyonu ile integer değere dönüştürürdüm.ve her bir dizinin hesaplamasını  yapar ve karşılatırırdım ve son olarak sonucu yazdırırdım.Fakat c++ daha kolayıma kaçtığı için c++ tercih ettim.*/

int main(){
int e=0;
int hesapla=1;
int altdizi[16]={0};//Alt dizinin ilk elemanı dahil tüm elemanları 0 yap.
int x=0,y=6;
int min=0;//min ilk değer ataması
int max=0;//maxx ilk deger ataması. Alt dizi bu değerle karşılatırılıp min ve max bulunacak
/* İlk başta pi sayısınının . dan sonraki kısmı, klavyeden alınıp sonra bir diziye ya da dosyaya atılabilir fakat pratik olsun diye direkt diziye attım.*/

 /* dizinin 0 elemanından başlayarak 100.elemanına kadar yazdır .daha sonra  her 6 basamakta bir ,ilk 6 basamağı hesapla ve altdiziye kaydet.  */
int dizi[100]={1,4,1,5,9,2,6,5,3,5,  8,9,7,9,3,  2,3,8,4,6, 2,6,4,3,3,  8,3,2,7,9,  5,0,2,8,8,  4,1,9,7,1,  6,9,3,9,9,  3,7,5,1,0,  5,8,2,0,9, 
7,4,9,4,4 ,5,9,2,3,0, 7,8,1,6,4,  0,6,2,8,6, 2,0,8,9,9, 8,6,2,8,0, 3,4,8,2,5, 3,4,2,1,1,  7,0,6,7,9} ;
for(int i=1;i<100;i++){
	
	cout<<dizi[i]<<"\t";

	if(i%6==0){
	
	for(int z=x;z<y;z++)
		{
			hesapla*=dizi[z];
			
			
		
			altdizi[e]=hesapla;
		
		}
		x=x+6;
		y=y+6;
		
	cout<<endl<<"Altdizi["<<e<<"] degeri "<<altdizi[e]<<endl<<"xdegeri="<<x<<endl<<"y degeri="<<y<<endl;
    e++;
	hesapla=1;
	}
}

/*alt dizileri min ve max değişkenine göre karşılaştır .min ve max ı hesaplayıp yazdır. */

for(int i=0;i<e;i++)

{
	if(altdizi[i]<min){
	min=altdizi[i];
	
	
	}
	
	
	if(altdizi[i]>max){
		max=altdizi[i];
	}
	
}
cout<<endl<<"min="<<min;
cout<<endl<<"max="<<max;
system("pause");
return 0;
}
