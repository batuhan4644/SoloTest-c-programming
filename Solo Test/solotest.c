#include <stdio.h>
#include <stdlib.h>


int main()
{

int  hamle, ilksatir, ilksutun, sonsatir, sonsutun;
// Degiskenlerimizi belirledik.

int matris[7][7] = { 2,2,1,1,1,2,2, 2,2,1,1,1,2,2, 1,1,1,1,1,1,1, 1,1,1,0,1,1,1, 1,1,1,1,1,1,1, 2,2,1,1,1,2,2, 2,2,1,1,1,2,2 };
// 7 ye 7 lik bir matris tanimladik.
{


printf("     1 2 3 4 5 6 7\n");
printf("     \n");
printf("1        %d %d %d  \n",                                   matris[0][2], matris[0][3], matris[0][4]);
printf("2        %d %d %d  \n",                                   matris[1][2], matris[1][3], matris[1][4]);
printf("3    %d %d %d %d %d %d %d\n", matris[2][0], matris[2][1], matris[2][2], matris[2][3], matris[2][4], matris[2][5], matris[2][6]);
printf("4    %d %d %d %d %d %d %d\n", matris[3][0], matris[3][1], matris[3][2], matris[3][3], matris[3][4], matris[3][5], matris[3][6]);
printf("5    %d %d %d %d %d %d %d\n", matris[4][0], matris[4][1], matris[4][2], matris[4][3], matris[4][4], matris[4][5], matris[4][6]);
printf("6        %d %d %d\n",                                     matris[5][2], matris[5][3], matris[5][4]);
printf("7        %d %d %d\n",                                     matris[6][2], matris[6][3], matris[6][4]);

// Baslangic tablomuzu olusturduk.

}

for (hamle = 0; hamle < 1000; hamle++)
// Oyunun her seferinde devam etmesi icin dongu tanimladik.
{
    printf("Hareket ettirmek istediginiz ilk satiri ve ilk sutunu seciniz.");
    scanf("%d", &ilksatir);
    scanf("%d", &ilksutun);

// Kullanicidan istedigimiz satir ve sutun degerlerini aldik
ilksatir = ilksatir - 1;
//Matrisler 0 dan basladgi icin 1 cikardik
ilksutun = ilksutun - 1;
//Matrisler 0 dan basladigi icin bir cikardik
if (matris[ilksatir][ilksutun] == 2)
//Eger matrisimizin satir ve sutununun denk geldigi yer 2 ise hatali giris yapmisizdir.
    {

       printf("HATALI GIRIS LUTFEN TEKRAR DENEYINIZ\n");

    }

if (matris[ilksatir][ilksutun] == 0)
//Eger matrisimizin satir ve sutununun denk geldigi yer 0 ise hatali giris yapmisizdir.
    {

       printf("HATALI GIRIS LUTFEN TEKRAR DENEYINIZ\n");

    }
if (matris[ilksatir][ilksutun] == 1)
//Eger matrisimizin satir ve sutununun denk geldigi yer 1 ise kodumuza devam ederiz ve gitmek istedigimiz yeri gireriz
{
printf("Hareketi sonlandirmak istediginiz son satiri ve son sutunu seciniz.");
scanf("%d", &sonsatir);
scanf("%d", &sonsutun);
// Kullanicidan gitmek istedigimiz satir ve sutun degerlerini aldik
sonsatir = sonsatir - 1;
//Matrisler 0 dan basladigi icin 1 cikardik
sonsutun = sonsutun - 1;
//Matrisler 0 dan basladigi icin 1 cikardik
if (matris[sonsatir][sonsutun] == 1) {
printf("HATALI GIRIS LUTFEN TEKRAR DENEYINIZ\n");
//Eger matrisimizin satir ve sutununun denk geldigi yer 1 ise hatali giris yapmisizdir.
}
if (matris[sonsatir][sonsutun] == 2) {
printf("HATALI GIRIS LUTFEN TEKRAR DENEYINIZ\n");
//Eger matrisimizin satir ve sutununun denk geldigi yer 1 ise hatali giris yapmisizdir.
}

if (matris[sonsatir][sonsutun] == 0)
//Eger matrisimizin satir ve sutununun denk geldigi yer 0 ise gitmek istedigimiz yer bostur ve oraya gideriz.

    {
        if (ilksutun == sonsutun && ilksatir - 2 == sonsatir && matris[ilksatir-1][sonsutun] == 1)
//ornek vericek olursak 6. satir 4. sutun dan 4 . satir 4. sutuna gecmek gibi islemler icin kullanilir yani satir sayisini 2 azaltiriz
// sutun sayisi ayni kalir.
    {
        matris[sonsatir+2][sonsutun] = 0;
//son satirimiz 4 tu + 2 = 6 yapar son sutunumuzda dorttu yani 4 e 4 0 olmali
        matris[sonsatir+1][sonsutun] = 0;
//son satirimiz 4 tü + 1 = 5 yapar son suttunumuz dorttu 5 e 4 0 olmali ve bu tas ustunden gecildi icin yendi.
        matris[sonsatir][sonsutun] = 1;
//tasimizin geldigi nokta 1 olmalidir bu nokta yukardaki ornege devam  edecek olursak 4 e4 noktasidir.

        printf("     1 2 3 4 5 6 7\n");
        printf("\n");
        printf("1        %d %d %d\n", matris[0][2], matris[0][3], matris[0][4]);
        printf("2        %d %d %d\n", matris[1][2], matris[1][3], matris[1][4]);
        printf("3    %d %d %d %d %d %d %d\n", matris[2][0], matris[2][1], matris[2][2], matris[2][3], matris[2][4], matris[2][5], matris[2][6]);
        printf("4    %d %d %d %d %d %d %d\n", matris[3][0], matris[3][1], matris[3][2], matris[3][3], matris[3][4], matris[3][5], matris[3][6]);
        printf("5    %d %d %d %d %d %d %d\n", matris[4][0], matris[4][1], matris[4][2], matris[4][3], matris[4][4], matris[4][5], matris[4][6]);
        printf("6        %d %d %d\n", matris[5][2], matris[5][3], matris[5][4]);
        printf("7        %d %d %d\n", matris[6][2], matris[6][3], matris[6][4]);

}
       if (ilksatir == sonsatir && ilksutun + 2 == sonsutun && matris[ilksatir][sonsutun - 1] == 1)
    {
// bunda da ornek vericek olursak 4 satir 2 sutun  noktasindan 4 satir 4 . sutun  noktasina giden tasimizi inceleyelim.sutun 2 hareket edicek.
//satir sayisi ayni kalir.
        matris[ilksatir][ilksutun] = 0;
//yukardaki ornekteki gibi hareket ettiricegimiz satir 0 olmali.
        matris[ilksatir][ilksutun+1] = 0;
//4 2 noktasndan 4 e 4 noktasina gelen tas 4 e 3 noktasinin ustunde geciyot ve onu yiyor o yuzden burasi 0 olur.
        matris[ilksatir][ilksutun+2] = 1;
// tasin son gelcegi yer 1 ile gosterilmelidir.


        printf("     1 2 3 4 5 6 7\n");
        printf("\n");
        printf("1        %d %d %d\n", matris[0][2], matris[0][3], matris[0][4]);
        printf("2        %d %d %d\n", matris[1][2], matris[1][3], matris[1][4]);
        printf("3    %d %d %d %d %d %d %d\n", matris[2][0], matris[2][1], matris[2][2], matris[2][3], matris[2][4], matris[2][5], matris[2][6]);
        printf("4    %d %d %d %d %d %d %d\n", matris[3][0], matris[3][1], matris[3][2], matris[3][3], matris[3][4], matris[3][5], matris[3][6]);
        printf("5    %d %d %d %d %d %d %d\n", matris[4][0], matris[4][1], matris[4][2], matris[4][3], matris[4][4], matris[4][5], matris[4][6]);
        printf("6        %d %d %d\n", matris[5][2], matris[5][3], matris[5][4]);
        printf("7        %d %d %d\n", matris[6][2], matris[6][3], matris[6][4]);

}
        if (ilksatir == sonsatir && ilksutun - 2 == sonsutun && matris[ilksatir][sonsutun + 1] == 1)
 //ornek vericek olursak 4 satir 6 sutun noktasindan  4 satir 4. sutun noktasina gelicek olan tas ornegini verebiliriz sutun islemleri yapariz.
 //satirlar ayni kalir
    {
        matris[ilksatir][ilksutun] = 0;
 //tasin hareket edicegi yer oludugu icin bu nokta sifir olmali
        matris[ilksatir][ilksutun-1] = 0;
 //tasin ustunden gecerken yenilicek olan bolumdur 0 olmalidir.
        matris[ilksatir][ilksutun-2] = 1;
//tasin gelicegi bolumdur ve 1 olmalidir.


        printf("     1 2 3 4 5 6 7\n");
        printf("\n");
        printf("1        %d %d %d\n", matris[0][2], matris[0][3], matris[0][4]);
        printf("2        %d %d %d\n", matris[1][2], matris[1][3], matris[1][4]);
        printf("3    %d %d %d %d %d %d %d\n", matris[2][0], matris[2][1], matris[2][2], matris[2][3], matris[2][4], matris[2][5], matris[2][6]);
        printf("4    %d %d %d %d %d %d %d\n", matris[3][0], matris[3][1], matris[3][2], matris[3][3], matris[3][4], matris[3][5], matris[3][6]);
        printf("5    %d %d %d %d %d %d %d\n", matris[4][0], matris[4][1], matris[4][2], matris[4][3], matris[4][4], matris[4][5], matris[4][6]);
        printf("6        %d %d %d\n", matris[5][2], matris[5][3], matris[5][4]);
        printf("7        %d %d %d\n", matris[6][2], matris[6][3], matris[6][4]);

}

          if (ilksutun == sonsutun && ilksatir + 2 == sonsatir && matris[ilksatir+1][sonsutun] == 1)
 //2. satir 4. sutun noktasýnýn 4 satir 4. sutuna tasinicagini dusunursek satir islemi yapariz ama sutun islemi yapmayiz.
 //eger ilk sutun ve son sutun birbirine esitse(4=4)ve ilk satir + 2 = 4 == 4 ise ve 3 satir ve 4 sutun doluysa bu islem yapilir.
    {
        matris[ilksatir][sonsutun] = 0;
 // tas haraket ettigi icin artik burasi bos.
        matris[ilksatir+1][sonsutun] = 0;
 // tas ustunden gecicegi noktayi yiyecegi icin bu nokta 0 olur .
        matris[ilksatir+2][sonsutun] = 1;
 //tas son durumda gelecegi nokta 1 olmali.


        printf("     1 2 3 4 5 6 7\n");
        printf("\n");
        printf("1        %d %d %d\n", matris[0][2], matris[0][3], matris[0][4]);
        printf("2        %d %d %d\n", matris[1][2], matris[1][3], matris[1][4]);
        printf("3    %d %d %d %d %d %d %d\n", matris[2][0], matris[2][1], matris[2][2], matris[2][3], matris[2][4], matris[2][5], matris[2][6]);
        printf("4    %d %d %d %d %d %d %d\n", matris[3][0], matris[3][1], matris[3][2], matris[3][3], matris[3][4], matris[3][5], matris[3][6]);
        printf("5    %d %d %d %d %d %d %d\n", matris[4][0], matris[4][1], matris[4][2], matris[4][3], matris[4][4], matris[4][5], matris[4][6]);
        printf("6        %d %d %d\n", matris[5][2], matris[5][3], matris[5][4]);
        printf("7        %d %d %d\n", matris[6][2], matris[6][3], matris[6][4]);


}



}
}


}

return 0;

}


