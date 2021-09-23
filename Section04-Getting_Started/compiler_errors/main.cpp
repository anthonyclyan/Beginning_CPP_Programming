// Compiler error
#include <iostream>
int main(){
    std::cout << "Un-comment cases to view error" << std::endl;
    return 0;
}

/* 
======== Syntax error ========
#include <iostream>

int main(){
    std::cout << "Hello world << std::endl;
    return 0;
}
======================== 
*/


/* 
======== Syntax error ========
#include <iostream>

int main(){
    std::cout << "Hello world" << std::endll;
    return 0;
}
======================== 
*/


/* 
======== Syntax error ========
#include <iostream>

int main(){
    std::cout << "Hello world" << std::endl;
    return 0
}
======================== 
*/


/* 
======== Syntax error ========
#include <iostream>

int main(){
    std::cout << "Hello world" << std::endl;
    return;
}
======================== 
*/


/* 
======== Semantic error ========
#include <iostream>

int main(){
    std::cout << "Hello world" << std::endl;
    return "Joe";
}
======================== 
*/


/* 
================
#include <iostream>

int main()
    std::cout << "Hello world" << std::endl;
    return 0;
}
======================== 
*/


/* 
================
#include <iostream>

int main(){
    std::cout << ("Hello world" / 125) << std::endl;
    return 0;
}
======================== 
*/


/*
======== Linker error ================ 
#include <iostream>

extern int x;

int main(){

    std::cout << "Hello world" << std::endl;

    std::cout << x;
    
    return 0;
}
======================== 
*/