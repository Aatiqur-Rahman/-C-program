// for all character in string //

int Cinteger(string str){
    long long int num=0;
    int s=str.size();
    for(int i=0,j=s;i<s;i++){
        num+=((str[--j]-'0')*pow(10,i));
    }
    return num;
}

// for last character in string //

int getint(string str){
    int s=str.size();
    int num=0;
    num=((str[--s]-'0')*pow(10,0));
    return num;
}
