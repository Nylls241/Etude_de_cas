#ifdef OPT1

# include <stdlib.h> // malloc , qsort , free
# include <math.h> // fabs , fmax ( C99 )
static int cmp_double (const void * p1 ,
const void * p2 )

{
const double x = *(( double *) p1 );
const double y = *(( double *) p2 );
if ( x < y ) return -1;
if ( x > y ) return 1;
return 0;
}
// Computes maximum absolute difference
double kernel(unsigned n, const double a[n][n], const double b[n][n]) {
    double max = 0.0f;
    unsigned i, j;
    for (i = 0; i < n; i++) {
        double *tmp = malloc(n * sizeof(tmp[0]));
        for (j = 0; j < n; j++) {
            tmp[j] = fabs(a[i][j] - b[i][j]);
        }
        qsort(tmp, n, sizeof(tmp[0]), cmp_double);
        max = fmax(max, tmp[n - 1]);
        free(tmp);
    }
    return max;
}

#elif defined OPT2

# include <stdlib.h> // malloc , qsort , free
# include <math.h> // fabs , fmax ( C99 )
static int cmp_double (const void * p1 ,
const void * p2 )

{
const double x = *(( double *) p1 );
const double y = *(( double *) p2 );
if ( x < y ) return -1;
if ( x > y ) return 1;
return 0;
}
// Computes maximum absolute difference
double kernel(unsigned n, const double a[n][n], const double b[n][n]) {
    double max = 0.0f;
    unsigned i, j;
    for (i = 0; i < n; i++) {
        double *tmp = malloc(n * sizeof(tmp[0]));
        for (j = 0; j < n; j++) {
            tmp[j] = fabs(a[i][j] - b[i][j]);
        }
        qsort(tmp, n, sizeof(tmp[0]), cmp_double);
        max = fmax(max, tmp[n - 1]);
        free(tmp);
    }
    return max;
}

#else //OPT=NOOPT 

/* original */
# include <stdlib.h> // malloc , qsort , free
# include <math.h> // fabs , fmax ( C99 )
static int cmp_double (const void * p1 ,
const void * p2 )

{
const double x = *(( double *) p1 );
const double y = *(( double *) p2 );
if ( x < y ) return -1;
if ( x > y ) return 1;
return 0;
}
// Computes maximum absolute difference
double kernel(unsigned n, const double a[n][n], const double b[n][n]) {
    double max = 0.0f;
    unsigned i, j;
    for (i = 0; i < n; i++) {
        double *tmp = malloc(n * sizeof(tmp[0]));
        for (j = 0; j < n; j++) {
            tmp[j] = fabs(a[i][j] - b[i][j]);
        }
        qsort(tmp, n, sizeof(tmp[0]), cmp_double);
        max = fmax(max, tmp[n - 1]);
        free(tmp);
    }
    return max;
}

#endif
