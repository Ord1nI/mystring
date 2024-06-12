##
# Project Title
#
# @file
# @version 0.1
build:
	mkdir ./out
	clang tests/test_fgets.c mystring.c -o ./out/fget.out
	clang tests/test_getline.c mystring.c -o ./out/getline.out
	clang tests/test_puts.c mystring.c -o ./out/puts.out
	clang tests/test_strcat.c mystring.c -o ./out/strcat.out
	clang tests/test_strchr.c mystring.c -o ./out/strchr.out
	clang tests/test_strcpy.c mystring.c -o ./out/strcpy.out
	clang tests/test_strdup.c mystring.c -o ./out/strdup.out
	clang tests/test_strlen.c mystring.c -o ./out/strlen.out


# end
