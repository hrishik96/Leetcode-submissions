int rotateString(char* s, char* goal) {
    int l=strlen(s);
   char s_2[2*l+1];
    int q=strlen(goal);
    if(l!=q){
        return false;
    }

   strcpy(s_2,s);
   int i,k=0;
   for(i=l;s[k]!='\0';i++){
    s_2[i]=s[k];
    k++;
   }
   s_2[i]='\0';

   if(strstr(s_2,goal)){
    return true;
   }
   else{
    return false;

   }
    
    
}