add_repositories("antlr4 https://github.com/antlr/antlr4.git master")
add_repositories("cxxopts https://github.com/jarro2783/cxxopts master")

add_rules("mode.debug", "mode.release")

local repo = "$(configdir)/repositories/"

target("asm-format")
    set_kind("binary")
    add_cxxflags("-std=c++20", "-fuse-ld=lld", {force = true})
    add_files("src/**.cpp", repo .. "antlr4/runtime/Cpp/runtime/src/**.cpp")
    add_includedirs("src/asm8086", 
        repo .. "antlr4/runtime/Cpp/runtime/src", 
        repo .. "cxxopts/include")
