bool a(char*str){
    int counter = 0, idx = 0;
    while (str[idx] != '\0'){
        if (str[idx++] == '(')
            ++counter;
        else
            --counter;
        if (counter < 0)
            return false;
    }
    return counter == 0;
}