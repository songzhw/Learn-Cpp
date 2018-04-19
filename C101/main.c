/*
#include "math.h"

int main() {
    double percetage = percent(65);
    printf(" In main: result = %f \n", percetage); //=> 0.650000
    printf("[math.h] int tmp11 = 10; || main() tmp11 = %d \n", tmp11);

    return 0;
}
 */


#include <locale.h>
#include <stdio.h>
#include <time.h>

int main() {
    time_t currtime;
    struct tm *timer;
    char buffer[80];

    time(&currtime);
    timer = localtime(&currtime);

    printf("Locale is: %s\n", setlocale(LC_ALL, "en_GB")); //=> Locale is: en_GB
    strftime(buffer, 80, "%c", timer);
    printf("Date is: %s\n", buffer); //=> Date is: Wed 18 Apr 22:26:46 2018

    printf("Locale is: %s\n", setlocale(LC_ALL, "zh_CN")); //=>
    strftime(buffer, 80, "%c", timer);
    printf("Date is: %s\n", buffer); //=> Date is: 三  4/18 22:26:46 2018



    // ============ 2. Money ============

    struct lconv *lc;

    //=> (local) ￥ ;(internation) CNY
    setlocale(LC_MONETARY, "zh_GB");
    lc = localeconv();
    printf("Local Currency Symbol: %s\n", lc->currency_symbol);
    printf("International Currency Symbol: %s\n", lc->int_curr_symbol);

    //=>  $ ; USD
    setlocale(LC_MONETARY, "en_US");
    lc = localeconv();
    printf("Local Currency Symbol: %s\n", lc->currency_symbol);
    printf("International Currency Symbol: %s\n", lc->int_curr_symbol);

    //=> £ ; GBP
    setlocale(LC_MONETARY, "en_GB");
    lc = localeconv();
    printf("Local Currency Symbol: %s\n", lc->currency_symbol);
    printf("International Currency Symbol: %s\n", lc->int_curr_symbol);

    //=> Eu ; EUR  (备注: 即欧元)
    setlocale(LC_MONETARY, "it_IT");
    lc = localeconv();
    printf("Local Currency Symbol: %s\n", lc->currency_symbol);
    printf("International Currency Symbol: %s\n", lc->int_curr_symbol);

    printf("Decimal Point = %s\n", lc->decimal_point); //=> Decimal Point = .


    // ============ 3. Number ============

    setlocale(LC_NUMERIC, "zh_GB");
    lc = localeconv();
    printf("num %s - %s\n", lc->mon_thousands_sep, lc->thousands_sep);




    return 0;

}


