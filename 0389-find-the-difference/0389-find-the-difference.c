char findTheDifference(char* s, char* t) {
    int ssum=0;

    for(int i=0;s[i]!='\0';i++){
        ssum+=(int)s[i];

    }

    int tsum=0;
    for(int i=0;t[i]!='\0';i++){
        tsum+=(int)t[i];

    }
    int act=tsum-ssum;

    return (char)act;

    
}