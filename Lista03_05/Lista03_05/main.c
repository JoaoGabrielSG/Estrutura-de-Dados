//
//  main.c
//  Lista03_05
//
//  Created by joão gabriel on 25/11/16.
//  Copyright © 2016 bepid. All rights reserved.
//

#include <stdio.h>

int mdc(int a,int b)
{
    if(b == 0)
        return a;
    else
        return mdc(b,a%b);
}

int main(int argc, const char * argv[]) {
    
    printf("MDC: %d", mdc(30, 25));
    
}
