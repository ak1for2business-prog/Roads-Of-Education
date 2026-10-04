#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define MAX 1000

#define TEKRARDENE \
 do {                                                                              \
     random0 = rand() % 8;                                                         \
                                                                                   \
     switch (random0) {                                                            \
         case 0: printf("Bu sefer olmadı"); break;                                 \
         case 1: printf("Üzgünüm bu sefer olmadı"); break;                         \
         case 2: printf("Kusura bakma ama sanırım"); break;                        \
         case 3: printf("Görünüşe göre bir veya birkaç yerde hata yaptın"); break; \
         case 4: printf("Sanırım"); break;                                         \
         case 5: printf("Görünüşe göre"); break;                                   \
         case 6: printf("Görülen o ki"); break;                                    \
         case 7: printf("Yanlış yaptın ama üzülme sadece"); break;                 \
     }                                                                             \
                                                                                   \
     printf(" tekrar denemen gerekecek...");                                       \
                                                                                   \
     random0 = rand() % 6;                                                         \
                                                                                   \
     printf(" ");                                                                  \
     switch(random0) {                                                             \
         case 0: printf(":-\\"); break;                                            \
         case 1: printf(":-("); break;                                             \
         case 2: printf(":-["); break;                                             \
         case 3: printf(":("); break;                                              \
         case 4: printf(":["); break;                                              \
         case 5: printf("\\\\("); break;                                           \
     }                                                                             \
     printf("\n");                                                                 \
 } while (0)

#define TEBRIK \
 do {                                                   \
     random0 = rand() % 8;                              \
     switch (random0) {                                 \
         case 0: printf("Harika!"); break;              \
         case 1: printf("Tebrikler!"); break;           \
         case 2: printf("Mükemmel!"); break;            \
         case 3: printf("Çok iyi!"); break;             \
         case 4: printf("Yaşasın!"); break;             \
         case 5: printf("Senin için mutluyum!"); break; \
         case 6: printf("Bu işte iyisin!"); break;      \
         case 7: printf("İyi gidiyorsun!"); break;      \
    }                                                   \
 } while (0)
 
#define SIFIRLAMA \
 do {                                                 \
     for (i = 0, j = 0, a = 0, b = 0; i < MAX; i++) { \
     girilen0[i] = j;                                 \
     }                                                \
 } while (0)

#define EVET_HAYIR_LOOP \
 do {                                                     \
     for (i = 0, j = 0; i < MAX - 1 && j != '\n'; i++) {  \
          j = getchar();                                  \
          if (j == EOF) break;                            \
          unsigned char b1 = (unsigned char) j;           \
                                                          \
          if (b1 == 0xC4 || b1 == 0xC3 || b1 == 0xC5) {   \
              int j2 = getchar();                         \
              if (j2 == EOF) break;                       \
              unsigned char b2 = (unsigned char) j2;      \
                                                          \
          if (b1 == 0xC4 && b2 == 0xB1) j = 'I';          \
          else if (b1 == 0xC4 && b2 == 0xB0) j = 'I';     \
          else j = '?';                                   \
          }                                               \
          else {                                           \
              j = toupper((unsigned char) j);               \
          }                                                  \
                                                              \
          girilen0[i] = j;                                     \
     }                                                          \
     girilen0[i] = 0;                                            \
                                                                  \
     for(i = 0, a = 0, b = 0; i < MAX && girilen0[i] != 0; i++) { \
         switch(girilen0[i]) {                                    \
             case 'A': b++; break;                                \
             case 'E': a++; break;                                \
             case 'H': b++; break;                                \
             case 'I': b++; break;                                \
             case 'R': b++; break;                                \
             case 'T': a++; break;                                \
             case 'V': a++; break;                                \
             case 'Y': b++; break;                                \
             default: break;                                      \
         }                                                        \
     }                                                            \
 } while (0)

#define X_SAYI_SEC                                                                   \
 do {                                                                                \
     random0 = rand() % 22;                                                          \
     switch(random0) {                                                               \
         case 0: printf("Üzerinde uygulamak istediğin herhangi"); break;             \
         case 1: printf("Üzerinde uygulamak istediğin rasgele"); break;              \
         case 2: printf("Herhangi"); break;                                          \
         case 3: printf("Rasgele"); break;                                           \
         case 4: printf("Deneyerek öğrenebilmen için herhangi"); break;              \
         case 5: printf("Deneyerek öğrenebilmen için rasgele"); break;               \
         case 6: printf("Programda kullanmam için herhangi"); break;                 \
         case 7: printf("Programda kullanmam için rasgele"); break;                  \
         case 8: printf("Soru-cevaplarda kullanabilmem için herhangi"); break;       \
         case 9: printf("Soru-cevaplarda kullanabilmem için rasgele"); break;        \
         case 10: printf("Sonraki adımlarda kullanmam için herhangi"); break;        \
         case 11: printf("Sonraki adımlarda kullanmam için rasgele"); break;         \
         case 12: printf("Örneklerde kullanabilmem için herhangi"); break;           \
         case 13: printf("Örneklerde kullanabilmem için rasgele"); break;            \
         case 14: printf("Örnek olarak kullanmam için herhangi"); break;             \
         case 15: printf("Örnek olarak kullanmam için rasgele"); break;              \
         case 16: printf("Sana anlatacağım örnekte kullanmam için herhangi"); break; \
         case 17: printf("Sana anlatacağım örnekte kullanmam için rasgele"); break;  \
         case 18: printf("Sana anlatmada kullanacağım örnek için herhangi"); break;  \
         case 19: printf("Sana anlatmada kullanacağım örnek için rasgele"); break;   \
         case 20: printf("Kullanarak öğrenmek isteyeceğin herhangi"); break;         \
         case 21: printf("Kullanarak öğrenmek isteyeceğin rasgele"); break;          \
     }                                                                               \
     if (sayisayisi > 0) {                                                           \
         printf("ilkinden küçük %d.", sayisayisi);                                   \
     }                                                                               \
         printf(" bir sayı söyle: \n");                                              \
         sayisayisi = 0;                                                             \
                                                                                     \
         while ((kontrol = scanf(" %u", &x)) != 1) {                                 \
             if (kontrol == EOF) {                                                   \
                 x = 0; break; }                                                     \
             scanf("%*[^\n]");                                                       \
             scanf("%*c");                                                           \
         }                                                                           \
 } while (0)

