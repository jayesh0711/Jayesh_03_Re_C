#include<stdio.h>
void main()
{
	int array[5] ,small,large,i;
	for(i=0; i<5;i++)
	{
		scanf("%d", &array[i]);
	}
	small =array[0];
	large =array[0];
	for(i=1;i<5;i++)
	{
		if(array[i]<small)
		{
			small=array[i];
		}
	if(array[i]>large)
	{
		large=array[i];
	}
	}
	printf("large=%d small=%d",small, large);
	
        
       

}

// #include<stdio.h>
// void largest (int);
// void smallest( int);
// int i;
// void main()
// {
//     int array[10]={10,30,20,40,60,70,50,23,4,5,};
//     largest(array[]);
//     smallest(array[]);

// }
// void largest(int array[])
// {
//     for(i=0;i<10;i++)
//     {
//        if(array[i]==70)
//        {
//         printf("largest number in the array %d the position %d array",array[i],i);
//        }
//     }
// }
// void smallest( int array[])
// {
//     for(i=0;i<10;i++)
//     {
//         if(array[i]==4)
//         {
//             printf("smallest number in the array %d,in the position%d",array[i],i);
//         }
//     }
// }