# Castlevania (Nintendo 64) - Data structures

> [!NOTE]
> This repository is now outdated. See the [decompilation project](https://github.com/blazkowolf/cv64) for an updated repository.

Definitions for several data structures from Castlevania (Nintendo 64), as C headers.

`extern.ld` contains the addresses (USA v1.0) of all extern'd data. This file is formatted so that it can be included in a linker script.

`decompme_context.h` contains all the structs in this repository + various N64 SDK and gbi.h stuff in one header. This is for the `Context` tab in [decomp.me](https://decomp.me/). Simply copy and paste the contents of that file into said tab.

Useful for mods created in C, as well as for decompilation.

Credits to the [Ocarina of Time](https://github.com/zeldaret/oot) decompilation project for the Ultra 64 headers.
