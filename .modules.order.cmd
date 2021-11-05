cmd_/home/anton/lab1/modules.order := {   echo /home/anton/lab1/h.ko; :; } | awk '!x[$$0]++' - > /home/anton/lab1/modules.order
