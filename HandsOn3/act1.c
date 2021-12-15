SYSCALL_DEFINE1(my_syscall , char *, msg)
{
    printk(KERN_INFO "my_syscall :\"%s\"\n", msg);
    return 0;
}
//escriu al log del sistema una crida a sistema que li passem i escriu la string guardada a la variable 'msg'


//
