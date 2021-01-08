workspace "Paper"
architecture "x64"
configurations {
    "Debug",
    "Release",
    "Dist"
}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "Paper"
location "paper"
kind "SharedLib"
language "C++"
targetdir("bin/" .. outputdir .. "/%{prj.name}")
objdir("bin-int/" .. outputdir .. "/%{prj.name}")

files {
    "%{prj.name}/src/**.h",
    "%{prj.name}/src/**.cpp"
}

include {
    "%{prj.name}/vendor/spdlog/include"
}

filter "system:windows"
cppdialect "C++17"
staticruntime "On"
systemversion "10.0.18362.0"

defines {
    "PA_PLATFORM_WINDOWS",
    "PAPER_BUILD_DLL"
}

postbuildcommands {
    ("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/sandbox")
}

filter "configurations:Debug"
defines "PA_DEBUG"
symbols "On"

filter "configurations:Release"
defines "PA_Release"
optimize "On"

filter "configurations:Dist"
defines "PA_DIST"
optimize "On"
