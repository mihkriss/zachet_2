int minOperations(char  boxes, int returnSize){
    int len = strlen(boxes);
    int answer = malloc(len  sizeof(int));

    int i, j, steps;
    for(i=0; ilen; i++) {
        steps = 0;
        for(j=0; jlen; j++) {
            if (boxes[j] == '1') {
                steps += abs(i-j);
            }
        }
        answer[i] = steps;
    }

    returnSize = len;
    return answer;
}
