#include <stdio.h>
#include <math.h> 
#include <ctype.h> 
int main(){
   // 1. find the largest among two numbers 
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a>b){
        printf("a: %d \n", a );
    } else {
        printf("b: %d \n", b); 
    }  
    // 2. find the largest among three numbers 
    int x,y,z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z); 
    if ((x>y)&&(x>z)){
        printf("x: %d \n", x);
    } else if (y>z){
        printf("y: %d \n", y);
    } else {
        printf("z: %d \n", z);
    }
   // 3. find the largest among two numbers using ternary 
    int p,q,result;
    scanf("%d", &p);
    scanf("%d", &q);
    result = (p>q) ? printf("%d \n", p): printf("%d \n", q); 
   // 4. find the largest among three numbers using ternary
    int m,n,o,res;
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &o); 
    res = ((m>n)&&(m>o)) ? printf("%d \n", m): (n>o) ? printf("%d \n", n) : printf("%d \n", o);  
   // 5. calculate the simple interest with the principal amt of 1 lakh for 3 years with rate of interest 8%
    int simple_interest, re; 
    int principal_amount = 100000;
    int time = 3;
    int interest = 0.08;
    re = (principal_amount*interest*time)/100;
    printf("simple_interest is: %d \n", re); 
  // 6. find the average of n numbers
    int number,average,i,sum;
    scanf("%d", &number); 
    sum=0;
    for (i=1; i<=number; i++){
        sum+=i;
    }
    printf("average is: %d \n", sum/number); 
    // 7. swap two numbers using temporary variable 
    int c,d;
    scanf("%d", &c);
    scanf("%d", &d);
    int temp=c;
    c=d;
    d=temp;
    printf("%d %d", c,d); 
    // 8. swap two numbers without using temporary variable
    int e=10;
    int f=20;
    e=e+f; // e=e*f;  // e=e^f;
    f=e-f; // f=e/f;  // f=e^f;
    e=e-f;  // e=e/f;  // e=e^f; 
    printf("%d %d", e,f); 

    
    // 9. check the year is leap year or not 
    int year;
    scanf("%d", &year);
    if ((year%4==0)&&(year%400==0)){
        printf("it's a leap year \n");
    } else {
        printf("not a leap year \n"); 
    }
    // 10. check the eligibilty of marriage wrt age 
   // below 18 = minor , 18-21 , above 100 and below 1 is invalid
    int age;
    scanf("%d", &age);
    if (age<18){
        printf("minor");
    } else if ((age>18)&&(age<=21)){
        printf("not eligible \n");
    } else if ((age>=21)&&(age<50)){ 
        printf("eligible \n");
    } else if (age>50){
        printf("expired \n");
    } else if ((age>=100)&&(age<1)){
        printf("invalid \n"); 
    } 
    // 11. find the grade using given attendance % or marks 
    int marks;
    scanf("%d", &marks);
    if (marks>=90){
        printf("O grade \n");
    } else if (marks>=80){
        printf("A+ grade \n");
    } else if (marks>=70){
        printf("A grade \n");
    } else if (marks >= 60){  
        printf("B+ grade \n");
    } else if (marks>=50){
        printf("B grade \n");
    } else{
        printf("Fail grade \n"); 
    } 




   // 12.    _._Self_Lover_._    -9
        char name[] = " _._Self_Lover_._ ";
        int count=0;
        for (int i=0; i<strlen(name); i++){
            if((name[i]>=65 && name[i]<=90)||(name[i]>=97 && name[i]<=122)){
                count+=1;
            }
        }
        printf("%d", count);




    //13.     Innocent_Guy        -2
    char nam[] = "Innocent_Guy";
    int sum = 0;
    for (int i=0; i<strlen(nam); i++){
        if(nam[i]>=65 && nam[i]<=90){
            sum++; 
        } 
    }
    printf("%d", sum);



    //14.     HeArTsTeAlEr        -hEaRtStEaLeR
        char ch[] = " HeArTsTeAlEr";
        for (int i=0; i<=strlen(ch)-1; i++){
            if(ch[i]>=65 && ch[i]<=90){
                printf("%c", ch[i]+32);  
            } else 
                printf("%c", ch[i]-32); 
        }





     //15.     _._Mr.InDiA        -  _._mR.iNdIa
    char cha[]= "_._Mr.InDiA";
    for (int i=0; i<=strlen(cha)-1; i++){
        if(cha[i]>=65 && cha[i]<=90){
            printf("%c", cha[i]+32);
        } else if (cha[i]>=97 && cha[i]<=122){
            printf("%c", cha[i]-32);
        } else {
            printf("%c", cha[i]); 
        }
    } 




     //16.    Dad_Little_Princess    - 14
    char character[] = " Dad_Little_Princess";
     int coun = 0;
    for (int i=0; i<=strlen(character)-1; i++){
        if (character[i]>=97 && character[i]<=122){
            coun++;
        }
    }
    printf("%d", coun); 

     //17.    Dusky_Queen1589     - 9851
    char charac[] =  "Dusky_Queen1589";
    for (int i=strlen(charac)-1; i>=0; i--){
        if (charac[i]>=48 && charac[i]<=57){
            printf("%c", charac[i]); 
        }
    } 


    return 0; 
}        