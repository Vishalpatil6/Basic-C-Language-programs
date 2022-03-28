 #include <stdio.h>  
 void main()
 {
     long num, decimal_num, remainder, base = 1, binary = 0, no_of_1s = 0;
  
     printf("Enter a decimal integer:");
     scanf("%ld", &num);
     decimal_num = num;
     while (num > 0)
     {
         remainder = num % 2;
         /*  To count no.of 1s */
         if (remainder == 1)
         {
             no_of_1s++;
         }
         binary = binary + remainder * base;
         num = num / 2;
         base = base * 10;
     }
     printf("\nInput number is = %d", decimal_num);
     printf("\nIts binary equivalent is = %ld", binary);
     printf("\nNo.of 1's in the binary number is = %d", no_of_1s);
 }