#define KARE_BULMA \
 do {                                                                                                                                                                                                          \
     do {                                                                                                                                                                                                      \
         X_SAYI_SEC;                                                                                                                                                                                           \
                                                                                                                                                                                                               \
         y = x;                                                                                                                                                                                                \
         z = (x * x);                                                                                                                                                                                          \
                                                                                                                                                                                                               \
         printf("Tamam, şimdi (%u X %u) işleminin kaç ettiğini söyleyebilir misin?:\n", x, x);                                                                                                                 \
                                                                                                                                                                                                               \
         while (scanf(" %u", &x) != 1) {                                                                                                                                                                       \
             scanf("%*[^\n]");                                                                                                                                                                                 \
             scanf("%*c");                                                                                                                                                                                     \
         }                                                                                                                                                                                                     \
                                                                                                                                                                                                               \
	 if (z != x) {                                                                                                                                                                                         \
             TEKRARDENE;                                                                                                                                                                                       \
             do {                                                                                                                                                                                              \
                 while (scanf(" %u", &x) != 1) {                                                                                                                                                               \
                     scanf("%*[^\n]");                                                                                                                                                                         \
                     scanf("%*c");                                                                                                                                                                             \
                 }                                                                                                                                                                                             \
                 c++;                                                                                                                                                                                          \
                                                                                                                                                                                                               \
		 if (z == x) {                                                                                                                                                                                 \
                     TEBRIK;                                                                                                                                                                                   \
                                                                                                                                                                                                               \
                     random0 = rand() % 4;                                                                                                                                                                     \
                                                                                                                                                                                                               \
                     switch (random0) {                                                                                                                                                                        \
                         case 0: printf(" %u sayısının karesini yani %u²'yi buldun!", y, y); break;                                                                                                            \
                         case 1: printf(" %u sayısının karesini yani %u²'yi bulmayı başardın!", y, y); break;                                                                                                  \
                         case 2: printf(" %u²'yi yani %u sayısının karesini bulmayı başardın!", y, y); break;                                                                                                  \
                         case 3: printf(" %u²'yi yani %u sayısının karesini buldun!", y, y); break;                                                                                                            \
                     }                                                                                                                                                                                         \
                                                                                                                                                                                                               \
                     printf(" ");                                                                                                                                                                              \
                     random0 = rand() % 5;                                                                                                                                                                     \
                                                                                                                                                                                                               \
                     switch (random0) {                                                                                                                                                                        \
                         case 0: printf(":-)"); break;                                                                                                                                                         \
                         case 1: printf(":)"); break;                                                                                                                                                          \
                         case 2: printf("\\\\)"); break;                                                                                                                                                       \
                         case 3: printf(":-]"); break;                                                                                                                                                         \
                         case 4: printf(":]"); break;                                                                                                                                                          \
                     }                                                                                                                                                                                         \
                     printf("\n");                                                                                                                                                                             \
                     n++;                                                                                                                                                                                      \
                     break;                                                                                                                                                                                    \
                 }                                                                                                                                                                                             \
                                                                                                                                                                                                               \
                 else if (z != x) {                                                                                                                                                                            \
                                                                                                                                                                                                               \
                     random0 = rand() % 8;                                                                                                                                                                     \
                                                                                                                                                                                                               \
                     switch (random0) {                                                                                                                                                                        \
                         case 0: printf("Bu sefer olmadı"); break;                                                                                                                                             \
                         case 1: printf("Üzgünüm bu sefer olmadı"); break;                                                                                                                                     \
                         case 2: printf("Kusura bakma ama sanırım"); break;                                                                                                                                    \
                         case 3: printf("Görünüşe göre bir veya birkaç yerde hata yaptın"); break;                                                                                                             \
                         case 4: printf("Sanırım"); break;                                                                                                                                                     \
                         case 5: printf("Görünüşe göre"); break;                                                                                                                                               \
                         case 6: printf("Görülen o ki"); break;                                                                                                                                                \
                         case 7: printf("Yanlış yaptın ama üzülme sadece"); break;                                                                                                                             \
                      }                                                                                                                                                                                        \
                                                                                                                                                                                                               \
                      printf(" tekrar denemen gerekecek...");                                                                                                                                                  \
                                                                                                                                                                                                               \
                      random0 = rand() % 6;                                                                                                                                                                    \
                                                                                                                                                                                                               \
                      printf(" ");                                                                                                                                                                             \
                      switch(random0) {                                                                                                                                                                        \
                          case 0: printf(":-\\"); break;                                                                                                                                                       \
                          case 1: printf(":-("); break;                                                                                                                                                        \
                          case 2: printf(":-["); break;                                                                                                                                                        \
                          case 3: printf(":("); break;                                                                                                                                                         \
                          case 4: printf(":["); break;                                                                                                                                                         \
                          case 5: printf("\\\\("); break;                                                                                                                                                      \
                      }                                                                                                                                                                                        \
                      printf("\n");                                                                                                                                                                            \
                                                                                                                                                                                                               \
                      if (c % 3 == 0) {                                                                                                                                                                        \
                          random0 = rand() % 12;                                                                                                                                                               \
                                                                                                                                                                                                               \
                          switch (random0) {                                                                                                                                                                   \
                              case 0: printf("Eğer yardıma ihtiyacın varsa"); break;                                                                                                                           \
                              case 1: printf("Eğer yardım"); break;                                                                                                                                            \
                              case 2: printf("Cevabı bulmakta zorlanıyorsan"); break;                                                                                                                          \
                              case 3: printf("Cevabı bulmakta yardım"); break;                                                                                                                                 \
                              case 4: printf("Cevabı bulmakta güçlük çekiyorsan"); break;                                                                                                                      \
                              case 5: printf("Cevabı bulmakta yardım"); break;                                                                                                                                 \
                              case 6: printf("Yardım"); break;                                                                                                                                                 \
                              case 7: printf("Eğer"); break;                                                                                                                                                   \
                              case 8: printf("Yardıma ihtiyacın varsa"); break;                                                                                                                                \
                              case 9: printf("Gerçekten yardım"); break;                                                                                                                                       \
                              case 10: printf("Cevabı bulmak için yardıma ihtiyacın varsa"); break;                                                                                                            \
                              case 11: printf("Eğer soruyu cevaplamakta zorlanıyorsan"); break;                                                                                                                \
                          }                                                                                                                                                                                    \
                                                                                                                                                                                                               \
                          printf(" istersen sana cevabı söyleyebilirim. İster misin? (Evet / hayır)\n");                                                                                                       \
                          scanf("%*[^\n]");                                                                                                                                                                    \
                          scanf("%*c");                                                                                                                                                                        \
                          SIFIRLAMA;                                                                                                                                                                           \
                          EVET_HAYIR_LOOP;                                                                                                                                                                     \
                                                                                                                                                                                                               \
                          if (a > b) {                                                                                                                                                                         \
                              random0 = rand() % 4;                                                                                                                                                            \
                                                                                                                                                                                                               \
                              switch(random0) {                                                                                                                                                                \
                                  case 0: printf("%u sayısının karesi yani %u² bir diğer deyişle (%u X %u) olur yani cevabın %u olması gerekirdi.\n", y, y, y, y, z); break;                                   \
                                  case 1: printf("%u² yani %u sayısının karesi yani (%u X %u) yani senden istediğim cevap %u olur.\n", y, y, y, y, z); break;                                                  \
                                  case 2: printf("%u sayısının karesi demek (%u X %u) demektir. O da %u olmuş olur yani %u² = %u olmuş olur.\n", y, y, y, z, y, z); break;                                     \
                                  case 3: printf("%u² sayısı %u sayısının karesi yani (%u X %u) = %u ifadesine eşit olmuş olur.\n", y, y, y, y, z); break;                                                     \
                              }                                                                                                                                                                                \
                          n++;                                                                                                                                                                                 \
                          break;                                                                                                                                                                               \
	                  }                                                                                                                                                                                    \
                          else if (b > a) {                                                                                                                                                                    \
                              c = 0;                                                                                                                                                                           \
                              continue;                                                                                                                                                                        \
                          }                                                                                                                                                                                    \
                      }                                                                                                                                                                                        \
                 }                                                                                                                                                                                             \
             } while (z != x);                                                                                                                                                                                 \
         }                                                                                                                                                                                                     \
                                                                                                                                                                                                               \
         else if (z == x) {                                                                                                                                                                                    \
             random0 = rand() % 8;                                                                                                                                                                             \
                                                                                                                                                                                                               \
             switch (random0) {                                                                                                                                                                                \
                 case 0: printf("Harika!"); break;                                                                                                                                                             \
                 case 1: printf("Tebrikler!"); break;                                                                                                                                                          \
                 case 2: printf("Mükemmel!"); break;                                                                                                                                                           \
                 case 3: printf("Çok iyi!"); break;                                                                                                                                                            \
                 case 4: printf("Yaşasın!"); break;                                                                                                                                                            \
                 case 5: printf("Senin için mutluyum!"); break;                                                                                                                                                \
                 case 6: printf("Bu işte iyisin!"); break;                                                                                                                                                     \
                 case 7: printf("İyi gidiyorsun!"); break;                                                                                                                                                     \
             }                                                                                                                                                                                                 \
                                                                                                                                                                                                               \
             random0 = rand() % 4;                                                                                                                                                                             \
                                                                                                                                                                                                               \
             switch (random0) {                                                                                                                                                                                \
                 case 0: printf(" %u sayısının karesini yani %u²'yi buldun!", y, y); break;                                                                                                                    \
                 case 1: printf(" %u sayısının karesini yani %u²'yi bulmayı başardın!", y, y); break;                                                                                                          \
                 case 2: printf(" %u²'yi yani %u sayısının karesini bulmayı başardın!", y, y); break;                                                                                                          \
                 case 3: printf(" %u²'yi yani %u sayısının karesini buldun!", y, y); break;                                                                                                                    \
             }                                                                                                                                                                                                 \
                                                                                                                                                                                                               \
             random0 = rand() % 5;                                                                                                                                                                             \
                                                                                                                                                                                                               \
             printf(" ");                                                                                                                                                                                      \
             switch (random0) {                                                                                                                                                                                \
                 case 0: printf(":-)"); break;                                                                                                                                                                 \
                 case 1: printf(":)"); break;                                                                                                                                                                  \
                 case 2: printf("\\\\)"); break;                                                                                                                                                               \
                 case 3: printf(":-]"); break;                                                                                                                                                                 \
                 case 4: printf(":]"); break;                                                                                                                                                                  \
             }                                                                                                                                                                                                 \
                                                                                                                                                                                                               \
             printf("\n");                                                                                                                                                                                     \
             }                                                                                                                                                                                                 \
             n++;                                                                                                                                                                                              \
             break;                                                                                                                                                                                            \
         } while(n == 0);                                                                                                                                                                                      \
                                                                                                                                                                                                               \
 } while (0)

