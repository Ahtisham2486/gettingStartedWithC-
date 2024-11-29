// #include<stdio.h>
// float main()
// calculate the area of circle //
// {
//     float pi=3.14, r,area;
//     printf("enter the radius:", r);
//     scanf("%f",&r);
//     area = pi*r*r;
//     printf("the area is %f " , area);
//     return 0;


//     // the sum of two numbers //
//     int num1 ,num2, sum;
//     printf ("enter the two numbers ", num1 , num2);
//     scanf("%d%d",&num1,&num2);
//     sum = num1+num2;
//     printf("the sum of two numbers is %d /n" , sum);
//     return 0;
    
    // the simulation of calculator //
    #include<stdio.h>
    void main()
    {
        int num1 ,num2 , result ;
        char choice;

        printf("\n simulation of calculator \n");
        printf("****************************");

        printf("enter an operator(+,-,*,/,%%):");
        scanf("%c",&choice);

        printf("\n Enter any two numbers:");
        scanf("%d%d", &num1, &num2);
        switch (choice)
        {
        case'+':
            result = num1 +num2 ;
            printf("\n Addition of two numbers = %d", result);
            break;
        case'-':
             result= num1 - num2 ;
             printf("\n subtraction of two numbers =%d", result );
             break;
        case'*':
            result = num1*num2;
            printf("\n Multiplication of two numbers = %d", result );
            break;
        case '/':
            result = num1 / num2 ;
            printf("\n division of two numbers = %d", result );
            break;
        case '%':
            result= num1%num2 ;
            printf("\n remiander of the two numbers= %d", result);
            break;
        defualt:
            printf("\n invalid choice !");
            break;

        } 
    }
