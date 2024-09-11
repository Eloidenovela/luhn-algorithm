{
    depfiles_gcc = "main.o: src/main.cpp src/util/util.hpp src/luhn/luhn.hpp\
",
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
    files = {
        "src/main.cpp"
    }
}