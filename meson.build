# The project definition.
project('sample-lib', 'cpp')

# Include directories.
#
# This function is like INCLUDE_DIRECTORIES in CMake. We store the result in a variable and reuse it later.
include_dir = include_directories('include')

# The sample library.
#
# Here we define this library through the function with the same name. To declare static/shared library, use
# `static_library` or `shared_library` functions, respectively.
sample_lib = library(
    'sample-lib',
    ['src/greeting.cc'],
    include_directories: include_dir,
)

# A meson dependency.
#
# Meson actually manages the dependencies itself, so we have to declare a dependency which links with the library. This
# design gives much freedom, because we can even declare a dependency which links a CMake-managed library.
sample_lib_dep = declare_dependency(
    link_with: [sample_lib],
    include_directories: include_dir,
)

# The test program.
#
# test() defines a test to run with the test harness. Takes two positional arguments: the first is the name of the test, and
# the second is the executable to run. The executable can be an exe object returned by executable() or an
# external_program object returned by find_program().
#
# If the program returns 0, the test passes. Otherwise, it fails.
test(
    'default',
    executable(
        'default-test',
        ['tests/test.cc'],
        dependencies: [sample_lib_dep],
    ),
)