#include <stdio.h>
#include <string.h>
#include <ctype.h>

void print_with_newlines(char *name) {
    // Iterálunk a név karakterein
    for (int i = 0; i < strlen(name); i++) {
        // Kiírjuk az aktuális karaktert
        printf("%c", name[i]);

        // Ha a karakter magánhangzó, új sort kezdünk
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' ||
            name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U') {
            printf("\n"); //A masodik feladathoz a \n-t itt \t\b-re kell cserelni
            }
    }
}
//3-as feladat 4hez:
void print_equation(int a, int b, int result) {
    printf("%d / %d = %d\n", a, b, result);
}



int main() {
    char name[100];

    // Bekérjük a nevet a felhasználótól
    printf("Add meg a neved: ");
    fgets(name, sizeof(name), stdin);

    // Eltávolítjuk a newline karaktert, ha van a név végén
    name[strcspn(name, "\n")] = '\0';

    // Kiírjuk az üdvözlő szöveget a megfelelő formátumban
    printf("Üdvözöllek ");
    print_with_newlines(name);
    printf(" a Prog1 gyakon!\n");

    //3-as feladat 1.
    printf("42/7=6\n");
    //3-as feladat 2.
    int a = 42; int b = 7; int result = 6;
    printf("%d/%d = %d\n", a, b, result);
    //3-as feladat 3.
    printf("%d / %d = %d\n", 42, 6, 42 / 6);
    //3-as feladat 4.
    result = a / b;
    print_equation(a, b, result);
    //4-es feladat:
    printf("int típus mérete: %lu byte (%lu bit)\n", sizeof(int), sizeof(int) * 8);
    printf("float típus mérete: %lu byte (%lu bit)\n", sizeof(float), sizeof(float) * 8);
    printf("double típus mérete: %lu byte (%lu bit)\n", sizeof(double), sizeof(double));
    //5-os feladat:
    int x; int y; int z; int w;
    printf("Adj meg 2 szamot: \n");
    scanf("%d", &x); scanf("%d", &y);
    z = x / y; w = x-z;
    printf("%d = %d * %d + %d,", x, z, y, w);
    //6-os feladat:
    int amount;
    printf("\nAdd meg az összeget: ");
    scanf("%d", &amount);
    printf("A(z) %d összeg kifizetése a következőképpen történhet:\n", amount);
    printf("%d darab 200 peták\n", amount / 200);
    amount %= 200;  // Az aktuális összeg a 200-as peták után
    printf("%d darab 100 peták\n", amount / 100);
    amount %= 100;
    printf("%d darab 50 peták\n", amount / 50);
    amount %= 50;
    printf("%d darab 20 peták\n", amount / 20);
    amount %= 20;
    printf("%d darab 10 peták\n", amount / 10);
    amount %= 10;
    printf("%d darab 5 peták\n", amount / 5);
    amount %= 5;
    printf("%d darab 1 peták\n", amount / 1);
    amount %= 1;
    //7-es feladat:
    int ac = 1;
    char kc = 'o', zc = '=', yc ='.';
    printf("%d sor az nem s%cr,\n", ac, kc);
    printf("%d sor az %.1f sor,\n", 4/2, 1/2.0);
    printf("Negy sor\t%c egy sor,\n", zc);
    printf("De %d sor az nem sor%c%c.\n", 10 && 3, yc, '.');
    //Kimenet: 1 sor nem sor, 2 sor fel sor, 4 sor 1 sor, de 1 sor az nem sor kulon sorokban
    //8-as feladat:
    int number;
    int answer, correct_answers = 0;
    int total_questions = 10;
    printf("\nAdd meg a számot a szorzótáblához: ");
    scanf("%d", &number);
    for (int i = 1; i <= total_questions; i++) {
        printf("%d * %d = ", number, i);
        scanf("%d", &answer);

        if (answer == number * i) {
            correct_answers++;
        }
    }
    printf("Helyes válaszok: %d / %d\n", correct_answers, total_questions);
    printf("Százalékos eredmény: %.2f%%\n", (correct_answers / (float)total_questions) * 100);
    //9-es feladat
    int aoldal; int boldal; int choice;
    printf("Add meg a teglalap 2 oldalat: \n");
    scanf("%d", &aoldal);
    scanf("%d", &boldal);
    double Eredmeny;
    printf("1. Terulet, 2. Kerulet, 3. Tovabblepes a feladatok kozott \n");
    while (choice != 3) {
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                Eredmeny = aoldal*boldal;
            printf("%.2lf a terulete a teglalapnak\n", Eredmeny);
            break;
            case 2:
                Eredmeny = 2*(aoldal+boldal);
            printf("%.2lf a kerulete a teglalapnak\n", Eredmeny);
            break;
            default:
                printf("Ilyen lehetoseg nincs!\n");
        }
    }
    //10-es feladat:
    double num1, num2, szamologepvegeredmeny;
    char operation;
    printf("Add meg az első számot: ");
    scanf("%lf", &num1);
    printf("Add meg a második számot: ");
    scanf("%lf", &num2);
    printf("Melyik műveletet szeretnéd végrehajtani? (+, -, *, /): ");
    scanf(" %c", &operation);
    switch(operation) {
        case '+':
            szamologepvegeredmeny = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, szamologepvegeredmeny);
        break;
        case '-':
            szamologepvegeredmeny = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, szamologepvegeredmeny);
        break;
        case '*':
            szamologepvegeredmeny = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, szamologepvegeredmeny);
        break;
        case '/':
            if (num2 != 0) {
                szamologepvegeredmeny = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, szamologepvegeredmeny);
            } else {
                printf("Hiba: nullával való osztás nem lehetséges!\n");
            }
        break;
        default:
            printf("Hibás művelet!\n");
        break;
    }
    //11-es feladat:
    int num;
    while (1) {
        printf("Add meg a számot (0 a kilepéshez): ");
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        if (num % 3 == 2) {
            printf("A(z) %d 3-mal osztva 2 maradékot ad.\n", num);
        } else {
            printf("A(z) %d nem ad 2 maradékot, amikor 3-mal osztjuk.\n", num);
        }
    }
    //12-es feladat:
    int n;
    printf("Add meg az egész számot: ");
    scanf("%d", &n);
    printf("A(z) %d-ig található négyzetszámok:\n", n);
    for (int i = 1; i * i <= n; i++) {
        printf("%d\n", i * i);
    }
    //13-as feladat:
    double x1, y1, x2, y2;
    double ehossz, emetszespont;
    double felhx, felhy;
    printf("Add meg az elso pont koordinatait (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Add meg a masodik pont koordinatait (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);
    if (x1 == x2) {
        printf("A ket pont ugyanazon az egyenesen fekszik, es a meredekseg szamolasa nem lehetséges (oszto megosztottsag).\n");
        return 1;  // Kilépünk a programból
    }
    ehossz = (y2 - y1) / (x2 - x1);
    emetszespont = y1 - ehossz * x1;
    printf("Az egyenes egyenlete: y = %.2lfx + %.2lf\n", ehossz, emetszespont);
    while (1) {
        printf("Add meg a keresett x erteket (0 a kilepeshez): ");
        scanf("%lf", &felhx);
        if (felhx == 0) {
            break;
        }
        felhy = ehossz * felhx + emetszespont;
        printf("A(z) %.2lf x ertekhez tartozó y ertek: %.2lf\n", felhx, felhy);
    }


    return 0;
}
