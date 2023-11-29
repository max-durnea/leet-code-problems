/**
You are given a 0-indexed array of strings words and a character x.

Return an array of indices representing the words that contain the character x.

Note that the returned array may be in any order.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int *res=(int *)malloc(wordsSize*sizeof(int));
    int k = 0;
    for(int i = 0;i<wordsSize;i++){
        int j = 0;
        while(words[i][j]!='\0'){
            if(words[i][j]==x){
                res[k]=i;
                k++;
                break;
            }
            j++;
        }
    }
    *returnSize=k;
    return res;
}
