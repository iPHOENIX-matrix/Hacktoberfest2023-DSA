//Contributed by: 
//Suvrajeet Jash (iPHOENIX-matrix)

#include <stdio.h>

int main(){
    int m,i,j,k,temp,x;
    printf("Enter the Size of the Array \n");
    scanf("%d",&m);
    int arr[m][m];
    printf("Enter the elements of the array \n");
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Original Matrix: \n");
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    //Sorting
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            for(k=0;k<m-j-1;k++){
                if(arr[i][k]>arr[i][k+1]){
                    temp=arr[i][k];
                    arr[i][k]=arr[i][k+1];
                    arr[i][k+1]=temp;
                }
            }
        }
    }

    //Printing Sorted Array
    printf("Row Wise Matrix: \n");
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    //Searching
    printf("Enter the Element to be Searched in Sorted Array \n");
    scanf("%d",&x);

    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(arr[i][j]==x){
                printf("%d is found at the location: %d,%d",x,i,j);
                break;
            }
        }
    }


}