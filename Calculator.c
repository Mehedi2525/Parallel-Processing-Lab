#include <stdio.h>
#include <mpi.h>
     
int   main(int argc, char **argv)
   {
    int a,b;
    a=6, b=2;

     int num_procs, my_id;

     MPI_Init(&argc, &argv);

     MPI_Comm_rank(MPI_COMM_WORLD, &my_id);
     MPI_Comm_size(MPI_COMM_WORLD, &num_procs);

    if (my_id==0){
        printf("sum(a,b)= %d\n",a+b);
    }
    else if(my_id==1){
        printf("Subtraction(a,b)=%d\n",a-b);
    }
    else if (my_id==2){
        printf("Multiply(a,b)= %d\n",a*b);
    }
    else{
        printf("Division(a,b)= %d\n",a/b);
    }
    MPI_Finalize();
   }
