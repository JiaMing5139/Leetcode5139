struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *ret,*rear,*l1t,*l2t;
    int tmp=0,gewei=0,jinwei=0;
    int flag=0;
    ret=malloc(sizeof(struct ListNode));
    rear=ret;
    
    l1t=l1;
    l2t=l2;
    
    tmp=l1->val+l2->val;
    gewei=tmp%10;
   // printf("jinwei=%d gewei=%d\n",jinwei,gewei);
    ret->val=gewei;
    jinwei=tmp/10;
    printf("first jinwei=%d flag=%d \n",jinwei,flag);
    if(jinwei!=0)
        flag=1;
    else flag=0;
    
    l1t=l1t->next;
    l2t=l2t->next;
    
    while(l1t!=NULL&&l2t!=NULL)
    {
        tmp=l1t->val+l2t->val+jinwei;
        gewei=tmp%10;
        
        struct ListNode *node=malloc(sizeof(struct ListNode));
        rear->next=node;
        //printf("jinwei=%d gewei=%d\n",jinwei,gewei);
        node->val=gewei;
        jinwei=tmp/10;
         if(jinwei!=0)
        flag=1;
        else flag=0;
        rear=node;
        l1t=l1t->next;
        l2t=l2t->next;
              
    }  
    while(l1t!=NULL)
    {
        printf("将要处理的数字%d\n",l1t->val);
        struct ListNode *node=malloc(sizeof(struct ListNode));
        rear->next=node;
        
        tmp=l1t->val+jinwei;
        gewei=tmp%10;
       // printf("jinwei=%d gewei=%d\n",jinwei,gewei);
        node->val=gewei;
        
        jinwei=tmp/10;
        if(jinwei!=0)
        flag=1;
        else flag=0;
        rear=node;
        l1t=l1t->next;

    }       
   while(l2t!=NULL)
    {
        printf("将要处理的数字%d\n",l2t->val);
        struct ListNode *node=malloc(sizeof(struct ListNode));
        rear->next=node;
        
        tmp=l2t->val+jinwei;
        gewei=tmp%10;
        //printf("jinwei=%d gewei=%d\n",jinwei,gewei);
        node->val=gewei;
        
        
        jinwei=tmp/10;
        if(jinwei!=0)
        flag=1;
        else flag=0;
        rear=node;
        l2t=l2t->next;
    }  
     printf("first jinwei=%d flag=%d \n",jinwei,flag);
    if(flag!=0)
    {
        struct ListNode *node=malloc(sizeof(struct ListNode));
        rear->next=node;
        node->val=jinwei;
        rear=node;
    }
    rear->next=NULL;
    return ret;    
}