

/*
HIDDEN MESSAGE

Rony and his friend Sadiq work in a detective organization .Important information between them is to be exchanged through short messages. But since this medium is based on online, their conversational messages are more likely to be stolen. So,they follow a new method to solve this problem. Their main appropriate message is formed when they arrange the uppercase letters and empty cells of their transmitted(sent) message one by one . However, they have recourse to your help, because their method is very time consuming. Now, you create a program so that they can see the original message.

Input
 The input contains several test cases. Each test case
 is composed by one line that contains a string sentence.
 This string will contain between 1 and 50 characters and
 space(don't use blank line). The input ends with end-of-file (EOF).

Output
 For each test case, print one line containing a string
 indicating appropriate message.
 The output must be a message like following example.


 WE will MEET TOmorrow,saDAYq.
WE will MEET TOmorrow,saDAYq.
brahMANbaria dIStrict
 */
 #include<stdio.h>
 #include<stdio.h>
 int main()
 {
     int a,b,c,i,j,k;
     char ar[100];
     char ch[26]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
     while(scanf("%[^\n]%*c",ar)!=EOF){
        //printf("%s\n",ar);
        c=strlen(ar);
        for(i=0;i<c;i++){
            for(j=0;j<26;j++){
                if(ar[i]==' '){
                    printf(" ");
                    break;
                }
                if(ar[i]==ch[j]){
                    printf("%c",ch[j]);
                    break;
                }
            }
        }
        printf("\n");
     }
     return 0;
 }
