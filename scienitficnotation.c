/*****************************************
 * scienitficnotation.c                  *
 *---------------------------------------*
 *    A program to change number into    *
 *    scientific notation.               *
 *****************************************
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int exponent = 0;
    double inp, init;
    
    scanf("%lf", &inp);
    
    init = inp;
    while((init > 1 && inp > 10) || (init < 1 && inp < 1))
    {
        if(inp == 0)
            break;
        inp = (inp > 1) ? inp / 10 : inp * 10; /*if inp is greater than 1 divide by 10
 else multiply by 10 this would change the 
 number to 1 or less valued decimal */
        exponent++; /*exponent increased
        after every iteration. At first
        iteration exponent is 0. Thus if
        you enter 10 the exponent would be
        0, making it 10^0, thus valued 1
        10¹ = 10. Hence scientific nota-
        tion would be 1*10^1. And so 
        on ... */
    }
    
    // output
    if(init > 1)
        printf("Notation is %lf*10^%d", inp, exponent );
    else if(init == 0)
        printf("input = %lf", init);
    else
        printf("Notation is %lf*10^-%d ", inp, exponent);
           

return 0;
}

//////////////////////////////////////////
// END OF PROGRAM ////////////////////////
//////////////////////////////////////////
//////////////////////////////////////////
