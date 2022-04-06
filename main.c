#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <mpi.h>
#include <omp.h>

#include "helper.h"

int main(int argc, char ** argv)
{
    int node;
    fprintf(stdout,"Number available threads: %d\n",omp_get_max_threads());    
    MPI_Init(&argc,&argv);
    MPI_Comm_rank(MPI_COMM_WORLD,&node);

    printf("Hello from cpu %d\n",node);
    fprintf(stdout,"Number available threads: %d\n",omp_get_max_threads());    

    MPI_Finalize();

    return EXIT_SUCCESS;
}
