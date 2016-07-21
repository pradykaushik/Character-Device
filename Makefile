obj-m = my_device_driver.o

KBUILD_CFLAGS += -w

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules $(KBUILD_CFLAGS)
	gcc my_producer.c -o my_producer.o
	gcc my_consumer.c -o my_consumer.o
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
