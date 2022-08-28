#/home/darika/Desktop/Qt_install/6.3.1/gcc_64/bin/qmake
#/Users/girlhasnoname/Qt/6.2.4/macos/bin/qmake

CC = gcc -g
#user should type the path to qmake below while running 'make install' !!!
QMAKE_PATH =
LIN_FLAGS = -lpthread -pthread -lrt -lm -lsubunit
GCOVFLAGS = -fprofile-arcs -ftest-coverage
LDFLAGS = -fprofile-arcs --coverage
LCHECK = -lcheck
ifeq ($(shell uname), Linux)
LCHECK += $(LIN_FLAGS)
endif

SOURCES_TEST:= $(wildcard parser/*.c)

OBJ_GCOV_DIR := obj_gcov
OBJECTS_GCOV := $(addprefix obj_gcov/,$(SOURCES_TEST:.c=.o))
HEADER = parser/3d.h


all: install run

install:
#example 'make install QMAKE_PATH=/Users/girlhasnoname/Qt/6.2.4/macos/bin/qmake'
	sh build/script1.sh $(QMAKE_PATH)

run: install
	viewer.app/Contents/MacOS/./viewer

uninstall:
	rm -rf viewer.app

clean:
	# make clean_tests
	rm -rf viewer* build/.*q* \
	build/*.o build/*.h \
	build/*.cpp build/Makefile \
	build/viewer.app build/.tmp \
	rm -rf *.gz build/*bak

dvi:
	open doc/doc.pdf

dist:
	sh build/script2.sh

create_dir:
	@mkdir -p $(OBJ_GCOV_DIR)

test: parser/test/tests.c $(HEADER) $(OBJECTS_GCOV)
	$(CC) $< $(OBJ_GCOV_DIR)/*.o -o $@ $(LCHECK) $(LDFLAGS) $(GCOVFLAGS)
	./$@
	@mv *gcda *gcno $(OBJ_GCOV_DIR)/

gcov_report: test
	@rm -f $(OBJ_GCOV_DIR)/*tests*
	@lcov/bin/./lcov -c -d $(OBJ_GCOV_DIR)/. -o $(OBJ_GCOV_DIR)/coverage.info
	@lcov/bin/./genhtml $(OBJ_GCOV_DIR)/coverage.info --output-directory out

$(OBJ_GCOV_DIR)/%.o: %.c $(HEADER) create_dir
	@$(CC) $(GCOVFLAGS) -c $< -o obj_gcov/$(subst /,_,$@)
	# @mv *.o *gcno $(OBJ_GCOV_DIR)/




# tests: $(TEST_OBJ)
# 	checkmk clean_mode=1 test/test.check > test/test.c
# 	$(CC) source/backend.h $(TEST_OBJ) test/test.c -o test/exec -lcheck $(LIN_FLAGS) $(GCOVFLAGS) $(LDFLAGS)
# 	test/./exec

clean_tests: 
	rm -rf test/exec* test/test.c
	rm -rf test/obj/* test/coverage*
	rm -rf test/out

# gcov_report:
# 	make tests
# 	test/lcov/bin/./lcov -c -d test/obj/. -o test/coverage.info
# 	test/lcov/bin/./genhtml test/coverage.info --output-directory test/out
# 	open test/out/index.html

# test/obj/%.o: source/%.c source/backend.h
# 	$(CC) $(GCOVFLAGS) -c $< -o $@


.PHONY: all install run uninstall clean dvi dist gcov_report clean_tests