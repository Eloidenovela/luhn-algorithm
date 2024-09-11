{
    values = {
        "/usr/bin/gcc",
        {
            "-m64",
            "-fvisibility=hidden",
            "-fvisibility-inlines-hidden",
            "-O3",
            "-DNDEBUG"
        }
    },
    depfiles_gcc = "luhn.o: src/luhn/luhn.cpp src/luhn/luhn.hpp\
",
    files = {
        "src/luhn/luhn.cpp"
    }
}