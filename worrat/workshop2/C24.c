    #include <stdio.h>
    #include <math.h>
    int main()
    {
        float A;
        float B;

        scanf("%f", &A);
        scanf("%f", &B);

        float D =  A / pow(B,2);

        if (D > 30.0)
        {
        printf("Your BMI is %.2f\nYou are obese.",D);
        } 
        else if (D >= 25.0){
        printf("Your BMI is %.2f\nYou are overweight.",D);
        }
        else if (D >= 18.5){
        printf("Your BMI is %.2f\nYou are normal weight.",D);
        }
        else if (D < 18.5){
        printf("Your BMI is %.2f\nYou are underweight.",D);
        }

    }