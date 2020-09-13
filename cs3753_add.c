#include <linux/kernel.h>
#include <linux/linkage.h>
#include <linux/module.h>
#include <linux/init.h>



asmlinkage long sys_cs3753_add(int number1, int number2)
{
    printk(KERN_ALERT "Value for number1 is %d\n", number1);
    printk(KERN_ALERT "Value for number2 is %d\n", number2);
    printk(KERN_ALERT "TEST");
    return number1 + number2;
}
