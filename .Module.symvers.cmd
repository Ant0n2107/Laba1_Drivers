cmd_/home/anton/lab1/Module.symvers := sed 's/ko$$/o/' /home/anton/lab1/modules.order | scripts/mod/modpost     -o /home/anton/lab1/Module.symvers -e -i Module.symvers   -T -
