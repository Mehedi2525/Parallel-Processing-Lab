#include <stdio.h>
#include <mpi.h>
     
int   main(int argc, char **argv)
   {
      int ierr, num_procs, my_id;

      MPI_Init(&argc, &argv);

      MPI_Comm_rank(MPI_COMM_WORLD, &my_id);
      MPI_Comm_size(MPI_COMM_WORLD, &num_procs);

      if(my_id%2){
      		 printf("World, my process id %d\n",my_id);
      }
      else{
      		 printf("Hello, my process id %d\n",my_id);
      }

      MPI_Finalize();
   }
