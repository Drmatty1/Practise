void merge(int a[],int b[],int c[],int im,int jm){
     int i=0,j=0,k=0;
     // 1st loop for comparing;
     while(i<im&&j<jm){
         if(a[i]<b[j])
             c[k++]=a[i++];
             
         else 
             c[k++]=b[j++];
     }
     // 2nd to copy elements if remaining in a[]
     for(;i<im;i++)
        c[k++]=a[i++];
     // 3rd to copy elements if remaining in b[]
     for(;j<jm;j++)
        c[k++]=b[j++];
        
}
