all:
	@cmake -B build -G "Unix Makefiles"
	@cd build && make