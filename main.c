#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validasi3(){
    int value;
    char temp;
    if(scanf("%d%c", &value, &temp) != 2 || temp != '\n' || value < 1 || value > 3){
        fflush(stdin);
        printf("Input salah");
        return validasi3();
    }else{
        return value;
    }
}
int validasi2(){
    int value;
    char temp;
    if(scanf("%d%c", &value, &temp) != 2 || temp != '\n' || value < 1 || value > 2){
        fflush(stdin);
        printf("Input salah");
        return validasi2();
    }else{
        return value;
    }
}
int validasi6(){
    int value;
    char temp;
    if(scanf("%d%c", &value, &temp) != 2 || temp != '\n' || value < 1 || value > 6){
        fflush(stdin);
        printf("Input salah");
        return validasi6();
    }else{
        return value;
    }
}
int validasi10(){
    int value;
    char temp;
    if(scanf("%d%c", &value, &temp) != 2 || temp != '\n' || value < 1 || value > 10){
        fflush(stdin);
        printf("Input salah");
        return validasi10();
    }else{
        return value;
    }
}
void lineTop()
{
    printf("\n\t\t\e[32m\xC9\xCD\xCD\xCD\xCD\xCD\xBB\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xC9\xCD\xCD\xCD\xCD\xCD\xBB\e[0m\n");
}

void lineBot()
{
    printf("\t\t\e[32m\xC8\xCD\xCD\xCD\xCD\xCD\xBC\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xC8\xCD\xCD\xCD\xCD\xCD\xBC\e[0m\n");
}

