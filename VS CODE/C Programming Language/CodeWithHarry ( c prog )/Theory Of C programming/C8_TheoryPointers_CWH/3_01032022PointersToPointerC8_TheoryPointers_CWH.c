
////////////////////////                          POINTERS TO A POINTER                                  ////////////////////////

/* Pointers to a pointer ::

Just like j is pointing to i or storing the address of i, we can have another variable, k which can store the address of j.
What will be the type of k?
Type of k is Pointer to a pointer.Aur isko likhane ke liye jis tarah   'pointer to an integer'   ko likhate the   int *  same
usi tarah 'pointer to a pointer to an integer' ko likhenge   int **   .  👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇

//                   int **k;
//                     k= &j;


//                     i                            j                              k
//                                                          
//                    [72]                        [87994]                        [87998]
//                                                             
//       address ->   87994           address  ->  87998                        address  ->  87998 
// 
//          Type ->   int                           int *                          int **


We can even go further one level and create a variable l (alphabet L) of type int *** to store the address of k. We mostly
use   int *      and    int **      sometimes in real-world programs.


*/
