#include <stdio.h> 

void down(){
    printf("# # # # # # # # # # #\n");
    printf("  # # # # # # # # # \n");
    printf("    # # # # # # # \n");
    printf("      # # # # # \n");
    printf("        # # # \n");
    printf("          #  \n");
}
void up(){
    printf("          #  \n");
    printf("        # # # \n");
    printf("      # # # # # \n"); 
    printf("    # # # # # # # \n");
    printf("  # # # # # # # # # \n");
    printf("# # # # # # # # # # #\n");
}
void both(){
    printf("          #  \n");
    printf("        # # # \n");
    printf("      # # # # # \n"); 
    printf("    # # # # # # # \n");
    printf("  # # # # # # # # # \n");
    printf("# # # # # # # # # # #\n");
    printf("  # # # # # # # # # \n");
    printf("    # # # # # # # \n");
    printf("      # # # # # \n");
    printf("        # # # \n");
    printf("          #  \n");
}   
int main(){
    down();
    up();
    both();

    return 0;
}