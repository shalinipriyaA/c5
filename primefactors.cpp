#include <iostream>
#include <cmath>

main()
{
      int n,i,j,usernum;
      bool flag;
      j=0;
      
      std::cout<<"This program prime factorizes numbers."<<std::endl<<std::endl<<"Enter a number to be prime factorized."<<std::endl<<std::endl<<std::endl<<"  > ";
      std::cin>>usernum;
      
      int primes[usernum];
       
       for(n=2;n<usernum;n++)
       {
            flag=true;
            for(i=2;i<=sqrt(n);i++)
            if(n%i==0)
            {
                 flag=false;
                 break;
            }
            if(flag==true)
            {
                 primes[j]=n;
                 j++;
            }
       }
       
       std::cout<<std::endl<<std::endl;
       
       for(n=0;n<j;n++)
       {
            if(usernum%primes[n]==0)
            {
            	while(usernum%primes[n]==0)
            	{
            		std::cout<<" "<<primes[n]<<" ";
            		usernum=usernum/primes[n];
            	}
            }
       }
       
       if (usernum!=1)
       {
            std::cout<<" "<<usernum<<std::endl;
       }
}
