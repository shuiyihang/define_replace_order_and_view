PHONY +=menuconfig,clean
ARCH :=
file=!(define.c|define.h|makefile)
build: 
	gcc define.c define.h -o result.o

menuconfig:
ifeq ($(ARCH),arm)
	@echo "ARCH=arm"
else
	@echo "ARCH!=arm"
endif

clean:
	rm -rf *.out *.gch

#use 
#make ARCH=arm menuconfig