// Author: - Pratik Chakraborty

#include <stdio.h>

int main()
{
    float weight, height, BMI;
    printf("Welcome in Body Mass Calculator !\n");
    printf("\nEnter your 'Weight' in KGS: - ");
    scanf("%f", &weight);
    getchar();
    printf("\nEnter your 'Height' in Meter: - ");
    scanf("%f", &height);
    getchar();

    BMI= weight/(height*height); //Calculating the BMI

    system("cls"); //For Screen Clear

    printf("Your BMI is : - %.2f\n", BMI); //Printing the Main BMI

    //Checking the Status

    if (BMI<=16)
    {
        printf("Your Status is Severe Thinness.");
    }

    else if (BMI<=17)
    {
        printf("Your Status is Moderate Thinness.");
    }

    else if (BMI<=18.5)
    {
        printf("Your Status is Mild Thinness.");
    }
    
    else if (BMI<=25)
    {
        printf("Your Status is Normal.");
    }
    
    else if (BMI<=30)
    {
        printf("Your Status is Overweight.");
    }
    
    else if (BMI<=35)
    {
        printf("Your Status is Obese Class I.");
    }

    else if (BMI<=40)
    {
        printf("Your Status is Obese Class II.");
    }

    else if (BMI>40)
    {
        printf("Your Status is Obese Class III.");
    }

    //Status Checking Complete

    printf("\nThank You for using Body Mass Index Program!\n");
    printf("\n\nPress any key to exit the program\n");
    getchar(); //Closing the Program
    
    return 0;
}
