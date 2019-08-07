 #include<stdio.h>
  int prime(int, int);
  void main()
	 {
         int c=0,numbr,k,remark=1;
         printf(" The first 100 prime no using recursion . . . \n");
         for(numbr=2;c<100;++numbr)
         {
         remark = prime(numbr, numbr/2);
         if(remark==1)
         {
		printf("%d ",numbr);
		c++;
         }
         }
	 printf("\n");
	 }

  int prime(int num, int max){
         if(max == 1)
         return 1;
         else
         {
         if(num % max == 0)
         return 0;
         else
         prime(num, max-1);
         }
         }