int main(void){

    unsigned int x, y, z, t, s, k, q, p, l;

    int i,
        j,
        a = 0,
        b = 0,
        c = 0,
        n = 0,
        random0,
        sayisayisi = 0,
        kontrol = 0;

    char girilen0[MAX] = {0};

    srand((unsigned) time(NULL));
    random0 = rand() % 5;

    switch(random0) {
        case 0: printf("Yapmak "); break;
        case 1: printf("Denemek "); break;
        case 2: printf("Öğrenmek "); break;
        case 3: printf("Çalıştırmak "); break;
        case 4: printf("Kullanmak "); break;
    }

    while (1) {

        a = b = c = 0;
        for (i = 0; i < MAX - 1; i++) {
          girilen0[i] = 0;
        }

        printf("istediğiniz uygulamayı seçiniz. (İki kare farkı,...)\n");

        for (i = 0; i < MAX - 1; i++) {
             int j = getchar();
             if(j == EOF) break;
             if(j =='\n') break;

             unsigned char b1 = (unsigned char) j;
             if (b1 == 0xC3 || b1 == 0xC4 || b1 == 0xC5) {
                 int j2 = getchar();

                 if (j2 == EOF) {
                     j = '?';
                 }
                 else {
                      unsigned char b2 = (unsigned char) j2;

                      if (b1 == 0xC3 && b2 == 0xA7) j = 'C';   /* ç -> C */
                      else if (b1 == 0xC3 && b2 == 0x87) j = 'C'; /* Ç -> C */

                      else if (b1 == 0xC4 && b2 == 0x9F) j = 'G'; /* ğ -> G */
                      else if (b1 == 0xC4 && b2 == 0x9E) j = 'G'; /* Ğ -> G */

                      else if (b1 == 0xC4 && b2 == 0xB1) j = 'I'; /* ı -> I */
                      else if (b1 == 0xC4 && b2 == 0xB0) j = 'I'; /* İ -> I */

                      else if (b1 == 0xC3 && b2 == 0xB6) j = 'O'; /* ö -> O */
                      else if (b1 == 0xC3 && b2 == 0x96) j = 'O'; /* Ö -> O */

                      else if (b1 == 0xC5 && b2 == 0x9F) j = 'S'; /* ş -> S */
                      else if (b1 == 0xC5 && b2 == 0x9E) j = 'S'; /* Ş -> S */

                      else if (b1 == 0xC3 && b2 == 0xBC) j = 'U'; /* ü -> U */
                      else if (b1 == 0xC3 && b2 == 0x9C) j = 'U'; /* Ü -> U */

                      else                               j = '?';
                }
            } else {
                j = toupper((unsigned char) j);
            }

            girilen0[i] = (char) j;
        }



        for(i = 0; i < MAX && girilen0[i] != 0; i++) {
           switch(girilen0[i]) {
               case 'A': a++; break;
               case 'B': break;
               case 'C': break;
               case 'D': break;
               case 'E': a++; break;
               case 'F': a++; break;
               case 'G': break;
               case 'H': break;
               case 'I': a++; break;
               case 'J': break;
               case 'K': a++; break;
               case 'L': break;
               case 'M': break;
               case 'N': break;
               case 'O': break;
               case 'P': break;
               case 'R': a++; break;
               case 'S': break;
               case 'T': break;
               case 'U': break;
               case 'V': break;
               case 'Y': break;
               case 'Z': break;
               default: break;
           }
        }
        if (a > b && a > c) {
            printf("İki kare farkının");
            break;
          }

       /* else if (b > a && b > c) {
              printf("blablanın");
            } */

        else {
            printf("Ne demek istediğin tam olarak anlaşılamadı.\n");
        }
    }

    printf(" ne olduğunu biliyor musun? Daha önce öğrendin mi? Biliyorsan da bilmiyorsan da, sana bu konuyu anlaman için bilmen gerekenleri en baştan anlatmamı istiyorsan 'Evet', istemiyorsan, hemen uygulamaya geçmek istiyorsan 'Hayır' demen yeterli. (Evet / Hayır)\n");

    SIFIRLAMA;
    EVET_HAYIR_LOOP;

    if (a > b) {
        printf("Öncelikle bu konuyu anlayabilmen için bir sayının karesinin ne olduğunu ve nasıl bulunduğunu bilmen gerekiyor. Bunu biliyor musun? (Evet / Hayır)\n");

        SIFIRLAMA;
        EVET_HAYIR_LOOP;

        if (b > a) {
            printf("Bir sayının karesi demek, o sayının üssünün iki olması demektir. Üs (kuvvet), bir sayının kaç defa kendisiyle çarpılacağını gösterir. Örneğin: ...(a¹ = a) veya (a² = a x a) veya (a³ = a x a x a)... . İstersen bu tanımı daha iyi anlaman için seninle soru cevap şeklinde ve örnekle anlatabilirim, ister misin? (Evet / hayır)\n");

            SIFIRLAMA;
            EVET_HAYIR_LOOP;

            if (a > b) {
                do {
                    X_SAYI_SEC;

                    y = x;
                    z = (x * x);

                    printf("Tamam, şimdi (%u X %u) işleminin kaç ettiğini söyleyebilir misin?:\n", x, x);

                    while (scanf(" %u", &x) != 1) {
                        scanf("%*[^\n]");
                        scanf("%*c");
                    }

                    if (z != x) {
                        TEKRARDENE;
                        do {
                            while (scanf(" %u", &x) != 1) {          
                                scanf("%*[^\n]");
                                scanf("%*c");
                            }
                            c++;
                            if (z == x) {
                                random0 = rand() % 8;

                                switch (random0) {
                                    case 0: printf("Harika!"); break;
                                    case 1: printf("Tebrikler!"); break;
                                    case 2: printf("Mükemmel!"); break;
                                    case 3: printf("Çok iyi!"); break;
                                    case 4: printf("Yaşasın!"); break;
                                    case 5: printf("Senin için mutluyum!"); break;
                                    case 6: printf("Bu işte iyisin!"); break;
                                    case 7: printf("İyi gidiyorsun!"); break;
                                }

                                random0 = rand() % 4;

                                switch (random0) {
                                    case 0: printf(" %u sayısının karesini yani %u²'yi buldun!", y, y); break;
                                    case 1: printf(" %u sayısının karesini yani %u²'yi bulmayı başardın!", y, y); break;
                                    case 2: printf(" %u²'yi yani %u sayısının karesini bulmayı başardın!", y, y); break;
                                    case 3: printf(" %u²'yi yani %u sayısının karesini buldun!", y, y); break;
                                }

                                printf(" ");
                                random0 = rand() % 5;

                                switch (random0) {
                                    case 0: printf(":-)"); break;
                                    case 1: printf(":)"); break;
                                    case 2: printf("\\\\)"); break;
                                    case 3: printf(":-]"); break;
                                    case 4: printf(":]"); break;
                                }
                                printf("\n");
                                printf("Eğer anladığını düşünüyorsan, iki kare farkına geçebiliriz. Anlamadıysan tekrar deneyebiliriz. Anladıysan 'Evet', anlamadıysan 'Hayır' demen yeterli. (Evet / Hayır)\n");
                                scanf("%*c");
                                SIFIRLAMA;
                                EVET_HAYIR_LOOP;

                                if (a > b){
                                    n++; 
                                    break;
                                }
                                else if (b > a) {
                                break;
                                }
                            }

                            else if (z != x) {

                                random0 = rand() % 8;

                                switch (random0) {
                                    case 0: printf("Bu sefer olmadı"); break;
                                    case 1: printf("Üzgünüm bu sefer olmadı"); break;
                                    case 2: printf("Kusura bakma ama sanırım"); break;
                                    case 3: printf("Görünüşe göre bir veya birkaç yerde hata yaptın"); break;
                                    case 4: printf("Sanırım"); break;
                                    case 5: printf("Görünüşe göre"); break;
                                    case 6: printf("Görülen o ki"); break;
                                    case 7: printf("Yanlış yaptın ama üzülme sadece"); break;
                                }

                                printf(" tekrar denemen gerekecek...");

                                random0 = rand() % 6;

                                printf(" ");
                                switch(random0) {
                                    case 0: printf(":-\\"); break;
                                    case 1: printf(":-("); break;
                                    case 2: printf(":-["); break;
                                    case 3: printf(":("); break;
                                    case 4: printf(":["); break;
                                    case 5: printf("\\\\("); break;
                                }
                                printf("\n");

                                if (c % 3 == 0) {
                                    random0 = rand() % 12;

                                    switch (random0) {
                                        case 0: printf("Eğer yardıma ihtiyacın varsa"); break;
                                        case 1: printf("Eğer yardım"); break;
                                        case 2: printf("Cevabı bulmakta zorlanıyorsan"); break;
                                        case 3: printf("Cevabı bulmakta yardım"); break;
                                        case 4: printf("Cevabı bulmakta güçlük çekiyorsan"); break;
                                        case 5: printf("Cevabı bulmakta yardım"); break;
                                        case 6: printf("Yardım"); break;
                                        case 7: printf("Eğer"); break;
                                        case 8: printf("Yardıma ihtiyacın varsa"); break;
                                        case 9: printf("Gerçekten yardım"); break;
                                        case 10: printf("Cevabı bulmak için yardıma ihtiyacın varsa"); break;
                                        case 11: printf("Eğer soruyu cevaplamakta zorlanıyorsan"); break;
                                    }

                                    printf(" istersen sana cevabı söyleyebilirim. İster misin? (Evet / hayır)\n");
                                    scanf("%*[^\n]");
                                    scanf("%*c");
                                    SIFIRLAMA;
                                    EVET_HAYIR_LOOP;

                                    if (a > b) {
                                        random0 = rand() % 4;

                                        switch(random0) {
                                            case 0: printf("%u sayısının karesi yani %u² bir diğer deyişle (%u X %u) olur yani cevabın %u olması gerekirdi\n", y, y, y, y, z); break;
                                            case 1: printf("%u² yani %u sayısının karesi yani (%u X %u) yani senden istediğim cevap %u olur", y, y, y, y, z); break;
                                            case 2: printf("%u sayısının karesi demek (%u X %u) demektir. O da %u olmuş olur yani %u² = %u olmuş olur.", y, y, y, z, y, z); break;
                                            case 3: printf("%u² sayısı %u sayısının karesi yani (%u X %u) = %u ya eşit olmuş olur.", y, y, y, y, z); break;
                                        }
                                        printf("Eğer anladığını düşünüyorsan, iki kare farkına geçebiliriz. Anlamadıysan tekrar deneyebiliriz. Anladıysan 'Evet', anlamadıysan 'Hayır' demen yeterli. (Evet / Hayır)\n");
                                        scanf("%*c");
                                        SIFIRLAMA;
                                        EVET_HAYIR_LOOP;

                                        if (a > b){
                                            n++;
                                            break;
                                        }
                                        else if (b > a) {
                                            break;
                                        }
                                    }
                                    else if (b > a) {
                                        c = 0;
                                        TEKRARDENE;
                                        continue;
                                    }
                                }
                            }
                        } while (z != x);
                    }

                    else if (z == x) {
                        random0 = rand() % 8;

                        switch (random0) {
                            case 0: printf("Harika!"); break;
                            case 1: printf("Tebrikler!"); break;
                            case 2: printf("Mükemmel!"); break;
                            case 3: printf("Çok iyi!"); break;
                            case 4: printf("Yaşasın!"); break;
                            case 5: printf("Senin için mutluyum!"); break;
                            case 6: printf("Bu işte iyisin!"); break;
                            case 7: printf("İyi gidiyorsun!"); break;
                        }

                        random0 = rand() % 4;

                        switch (random0) {
                            case 0: printf(" %u sayısının karesini yani %u²'yi buldun!", y, y); break;
                            case 1: printf(" %u sayısının karesini yani %u²'yi bulmayı başardın!", y, y); break;
                            case 2: printf(" %u²'yi yani %u sayısının karesini bulmayı başardın!", y, y); break;
                            case 3: printf(" %u²'yi yani %u sayısının karesini buldun!", y, y); break;
                        }

                        random0 = rand() % 5;

                        printf(" ");
                        switch (random0) {
                            case 0: printf(":-)"); break;
                            case 1: printf(":)"); break;
                            case 2: printf("\\\\)"); break;
                            case 3: printf(":-]"); break;
                            case 4: printf(":]"); break;
                        }
                        printf("\n");
                        printf("Eğer anladığını düşünüyorsan, iki kare farkına geçebiliriz. Anlamadıysan tekrar deneyebiliriz. Anladıysan 'Evet', anlamadıysan 'Hayır' demen yeterli. (Evet / Hayır)\n");
                        scanf("%*c");
                        SIFIRLAMA;
                        EVET_HAYIR_LOOP;

                        if (a > b) {
                            n++;
                            break;
                        }

                        else if (b > a) {
                            continue;
                        }
                    }
                } while(n == 0);
            }

            else if (b > a) {
                printf("Eğer tanımına bakarak anladığını düşünüyorsan veya zaten önceden biliyorsan iki kare farkına geçebiliriz.\n");
                n++;
            }
    }

    else if(a > b) {
        random0 = rand() % 8;

        switch (random0) {
            case 0: printf("Harika!"); break;
            case 1: printf("Güzel!"); break;
            case 2: printf("Mükemmel!"); break;
            case 3: printf("Çok iyi!"); break;
            case 4: printf("İyi!"); break;
            case 5: printf("Ne güzel!"); break;
            case 6: printf("Harikasın!"); break;
            case 7: printf("Ooo!"); break;
        }

        printf(" Eğer zaten biliyorsan iki kare farkına geçebiliriz!\n");
        n++;
    }
    }

    else if (b > a) {
         random0 = rand() % 8;

        switch (random0) {
            case 0: printf("Harika!"); break;
            case 1: printf("Güzel!"); break;
            case 2: printf("Mükemmel!"); break;
            case 3: printf("Çok iyi!"); break;
            case 4: printf("İyi!"); break;
            case 5: printf("Ne güzel!"); break;
            case 6: printf("Harikasın!"); break;
            case 7: printf("Ooo!"); break;
        }
        printf(" Eğer zaten biliyorsan iki kare farkına geçebiliriz!\n");
        n++;
    }

        if (n > 0) {
            while (1) {
                n = 0;
                printf("Matematiksel olarak iki (tam) kare farkı bir sayının karesinden başka bir sayının karesinin çıkarılması sonucu elde edilen sayıya denir. Her bir, iki (tam) kare sayı farkı, şu temel cebir özdeşliğine göre çarpanlarına ayrılabilir:\na² − b² = (a − b) X (a + b)\n");
                printf("İstersen anlaman için karşılıklı soru cevap şeklinde bunu açıklayabilirim istersen 'Evet', istemezsen 'Hayır' demen yeterli. (Evet / Hayır)\n");

                SIFIRLAMA;
                EVET_HAYIR_LOOP;

                if (a > b) {
                    KARE_BULMA;
                    t = y;
                    s = z;

                    sayisayisi = 2;
                    KARE_BULMA;

                    random0 = rand() % 7;
                    switch (random0) {
                        case 0: printf("Şimdi"); break;
                        case 1: printf("Pekala"); break;
                        case 2: printf("Tamam, şimdi"); break;
                        case 3: printf("Bunları bulduğuna göre"); break;
                        case 4: printf("Güzel, bunları bulduğuna göre artık"); break;
                        case 5: printf("Bunları bulduğana göre artık iki kare farkına geçebiliriz. Şimdi"); break;
                        case 6: printf("Güzel, şimdi"); break;
                    }
                
                    printf(" ");

                    random0 = rand() % 5;
                    switch (random0) {
                        case 0: printf("senden bulduğun ikinci kareyi birinciden çıkarmanı ve sonucunu yazmanı istiyorum.(%u - %u)\n", s, z); break;
                        case 1: printf("senden bulduğun 2. kareyi 1. kareden çıkarmanı ve sonucunu yazmanı istiyorum(%u - %u)\n", s, z); break;
                        case 2: printf("senden bulduğun %u sayısını, %u sayısından çıkarmanı ve sonucunu yazmanı istiyorum.\n", z, s); break;
                        case 3: printf("senden bulduğun %u sayısının karesini yani %u sayısından, %u sayısının karesi yani %u sayısını çıkarmanı ve sonucunu yazmanı istiyorum.\n", t, s, y, z); break;
                        case 4: printf("senden bulduğun %u sayısının karesi olan %u sayısından, %u sayısının karesi olan %u sayısını çıkarmanı ve sonucunu yazmanı istiyorum.\n", t, s, y, z); break;
                    }
                
                    while (scanf(" %u", &x) != 1) {
                        scanf("%*[^\n]");
                        scanf("%*c");
                    }
                    c = 0;
                    k = s - z;
                    n = 0;

                    if (x != k) {
                        TEKRARDENE;
                        do {
                            while (scanf(" %u", &x) != 1) {
                                scanf("%*[^\n]");
                                scanf("%*c");
                            }
                            c++;

                            if (k == x) {
                                TEBRIK;

                                printf(" ");

                                random0 = rand() % 3;

                                switch (random0) {
                                    case 0: printf("%u sayısını yani %u sayısından %u sayısının çıkarılmış halini bulmayı başardın!", k, s, z); break;
                                    case 1: printf("%u sayısından %u sayısının çıkmış halini yani %u sayısını bulmayı başardın!", s, z, k); break;
                                    case 2: printf("%u sayısından %u sayısını çıkarmayı ve %u sayısını bulmayı başardın!", s, z, k); break;
                                }

                                random0 = rand() % 5;

                                switch (random0) {
                                    case 0: printf(":-)"); break;
                                    case 1: printf(":)"); break;
                                    case 2: printf("\\\\)"); break;
                                    case 3: printf(":-]"); break;
                                    case 4: printf(":]"); break;
                                }
                                printf("\n");
                                n++;
                            }

                            else if (k != x) {
                                TEKRARDENE;

                                if (c % 3 == 0) {
                                    random0 = rand() % 12;

                                    switch (random0) {
                                        case 0: printf("Eğer yardıma ihtiyacın varsa"); break;
                                        case 1: printf("Eğer yardım"); break;
                                        case 2: printf("Cevabı bulmakta zorlanıyorsan"); break;
                                        case 3: printf("Cevabı bulmakta yardım"); break;
                                        case 4: printf("Cevabı bulmakta güçlük çekiyorsan"); break;
                                        case 5: printf("Cevabı bulmakta yardım"); break;
                                        case 6: printf("Yardım"); break;
                                        case 7: printf("Eğer"); break;
                                        case 8: printf("Yardıma ihtiyacın varsa"); break;
                                        case 9: printf("Gerçekten yardım"); break;
                                        case 10: printf("Cevabı bulmak için yardıma ihtiyacın varsa"); break;
                                        case 11: printf("Eğer soruyu cevaplamakta zorlanıyorsan"); break;
                                    }

                                    printf(" istersen sana cevabı söyleyebilirim. İster misin? (Evet / Hayır)\n");
                                    scanf("%*c");
                                    SIFIRLAMA;
                                    EVET_HAYIR_LOOP;

                                    if (a > b) {
                                        random0 = rand() % 3;
                                        n++;
                                        switch (random0) {
                                            case 0: printf("%u sayısından %u çıkarılırsa, cevap %u olur.", s, z, k); break;
                                            case 1: printf("%u sayısından %u sayısı çıkarılırsa cevap %u olur.", s, z, k); break;
                                            case 2: printf("Eğer %u sayısından %u sayısı çıkarılırsa cevap %u olmuş olur.", s, z, k); break;
                                        }
                                        break;
                                    }
                                    else if (b > a) {
                                        c = 0;
                                        TEKRARDENE;
                                        continue;
                                    }
                                }
                            }
                        } while (n == 0);
                    }

                    else if (k == x) {
                        TEBRIK;
                        printf(" ");

                        random0 = rand() % 3;
                        switch (random0) {
                            case 0: printf("%u sayısını yani %u sayısından %u sayısının çıkarılmış halini bulmayı başardın!", k, s, z); break;
                            case 1: printf("%u sayısından %u sayısının çıkmış halini yani %u sayısını bulmayı başardın!", s, z, k); break;
                            case 2: printf("%u sayısından %u sayısını çıkarmayı ve %u sayısını bulmayı başardın!", s, z, k); break;
                        }

                        random0 = rand() % 5;
                        switch (random0) {
                            case 0: printf(":-)"); break;
                            case 1: printf(":)"); break;
                            case 2: printf("\\\\)"); break;
                            case 3: printf(":-]"); break;
                            case 4: printf(":]"); break;
                        }
                        printf("\n");
                        n++;
                    }

                    if (n > 0) {
                        n = 0;
                        random0 = rand() % 7;

                        switch (random0) {
                            case 0: printf("Şimdi"); break;
                            case 1: printf("Pekala"); break;
                            case 2: printf("Tamam, şimdi"); break;
                            case 3: printf("Bunları bulduğuna göre"); break;
                            case 4: printf("Güzel, bunları bulduğuna göre artık"); break;
                            case 5: printf("Bunları bulduğana göre artık iki kare farkının diğer adımına geçebiliriz. Şimdi"); break;
                            case 6: printf("Güzel, şimdi"); break;
                        }

                        printf(" ");

                        random0 = rand() % 5;
                        switch (random0) {
                            case 0: printf("senden birinci karesini bulduğun sayıdan ikinci karesini bulduğun sayıyı çıkarmanı ve sonucunu yazmanı istiyorum. (%u - %u)\n", t, y); break;
                            case 1: printf("senden 1. karesini bulduğun sayıdan 2. karesini bulduğun sayıyı çıkarmanı ve sonucunu yazmanı istiyorum(%u - %u)\n", t, y); break;
                            case 2: printf("senden bulduğun %u sayısını, %u sayısından çıkarmanı ve sonucunu yazmanı istiyorum.\n", y, t); break;
                            case 3: printf("senden bulduğun %u sayısından, %u sayısını çıkarmanı ve sonucunu yazmanı istiyorum.\n", t, y); break;
                            case 4: printf("senden karesini %u bulduğun %u sayısından, karesini %u olarak bulduğun %u sayısını çıkarmanı ve sonucunu yazmanı istiyorum.\n", s, t, z, y); break;
                        }

                        while (scanf(" %u", &x) != 1) {
                            scanf("%*[^\n]");
                            scanf("%*c");
                        }
                        c = 0;
                        l = t - y;

                        if (x != l) {
                            TEKRARDENE;
                            do {
                                while (scanf(" %u", &x) != 1) {
                                    scanf("%*[^\n]");
                                    scanf("%*c");
                                }
                                c++;

                                if (l == x) {
                                    TEBRIK;
                            
                                    printf(" ");

                                    random0 = rand() % 3;

                                    switch (random0) {
                                        case 0: printf("%u sayısını yani %u sayısından %u sayısının çıkarılmış halini bulmayı başardın!", l, t, y); break;
                                        case 1: printf("%u sayısından %u sayısının çıkmış halini yani %u sayısını bulmayı başardın!", t, y, l); break;
                                        case 2: printf("%u sayısından %u sayısını çıkarmayı ve %u sayısını bulmayı başardın!", t, y, l); break;
                                    }

                                    random0 = rand() % 5;

                                    switch (random0) {
                                        case 0: printf(":-)"); break;
                                        case 1: printf(":)"); break;
                                        case 2: printf("\\\\)"); break;
                                        case 3: printf(":-]"); break;
                                        case 4: printf(":]"); break;
                                    }
                                    printf("\n");
                                    n++;
                                }

                                else if (l != x) {
                                    TEKRARDENE;

                                    if (c % 3 == 0) {
                                        random0 = rand() % 12;

                                        switch (random0) {
                                            case 0: printf("Eğer yardıma ihtiyacın varsa"); break;
                                            case 1: printf("Eğer yardım"); break;
                                            case 2: printf("Cevabı bulmakta zorlanıyorsan"); break;
                                            case 3: printf("Cevabı bulmakta yardım"); break;
                                            case 4: printf("Cevabı bulmakta güçlük çekiyorsan"); break;
                                            case 5: printf("Cevabı bulmakta yardım"); break;
                                            case 6: printf("Yardım"); break;
                                            case 7: printf("Eğer"); break;
                                            case 8: printf("Yardıma ihtiyacın varsa"); break;
                                            case 9: printf("Gerçekten yardım"); break;
                                            case 10: printf("Cevabı bulmak için yardıma ihtiyacın varsa"); break;
                                            case 11: printf("Eğer soruyu cevaplamakta zorlanıyorsan"); break;
                                        }

                                        printf(" istersen sana cevabı söyleyebilirim. İster misin? (Evet / Hayır)\n");
                                        scanf("%*c");
                                        SIFIRLAMA;
                                        EVET_HAYIR_LOOP;

                                
                                        if (a > b) {
                                            random0 = rand() % 3;
                                            n++;
                                            switch (random0) {
                                                case 0: printf("%u sayısından %u çıkarılırsa, cevap %u olur.", t, y, l); break;
                                                case 1: printf("%u sayısından %u sayısı çıkarılırsa cevap %u olur.", t, y, l); break;
                                                case 2: printf("Eğer %u sayısından %u sayısı çıkarılırsa cevap %u olmuş olur.", t, y, l); break;
                                            }
                                            break;
                                        }
                                        else if (b > a) {
                                            c = 0;
                                            TEKRARDENE;
                                            continue;
                                        }
                                    }
                                }
                            } while (n == 0);
                        }

                        else if (l == x) {
                            TEBRIK;

                            printf(" ");

                            random0 = rand() % 3;

                            switch (random0) {
                                case 0: printf("%u sayısını yani %u sayısından %u sayısının çıkarılmış halini bulmayı başardın!", l, t, y); break;
                                case 1: printf("%u sayısından %u sayısının çıkmış halini yani %u sayısını bulmayı başardın!", t, y, l); break;
                                case 2: printf("%u sayısından %u sayısını çıkarmayı ve %u sayısını bulmayı başardın!", t, y, l); break;
                            }

                            random0 = rand() % 5;

                            switch (random0) {
                                case 0: printf(":-)"); break;
                                case 1: printf(":)"); break;
                                case 2: printf("\\\\)"); break;
                                case 3: printf(":-]"); break;
                                case 4: printf(":]"); break;
                            }
                            printf("\n");
                            n++;
                        }
                    }


                if (n > 0) {
                    random0 = rand() % 7;
                    switch (random0) {
                        case 0: printf("Şimdi"); break;
                        case 1: printf("Pekala"); break;
                        case 2: printf("Tamam, şimdi"); break;
                        case 3: printf("Bunları bulduğuna göre"); break;
                        case 4: printf("Güzel, bunları bulduğuna göre artık"); break;
                        case 5: printf("Bunları bulduğana göre artık yeni soruma geçebiliriz. Şimdi"); break;
                        case 6: printf("Güzel, şimdi"); break;
                    }

                    printf(" ");

                    random0 = rand() % 5;
                    switch (random0) {
                        case 0: printf("ilk girdiğin %u sayısını, %u sayısı ile topla ve sonucunu yaz.\n", t, y); break;
                        case 1: printf("ilk karesini aldığın sayıyı yani %u sayısını, ikinci karesini aldığın sayıyı yani %u sayısı ile topla.\n", t, y); break;
                        case 2: printf("önce girdiğin %u sayısı ile sonra girdiğin %u sayısını topla.\n", t, y); break;
                        case 3: printf("önce girdiğin %u sayısı ile sonra giridiğin %u sayısını topla.\n", t, y); break;
                        case 4: printf("önce girip karesini aldığın %u sayısı ile, sonra girip karesini aldığın %u sayısını topla.\n", t, y); break;
                    }

                    while (scanf(" %u", &x) != 1) {
                        scanf("%*[^\n]");
                        scanf("%*c");
                    }
                    q = t + y;
                    c = 0;
                    n = 0;

                    if (q != x) {
                        TEKRARDENE;
                        do {
                            while (scanf(" %u", &x) != 1) {
                                scanf("%*[^\n]");
                                scanf("%*c");
                            }
                            c++;

                            if (q == x) {
                                TEBRIK;
                                n++;
                                printf(" ");
                                random0 = rand() % 3;

                                switch (random0) {
                                    case 0: printf("%u sayısı ve %u sayısının toplamı olan %u sayısını buldun!", t, y, q); break;
                                    case 1: printf("%u sayısıyla %u sayısının toplamı olan %u sayısını bulmayı başardın!", t, y, q); break;
                                    case 2: printf("%u sayısını yani %u sayısı ile %u sayısının toplamını buldun!", q, t, y); break;
                                }

                                random0 = rand() % 5;

                                switch (random0) {
                                    case 0: printf(":-)"); break;
                                    case 1: printf(":)"); break;
                                    case 2: printf("\\\\)"); break;
                                    case 3: printf(":-]"); break;
                                    case 4: printf(":]"); break;
                                }
                                printf("\n");
                            }

                            else if (q != x) {
                                TEKRARDENE;

                                if (c % 3 == 0) {
                                     random0 = rand() % 12;

                                     switch (random0) {
                                         case 0: printf("Eğer yardıma ihtiyacın varsa"); break;
                                         case 1: printf("Eğer yardım"); break;
                                         case 2: printf("Cevabı bulmakta zorlanıyorsan"); break;
                                         case 3: printf("Cevabı bulmakta yardım"); break;
                                         case 4: printf("Cevabı bulmakta güçlük çekiyorsan"); break;
                                         case 5: printf("Cevabı bulmakta yardım"); break;
                                         case 6: printf("Yardım"); break;
                                         case 7: printf("Eğer"); break;
                                         case 8: printf("Yardıma ihtiyacın varsa"); break;
                                         case 9: printf("Gerçekten yardım"); break;
                                         case 10: printf("Cevabı bulmak için yardıma ihtiyacın varsa"); break;
                                         case 11: printf("Eğer soruyu cevaplamakta zorlanıyorsan"); break;
                                     }

                                     printf(" istersen sana cevabı söyleyebilirim. İster misin? (Evet / Hayır)\n");
                                     scanf("%*c");
                                     SIFIRLAMA;
                                     EVET_HAYIR_LOOP;

                                     if (a > b) {
                                         random0 = rand() % 3;
                                         switch (random0) {
                                             case 0: printf("%u sayısı ve %u sayısının toplamı %u eder.", t, y, q); break;
                                             case 1: printf("%u sayısı ve %u sayısının toplamı %u sayısına eşittir.", t, y, q); break;
                                             case 2: printf("%u + %u = %u yani %u sayısının %u sayısıyla toplamı %u sayısına eşittir.", t, y, q, t, y, q); break;
                                         }
                                         printf("\n");
                                         n++;
                                         break;
                                     }
                                     else if (b > a) {
                                         c = 0;
                                         TEKRARDENE;
                                         continue;
                                     }
                                }
                            }
                        } while (n == 0);
                    }

                    else if (q == x) {
                        TEBRIK;
                        n++;
                        printf(" ");
                        random0 = rand() % 3;

                        switch (random0) {
                            case 0: printf("%u sayısı ve %u sayısının toplamı olan %u sayısını buldun!", t, y, q); break;
                            case 1: printf("%u sayısıyla %u sayısının toplamı olan %u sayısını bulmayı başardın!", t, y, q); break;
                            case 2: printf("%u sayısını yani %u sayısı ile %u sayısının toplamını buldun!", q, t, y); break;
                        }

                        random0 = rand() % 5;

                        switch (random0) {
                            case 0: printf(":-)"); break;
                            case 1: printf(":)"); break;
                            case 2: printf("\\\\)"); break;
                            case 3: printf(":-]"); break;
                            case 4: printf(":]"); break;
                        }
                        printf("\n");
                    }

                    if (n > 0) {
                        n = 0;
                        random0 = rand() % 7;
                        switch (random0) {
                            case 0: printf("Şimdi"); break;
                            case 1: printf("Pekala"); break;
                            case 2: printf("Tamam, şimdi"); break;
                            case 3: printf("Bunları bulduğuna göre"); break;
                            case 4: printf("Güzel, bunları bulduğuna göre artık"); break;
                            case 5: printf("Bunları bulduğana göre artık yeni soruma geçebiliriz. Şimdi"); break;
                            case 6: printf("Güzel, şimdi"); break;
                        }

                        printf(" ");

                        random0 = rand() % 3;
                        switch (random0) {
                            case 0: printf("bulduğun %u sayısı ve %u sayısını çarpmanı istiyorum.\n", l, q); break;
                            case 1: printf("bulduğun sayıları çarpmanı istiyorum. (%u X %u = ?)\n", l, q); break;
                            case 2: printf("%u sayısı ve %u sayısını çarpmanı istiyorum.\n", l, q); break;
                        }

                        while (scanf(" %u", &x) != 1) {
                           scanf("%*[^\n]");
                           scanf("%*c");
                        }
                        p = l * q;

                        if (p != x) {
                            TEKRARDENE;
                            do {
                                while (scanf(" %u", &x) != 1) {
                                    scanf("%*[^\n]");
                                    scanf("%*c");
                            }
                                c++;
                                if (p == x) {
                                    TEBRIK;
                                    printf(" ");

                                    random0 = rand() % 3;

                                    switch (random0) {
                                        case 0: printf("%u sayısı ile %u sayısının çarpımını yani %u sayısını buldun!", l, q, p); break;
                                        case 1: printf("%u sayısı ve %u sayısının çarpımı olan %u sayısını buldun.", l, q, p); break;
                                        case 2: printf("%u sayısını yani %u ve %u sayılarının çarpımını buldun!", p, l, q); break;
                                    }

                                    printf(" ");
                                    random0 = rand() % 5;

                                    switch (random0) {
                                        case 0: printf(":-)"); break;
                                        case 1: printf(":)"); break;
                                        case 2: printf("\\\\)"); break;
                                        case 3: printf(":-]"); break;
                                        case 4: printf(":]"); break;
                                    }
                                    printf("\n");
                                    n++;
                                }

                                else if (p != x) {
                                    TEKRARDENE;
                                    if (c % 3 == 0) {
                                        random0 = rand() % 12;

                                        switch (random0) {
                                            case 0: printf("Eğer yardıma ihtiyacın varsa"); break;
                                            case 1: printf("Eğer yardım"); break;
                                            case 2: printf("Cevabı bulmakta zorlanıyorsan"); break;
                                            case 3: printf("Cevabı bulmakta yardım"); break;
                                            case 4: printf("Cevabı bulmakta güçlük çekiyorsan"); break;
                                            case 5: printf("Cevabı bulmakta yardım"); break;
                                            case 6: printf("Yardım"); break;
                                            case 7: printf("Eğer"); break;
                                            case 8: printf("Yardıma ihtiyacın varsa"); break;
                                            case 9: printf("Gerçekten yardım"); break;
                                            case 10: printf("Cevabı bulmak için yardıma ihtiyacın varsa"); break;
                                            case 11: printf("Eğer soruyu cevaplamakta zorlanıyorsan"); break;
                                        }
                                        printf(" istersen sana cevabı söyleyebilirim. İster misin? (Evet / Hayır)\n");
                                        scanf("%*c");
                                        SIFIRLAMA;
                                        EVET_HAYIR_LOOP;

                                        if (a > b) {
                                            random0 = rand() % 3;
                                            switch (random0) {
                                                case 0: printf("%u ve %u sayısının çarpımı %u sayısına eşit olur.", l, q, p); break;
                                                case 1: printf("%u sayısı ile %u sayısının çarpımı %u sayısına eşit olur.", l, q, p); break;
                                                case 2: printf("%u X %u = %u yani %u sayısı ile %u sayısının çarpımı %u sayısına eşittir.", l, q, p, l, q, p); break;
                                            }
                                            n++;
                                            break;
                                        }

                                        else if (b > a) {
                                            c = 0;
                                            TEKRARDENE;
                                            continue;
                                        }
                                    }
                                }
                            } while (n == 0);
                        }

                        else if (p == x) {
                            TEBRIK;
                            printf(" ");

                            random0 = rand() % 3;

                            switch (random0) {
                                case 0: printf("%u sayısı ile %u sayısının çarpımını yani %u sayısını buldun!", l, q, p); break;
                                case 1: printf("%u sayısı ve %u sayısının çarpımı olan %u sayısını buldun.", l, q, p); break;
                                case 2: printf("%u sayısını yani %u ve %u sayılarının çarpımını buldun!", p, l, q); break;
                            }

                            printf(" ");
                            random0 = rand() % 5;

                            switch (random0) {
                                case 0: printf(":-)"); break;
                                case 1: printf(":)"); break;
                                case 2: printf("\\\\)"); break;
                                case 3: printf(":-]"); break;
                                case 4: printf(":]"); break;
                            }
                            printf("\n");
                            n++;
                        }
                    }
	        }

                    if (n > 0) {
                        n = 0;
                        printf("Yaptığın işlemlerden sonra tanımın neden böyle olduğunu anladın mı? (Evet / Hayır)\n");

                        scanf("%*c");
                        SIFIRLAMA;
                        EVET_HAYIR_LOOP;

                        if (b > a) {
                            printf("a² − b² = (a − b) X (a + b) yani bulduğun sayılarla %u - %u = (%u - %u) X (%u + %u) bu da %u = %u X %u olmuş olur ve bu da %u = %u oluyor.\n", s, z, t, y, t, y, p, l, q, p, p);
                            printf("Eğer istersen iki kare farkını tekrar edebiliriz, ister misin? (Evet / Hayır)\n");

                            scanf("%*c");
                            SIFIRLAMA;
                            EVET_HAYIR_LOOP;

                            if (b > a) {
                                random0 = rand() % 5;
                                switch (random0) {
                                    case 0: printf("Peki, programımızın bu bölümünü denediğin için teşekkürler.\n"); break;
                                    case 1: printf("Programımızı denediğin için teşekkürler, iyi dersler.\n"); break;
                                    case 2: printf("Programımızı test ettiğin için teşekkürler.\n"); break;
                                    case 3: printf("Programımızı denediğin için Teşekkürler. Yine bekleriz.\n"); break;
                                    case 4: printf("Programımızı test ettiğin için teşekkürler, başarılar dileriz.\n"); break;
                                }
                                break;
                            }
                            else if (a > b) {
                                continue;
                            }
                        }
                        else if (a > b) {
                            printf("Eğer istersen iki kare farkını tekrar edebiliriz, ister misin? (Evet / Hayır)\n");

                            scanf("%*c");
                            SIFIRLAMA;
                            EVET_HAYIR_LOOP;

                            if (b > a) {

                                random0 = rand() % 5;
                                switch (random0) {
                                    case 0: printf("Peki, programımızın bu bölümünü denediğin için teşekkürler.\n"); break;
                                    case 1: printf("Programımızı denediğin için teşekkürler, iyi dersler.\n"); break;
                                    case 2: printf("Programımızı test ettiğin için teşekkürler.\n"); break;
                                    case 3: printf("Programımızı denediğin için Teşekkürler. Yine bekleriz\n"); break;
                                    case 4: printf("Programımızı test ettiğin için teşekkürler, başarılar dileriz.\n"); break;
                                }
                                break;
		            }
                            else if (a > b) {
                                continue;
                            }
                        }
                    }
                }
                else if (b > a) {
                    random0 = rand() % 5;
                    switch (random0) {
                        case 0: printf("Peki, programımızın bu bölümünü denediğin için teşekkürler.\n"); break;
                        case 1: printf("Programımızı denediğin için teşekkürler, iyi dersler.\n"); break;
                        case 2: printf("Programımızı test ettiğin için teşekkürler.\n"); break;
                        case 3: printf("Programımızı denediğin için Teşekkürler. Yine bekleriz\n"); break;
                        case 4: printf("Programımızı test ettiğin için teşekkürler, başarılar dileriz.\n"); break;
                    }
                break;
                }
            }
        }
    return 0;
}
