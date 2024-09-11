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
    depfiles_gcc = "card.o: src/util/card.cpp src/util/card.hpp\
",
    files = {
        "src/util/card.cpp"
    }
}