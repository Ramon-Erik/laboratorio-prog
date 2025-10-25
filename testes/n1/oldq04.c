#include <stdio.h>

int main() {
    unsigned char num, pos, mask = 0x01;
    
    puts("num: ");
    scanf("%hhu", &num);
    
    puts("pos: ");
    scanf("%hhu", &pos);

    // mask = mask << pos-1;
    num = num | (mask << --pos); 

    printf("novo num: %hhu\n", num);
}

// Ligar bit

// #include <stdio.h>

// int main(){
//     unsigned char a = 2;

//     unsigned char p;

//     puts("Qual posição deseja ligar? ");
//     scanf("%hhu",&p);

//     unsigned char mask = 0x01;

//     mask = mask << (p-1);

//     unsigned char out = mask | a;

//     printf("Input : %hhu\n",a);
//     printf("Output : %hhu\n",out);


//     return 0;
// }