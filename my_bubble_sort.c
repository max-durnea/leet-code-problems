void bubble_sort(int array[],int size){
    int action=0;
    int i = 0;
    while(1){
        for(int j = 0;j<size-i;j++){
            if(array[j]>array[j+1]){
                action+=1;
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
        if(action==0){
            break;
        }
        action=0;
        i+=1;
        
    }
}
