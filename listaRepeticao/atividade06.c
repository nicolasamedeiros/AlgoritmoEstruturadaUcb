#include<stdio.h>
#include<time.h>

void wait ( int seconds )

{

clock_t endwait;

endwait = clock () + seconds * CLK_TCK;

while (clock() < endwait) {}

}

int main()
{
    int num = 10;

    for(num; num > 0; num--){
        printf("%d", num);
        wait(1);
        system("cls");
    }
    printf("FIM!");
}

