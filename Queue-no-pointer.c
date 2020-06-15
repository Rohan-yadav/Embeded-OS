#define L 1024 //size of queue.
int q[L]; // declaring global variable for queue.
size_t q_head = 0; //queue head indicates first element of queue
size_t q_tail = 0; //queue tail indicates last element of queue
// here first head and tail is both zero because there is no element
// enqueue function is for load data in a queue.
void enqueue(int x)
{
q[q_tail] = x;
if (q_tail == L){
q_tail = 0;
}
else{
q_tail++;
}
}
//dequeue is the function for retrieving data that is stored in queue by FIFO method.
int dequeue(void)
{
int x = q[q_head];
if(q_head == L){ // if head is the last element then we have to make..
q_head = 0; // ..it first so that it will store next data on first index of queue.
exit(EXIT_FAILURE);
}
else{
q_head++;
return x;
}
}
int main()
{
int loadarr[] = {52,-29,36,-831,790,-650,1125,72,0,68,33,59};
//This is the data to be stored on queue
size_t N = sizeof(loadarr) / sizeof(int);
//print data of array
printf("data to be loaded on to the stack:\n");
for (size_t i = 0; i != N; ++i)
{
printf("%d ", loadarr[i]);
}
printf("\n");
printf("pushing data onto stack...\n");
for (size_t i = 0; i != 12; ++i)
{
enqueue(loadarr[i]); //Inserting data on queue.
}
printf("retrive data of queue...\n");
for (size_t i = 0; i != N; ++i){
printf("%d ",dequeue());
}
return EXIT_SUCCESS;
}
