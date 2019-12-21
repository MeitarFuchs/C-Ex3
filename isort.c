#include <stdio.h>
#define LEN 50 

void shift_element(int *arr, int i);
void insertion_sort (int *arr , int len);

void shift_element(int *arr, int i)
{
  int temp1=*(arr);
    int temp2= *(arr+1);
    for (int j=0; j< i; j++)
    {
       arr+=1;
        *(arr)=temp1;
         temp1=temp2;
         temp2=*(arr+1);

   } 
}
 void insertion_sort (int *arr , int len)
 {
 for (int i=1; i<len; i++)
 {
   int *p =arr+i;
   int count=0;
   int t= *(arr+i);
   while (arr!=p && t<*(p-1))
   {
       p--;
       count++;
   }
   if (count!=0)
   {   shift_element(p,count);}
   *p=t;
 }
}
int main()
{
    int count=0;
int arr [LEN];
int num=0;
while(count<LEN)
{
scanf("%d",&num);
*(arr+count)=num;
count++;
}
insertion_sort(arr,count);

 for (int i=0; i<LEN; i++)
 {
     if (i==LEN-1)
     printf("%d",*(arr+i));
else
printf("%d,",*(arr+i));
 }
return 0;

}
