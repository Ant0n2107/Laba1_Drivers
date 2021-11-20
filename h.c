#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
static char *whom = "MAI";
module_param(whom, charp, 0644);
MODULE_PARM_DESC(whom, "Recipient of the hello message");
static int howmany = 1;
module_param(howmany, int, 0644);
MODULE_PARM_DESC(howmany, "Number of greetings");
static char *from = "Ant0n";
module_param(from, charp, 0644);
MODULE_PARM_DESC(from, "Who send the hello message");
static int __init hello_init(void)
{
	int i;
	for (i = 0; i < howmany; i++)
		pr_alert("(%d) Hello, %s from %s\n", i, whom, from);
	return 0;
}
static void __exit hello_exit(void)
{
	pr_alert("Goodbye, %s from %s\n", whom, from);
}
module_init(hello_init);
module_exit(hello_exit);
