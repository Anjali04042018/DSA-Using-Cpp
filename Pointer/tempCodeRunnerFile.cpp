arr[10]= {1,3,5,6,8};
    cout<< arr<<endl;  // print address

    char ch[10] = "Anjali";
    cout<< ch<< endl;   // Print entire content.
    cout<< &ch<<endl;   // Print address
    cout<< &ch[0]<< endl;  // Print entire content
    cout<< ch[0]<< endl;  // Content of 0th index
    cout<< *ch<<endl;  // content of 0th index

    char temp = 'a';
    char *p = &temp;
    cout<< p<< endl;