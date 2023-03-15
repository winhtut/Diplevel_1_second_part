//
// Created by National Cyber City on 2/6/2023.
//


#include "stdio.h"
#include "zoom_online_bank.h"

int main(){
    space_counter();
    loadingAllDataFromFile();
//    printingAllData();
//    welcome();

    current_data_toTransfer(3000);
    calculate_amounts_same_days(0);

//    get_time();
//    printf("current edited time :%s",Ctime[0].c_time);

//    integer_to_char(1000);

    return 0;
}

