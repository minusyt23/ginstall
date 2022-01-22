cmake_minimum_required(VERSION 3.22)

project(ginstall)

# Bad idea but generally works
file(GLOB ginstall_code CONFIGURE_DEPENDS "*.h" "*.c")

add_executable(ginstall ${ginstall_code})
