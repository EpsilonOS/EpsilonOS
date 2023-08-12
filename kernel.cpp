void printf(char *str){
    unsigned short *VideoMemory=(unsigned short*)0xb8000; 
    for(int i=0;str[i]!='\0';i++){
        VideoMemory[i]=(VideoMemory[i]&0xff00)|str[i];
    }
}

extern "C" void kmain(void *multiboot_structure,unsigned int magicnumber){//entry point of kernel
    printf("tiger cat");
    while(1);
}