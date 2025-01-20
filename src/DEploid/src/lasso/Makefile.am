DEPLOIDLASSOVERSION = $(shell git show HEAD | head -1 | sed -e "s/commit //g" | cat)
EXTRA_DIST = bootstrap

COMPILEDATE = $(shell date -u | sed -e "s/ /-/g")
distdir = $(PACKAGE)-$(VERSION)

bin_PROGRAMS = lasso lasso_dbg

TESTS = unit_tests
check_PROGRAMS = unit_tests lasso_dbg lasso_prof
PROG = DEPLOID

common_flags = -std=c++11 -Isrc/ -DDEPLOIDLASSOVERSION=\"${DEPLOIDLASSOVERSION}\" -DCOMPILEDATE=\"${COMPILEDATE}\"

common_src = src/dEploidLasso.cpp src/lasso.cpp src/lassoOut.cpp

debug_src = src/lassoDBG.cpp

lasso_SOURCES = main.cpp $(common_src)
lasso_dbg_SOURCES =  $(debug_src) $(lasso_SOURCES)
lasso_prof_SOURCES = $(lasso_SOURCES)

lasso_CXXFLAGS = $(common_flags) -DNDEBUG -O3
lasso_dbg_CXXFLAGS = -g $(common_flags) -O3
lasso_prof_CXXFLAGS = $(common_flags) -DNDEBUG -fno-omit-frame-pointer -pg -O1

lasso_LDADD = $(common_LDADD)
lasso_dbg_LDADD = $(common_LDADD)
lasso_prof_LDADD = $(common_LDADD)

unit_tests_SOURCES = $(common_src) \
					 tests/unittest/test_runner.cpp \
					 tests/unittest/test_standardizeVector.cpp \
					 tests/unittest/test_DEploidLASSO.cpp \
					 tests/unittest/test_txtReader.cpp

unit_tests_CXXFLAGS = $(common_flags) -DNDEBUG -DUNITTEST -Wno-write-strings --coverage
unit_tests_LDADD    = -lcppunit -ldl

clean-local: clean-local-check
.PHONY: clean-local-check utilities
clean-local-check:
	-rm -rf src/*.gc* tests/unittest/*.gc* src/*.gcov
