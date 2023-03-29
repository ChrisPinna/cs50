#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int NW;
    float TH;
    while (NW <= 0)
    {
    NW = get_int("Number of weeks taking CS50: ");
    }
    float weeks[NW];
    for (int i = 0; i < NW; i++) {
        weeks[i] = get_float("Week %i HW hours: ", i);
    }
    for (int i = 0; i < NW; i++) {
        TH += weeks[i];
    }
    char answer = get_char("Enter T for total hours, A for average hours per week: ");
    if(answer == 'T')
    {
        printf("%f hours\n",TH);
    } else if ( answer == 'A')
    {
        printf("%f hours\n", (TH / NW));
    }
}