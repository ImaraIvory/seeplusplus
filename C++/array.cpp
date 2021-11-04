#include <iostream>
#include <cmath>



int main()
{
    int luckyNums[20];// = {4, 8, 64, 23, 45}; // The [] says that this will be an array rather than a variable. 4 is the first element in the list.
    //            ^^ is telling the program to index 20 elements into luckyNums

    luckyNums[0] = 35;
    printf("%d \n", luckyNums[0]); //endl; //Indexes start at 0 and progress from there. 4 is 0, 8 is 1, 64 is 2 and so on.
    luckyNums [13] = 45; // extra elements can be assigned in this way up to the max (in this case 20) elements specified in the original int setup.
    printf("%d \n", luckyNums [13]); // endl;
    printf("%d \n", luckyNums [10]); // endl;
    printf("%d \n", luckyNums [9]); // endl;
    printf("%d \n", luckyNums [14]); // endl;
    printf("%d \n", luckyNums [15]); // endl;
    printf("%d \n", luckyNums [7]); // endl;
    printf("%d \n", luckyNums [20]); // endl;
    printf("%d \n", luckyNums [4]); // endl;
    printf("I am a meat popsicle");

    

    return 0;
}