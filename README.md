# FidelityFx Super Resolution 2.0 for Dying Light 2

## Installation

1. Download the latest DL2FSR2.zip file from [the releases](https://github.com/mnxn/DL2FSR2/releases).
2. Extract the `.reg` files to anywhere and run `EnableSignatureOverride.reg` (it may need admin permission).
3. Extract `nvngx.dll` to `Dying Light 2\ph\work\bin\x64` so it is next to `nvngx_dlss.dll` and
   `DyingLightGame_x64_rwdi.exe`.
4. Make sure that the game has the `Renderer Mode` set to `D3D12` in the `Advanced Video Settings`.
5. Run the game and select one of the now-available DLSS `Upscaling` options in the `Video` settings:
    - `DLSS, quality` is FSR 2.0 Quality: Upscale by a factor of `1.5x`
    - `DLSS, balanced` is FSR 2.0 Balanced: Upscale by a factor of `1.7x`
    - `DLSS, performance` is FSR 2.0 Performance: Upscale by a factor of `2.0x`

## Uninstallation

1. Delete `nvngx.dll` from `Dying Light 2\ph\work\bin\x64`.
2. Run `DisableSignatureOverride.reg`.
3. Both `.reg` files are no longer needed and can be deleted from wherever you stored them.

---

Original CyberFSR information below:

# FidelityFx Super Resolution 2.0 for Cyberpunk 2077

 This mod is a library for Cyberpunk which replaces Nvidia DLSS with AMD FidelityFX Super Resolution 2.0

## Compilation

* Clone this repo including all submodules
* Compile the FSR 2.0 submodule in external/FidelityFX-FSR2 like it is described in their Readme https://github.com/GPUOpen-Effects/FidelityFX-FSR2#quick-start-checklist. Note: I used the GenerateSolutionsDLL.bat but I am sure static libraries will work fine too
* Open the CyberFSR.sln with Visual Studio 2022
* Hit Compile
* Copy the compiled DLL, ffx_fsr2_api_dx12_x64.dll and ffx_fsr2_api_x64.dll from the FidelityFX Directory to your Cyberpunk 2077 executable directory.
* Rename the compiled DLL to nvngx.dll
* Run the EnableSignatureOverride.reg to allow Cyberpunks DLSS implementation to load unsigned DLSS versions
* Run the game and set the quality in the DLSS settings
* Play the game with FSR 2.0
