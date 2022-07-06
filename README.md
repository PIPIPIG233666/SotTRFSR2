# FidelityFx Super Resolution 2.0 for Red Dead Redemption 2

 This mod is a library for RDR2 which replaces Nvidia DLSS with AMD FidelityFX Super Resolution 2.0.
 This will not work with cracked versions of RDR2.
 
 An extended guide to help with any issues can be found on the Nexus mod description [here](https://www.nexusmods.com/reddeadredemption2/mods/1550)
 
## Installation

* Ensure you are using DX12 for RDR2 and not Vulkan!
* Ensure asyncComputeEnabled is set to false in your system.xml file found in Documents\Rockstar Games\Red Dead Redemption 2\Settings\system.xml
* Download the latest release 
* Unzip the contents to your RDR2 executable directory
* Run RDR2

## Troubleshooting
(The main reason I made this fork, I simply approve PRs and keep it updated.)

- I'm getting a Rockstar Social Club error 4, so I can't even play the game!
<br><br><b>Answer:</b> Delete d3d11.dll. This seems to somehow fix the issue with the Social Club error.

- The DLSS option is not showing up on the menu, why?
<br><br><b>Answer:</b> Calm down, download the [EnableSignatureOverride.reg](https://github.com/AkiraJkr/RDRFSR2/releases/download/v1.1/EnableSignatureOverride.reg) and run it. It should show up from there on out.

## Compilation

* Clone this repo including all submodules
* Compile the FSR 2.0 submodule in external/FidelityFX-FSR2 like it is described in their [Readme](https://github.com/GPUOpen-Effects/FidelityFX-FSR2#quick-start-checklist). Note: I used the GenerateSolutionsDLL.bat but I am sure static libraries will work fine too
* Open the CyberFSR.sln with Visual Studio 2022
* Compile the entire solution
* Copy the compiled DLLs (nvngx.dll & d3d11.dll), ffx_fsr2_api_dx12_x64.dll and ffx_fsr2_api_x64.dll from the FidelityFX Directory to your RDR2 executable directory
* Run the game and set the quality in the DLSS settings
* Play the game with FSR 2.0