void lineConnector()
{
    printf("\t\t\e[32m\xBA\xCD\xCD\xCD\xCD\xCD\xBA\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBA\xCD\xCD\xCD\xCD\xCD\xBA\e[0m\n");
}
// float pricePcperHour[3][3] = {
//     {15000, 10000, 5000}, // Pagi {exe, vip, reg} jam 6 - 10 
//     {21000, 14000, 7000}, // Siang {exe, vip, reg} jam 10 - 18
//     {12000, 8000, 4000}  // Malam {exe, vip, reg} jam 18 - 6 
// };
float pricePcperHour[3][3][6] = {
    //exe                                         vip                                        reg
    {{15000, 25000, 36000, 45000, 55000, 65000}, {10000, 17000, 23000, 27000, 33000, 39000}, {5000, 8000, 11000, 15000, 19000, 22000}}, // moring
    {{21000, 29000, 40000, 54000, 62000, 70000}, {14000, 25000, 33000, 41000, 50000, 59000}, {7000, 11000, 19000, 25000, 31000, 38000}}, // afternoon
    {{12000, 20000, 29000, 36000, 44000, 50000}, {8000, 14000, 20000, 28000, 36000, 40000}, {4000, 8000, 11000, 13000, 16000, 18000}} // night
};
float pricePerHour = 0;
float priceFoodnDrink[10] = {
    3000, // tea (ice/hot) 
    4000, // coffe  (ice/hot)
    5000, // milk (ice/hot)
    10000, // fried noodle 
    10000, // noodle soup 
    12000, // toast 
    3000, // lays 
    3000, // chitato 
    6000, // Milky Joss
    1000, // candy 
};
void priceMorning(){
    printf("Morning Session\n");
    printf("|| Room       || 1 hour\t\t|| 2 hour\t|| 3 hour\t|| 4 hour\t|| 5 hour\t|| 6 hour\t||\n");
    printf("|| Executive  || Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t||\n", pricePcperHour[0][0][0], pricePcperHour[0][0][1], pricePcperHour[0][0][2], pricePcperHour[0][0][3],pricePcperHour[0][0][4], pricePcperHour[0][0][5]);
    printf("|| VIP        || Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t||\n", pricePcperHour[0][1][0], pricePcperHour[0][1][1], pricePcperHour[0][1][2], pricePcperHour[0][1][3],pricePcperHour[0][1][4], pricePcperHour[0][1][5]);
    printf("|| Reguler    || Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t||\n", pricePcperHour[0][2][0], pricePcperHour[0][2][1], pricePcperHour[0][2][2], pricePcperHour[0][2][3],pricePcperHour[0][2][4], pricePcperHour[0][2][5]);
}
void priceAfternoon(){
    printf("Afternoon Session\n");
    printf("|| Room       || 1 hour\t\t|| 2 hour\t|| 3 hour\t|| 4 hour\t|| 5 hour\t|| 6 hour\t||\n");
    printf("|| Executive  || Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t||\n", pricePcperHour[1][0][0], pricePcperHour[1][0][1], pricePcperHour[1][0][2], pricePcperHour[1][0][3],pricePcperHour[1][0][4], pricePcperHour[1][0][5]);
    printf("|| VIP        || Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t||\n", pricePcperHour[1][1][0], pricePcperHour[1][1][1], pricePcperHour[1][1][2], pricePcperHour[1][1][3],pricePcperHour[1][1][4], pricePcperHour[1][1][5]);
    printf("|| Reguler    || Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t||\n", pricePcperHour[1][2][0], pricePcperHour[1][2][1], pricePcperHour[1][2][2], pricePcperHour[1][2][3],pricePcperHour[1][2][4], pricePcperHour[1][2][5]);
}
void priceNight(){
    printf("Night Session\n");
    printf("|| Room       || 1 hour\t\t|| 2 hour\t|| 3 hour\t|| 4 hour\t|| 5 hour\t|| 6 hour\t||\n");
    printf("|| Executive  || Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t||\n", pricePcperHour[2][0][0], pricePcperHour[2][0][1], pricePcperHour[2][0][2], pricePcperHour[2][0][3],pricePcperHour[2][0][4], pricePcperHour[2][0][5]);
    printf("|| VIP        || Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t||\n", pricePcperHour[2][1][0], pricePcperHour[2][1][1], pricePcperHour[2][1][2], pricePcperHour[2][1][3],pricePcperHour[2][1][4], pricePcperHour[2][1][5]);
    printf("|| Reguler    || Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t|| Rp%.2f\t||\n", pricePcperHour[2][2][0], pricePcperHour[2][2][1], pricePcperHour[2][2][2], pricePcperHour[2][2][3],pricePcperHour[2][2][4], pricePcperHour[2][2][5]);
}
int pickRoom(int kode){
    lineTop();
    printf("\t\t\e[32m\xBA>>>>>\xBA\e[0m   - ~ - ~ - ~ - ~ - ~ PICK YOUR ROOM - ~ - ~ - ~ - ~ - \e[32m\xBA<<<<<\xBA\e[0m\n");
    lineBot();
    printf("1. Room Executive\n");
    printf("2. Room VIP\n");
    printf("3. Room Reguler\n");
    kode = validasi3();
    return (kode-1);
}
int pickHour(int code){
    lineTop();
    printf("\t\t\e[32m\xBA>>>>>\xBA\e[0m   - ~ - ~ - ~ - ~ - ~ PICK YOUR HOUR - ~ - ~ - ~ - ~ - \e[32m\xBA<<<<<\xBA\e[0m\n");
    lineBot();
    printf("1. 1 hour\n");
    printf("2. 2 Hour\n");
    printf("3. 3 Hour\n");
    printf("4. 4 Hour\n");
    printf("5. 5 Hour\n");
    printf("6. 6 Hour\n");
    code = validasi6();
    return code;
}
void totalOfCost(char session[], char room[], float pricePerHour, int codeHour, float priceOfFood){
    float subTotal = pricePerHour * codeHour;
    float total = subTotal + priceOfFood;
    lineTop();
    printf("\t\t\e[32m\xBA>>>>>\xBA\e[0m   - ~ - ~ - ~ - ~ - ~ TOTAL OF COST - ~ - ~ - ~ - ~ - \e[32m\xBA<<<<<\xBA\e[0m\n");
    printf("Session : %s\n", session);
    printf("Room : %s\n", room);
    printf("Price/Hour : Rp%.2f\n", pricePerHour);
    printf("Hour : %d\n", codeHour);
    printf("Subtotal Price : Rp%.2f\n", subTotal);
    printf("Food & Drink : Rp%.2f\n", priceOfFood);

    printf("Total Price : Rp%.2f\n", total);

    lineBot();
}
void listOfSnackAndDrink(){
    printf("\t\t\e[32m\xBA>>>>>\xBA\e[0m   - ~ - ~ - ~ - ~ - ~ LIST OF SNACK & DRINK - ~ - ~ - ~ - ~ - \e[32m\xBA<<<<<\xBA\e[0m\n");
    printf(" 1. Tea (Ice/Hot)         Rp%.1f\n", priceFoodnDrink[0]);
    printf(" 2. Coffee (Ice/Hot)      Rp%.1f\n", priceFoodnDrink[1]);
    printf(" 3. Milk (Ice/Hot)        Rp%.1f\n", priceFoodnDrink[2]);
    printf(" 4. Fried Noodle          Rp%.1f\n", priceFoodnDrink[3]);
    printf(" 5. Noodle Soup           Rp%.1f\n", priceFoodnDrink[4]);
    printf(" 6. Toast                 Rp%.1f\n", priceFoodnDrink[5]);
    printf(" 7. Lays                  Rp%.1f\n", priceFoodnDrink[6]);
    printf(" 8. Chitato               Rp%.1f\n", priceFoodnDrink[7]);
    printf(" 9. Milky Joss            Rp%.1f\n", priceFoodnDrink[8]);
    printf("10. Candy                 Rp%.1f\n", priceFoodnDrink[9]);
}
float buySnackAndDrink(){
    float sum = 0;
    int point = 1;
    int temp = 0;
    int i = 0;
    int check = 0;
    lineTop();
    listOfSnackAndDrink();
    printf("What Do You Want?\n");
    while(point){
        temp = validasi10();
        sum += priceFoodnDrink[temp -1];
        printf("Do you want something else?\n");
        printf("1. Yes\n");
        printf("2. No\n");
        check = validasi2();
        if(check == 1){
            listOfSnackAndDrink();
            printf("What Do You Want?\n");
        }else if(check == 2){
            printf("Thank you\n");
            point = 0;
        }
    }
    return sum;
}
float snacknDrink(){
    float priceFoodnDrink;
    lineTop();
    printf("\t\t\e[32m\xBA>>>>>\xBA\e[0m   - ~ - ~ - ~ - ~ - ~ SNACK & DRINK - ~ - ~ - ~ - ~ - \e[32m\xBA<<<<<\xBA\e[0m\n");
    printf("Are you want to buy some snack or drink?\n");
    printf("1. Yes\n");
    printf("2. No\n");
    int code = validasi2();
    switch(code){
        case 1:
            priceFoodnDrink = buySnackAndDrink();
            break;
        case 2:
            printf("Wokay Thank You\n");
            break;
        default:
            break;
    }
    lineBot();
    return priceFoodnDrink;
}
void pickSession(int codeSession, int codeRoom, int codeHour){
    float priceOfFood = 0;
    char session[10] = "";
    char room[10] = "";
    lineTop();
    printf("\t\t\e[32m\xBA>>>>>\xBA\e[0m   - ~ - ~ - ~ - ~ - ~ PICK YOUR SESSION - ~ - ~ - ~ - ~ - \e[32m\xBA<<<<<\xBA\e[0m\n");
    lineBot();
    printf("1. Morning\n");
    printf("2. Afternoon\n");
    printf("3. Night\n");
    printf("Input : ");
    codeSession = validasi3();
    switch (codeSession){
        case 1:
            priceMorning();
            strcpy(session, "Morning");
            break;
        case 2:
            priceAfternoon();
            strcpy(session, "Afternoon");
            break;
        case 3:
            priceNight();
            strcpy(session, "Night");
            break;
        default:
            break;
    }
    codeRoom = pickRoom(codeRoom);
    switch (codeRoom)
    {
    case 1:
        strcpy(room, "Executive");
        break;
    case 2:
        strcpy(room, "VIP");
        break;
    case 3:
        strcpy(room, "Regular");
        break;
    default:
        break;
    }
    codeHour = pickHour(codeHour);
    pricePerHour = **pricePcperHour[codeSession-1, codeRoom, codeHour-1];
    priceOfFood = snacknDrink();
    totalOfCost(session, room, pricePerHour, codeHour, priceOfFood);
}
int main(){
    int codeSession, codeRoom, codeHour;
    pickSession(codeSession, codeRoom, codeHour);
}