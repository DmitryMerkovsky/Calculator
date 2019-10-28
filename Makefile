
all:
	git submodule update --init googletest
	+$(MAKE) -C root
	+$(MAKE) -C test
