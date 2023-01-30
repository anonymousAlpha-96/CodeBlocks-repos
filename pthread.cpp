//pthread creation and demonstration


#include <iostream>
#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
//function for Addition
void *functionOne (void *)
{
  int i;
  int sum;
  for (i = 0; i < 100; i++)
    {
      sum = i + 1;
    }
  cout << sum<<endl;
  return 0;
}

//function for multiplication
void *functionTwo (void *)
{
  int i;
  int multi;
  for (i = 1; i < 100; i++)
    {
      multi = i * 1;
    }
  cout << multi<<endl;
  return 0;
}


int
main ()
{
  pthread_t thread1, thread2;

  pthread_create (&thread1, NULL, functionOne, NULL);
  pthread_join (thread1, NULL);
  
  pthread_create (&thread2, NULL, functionTwo, NULL);
  pthread_join (thread2, NULL);

  return 0;
}
