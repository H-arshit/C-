for(int i=0;i<n;i++)
         {
         int sum=0;
         for(int h=(i+1)%n;h!=((i+n)%n);h=(h+1)%n)
             {
                 sum=sum+M[i][h];
             }
         for(int z=(i+1)%n;z!=((i+n)%n);z=(z+1)%n)
             {
             sum=sum-M[z][i];
             }
             if(sum==0)
                 {
                 cout<<"possible"<<endl;
             }
         else
             {
             cout<<"impossible"<<endl;
             }
         }
