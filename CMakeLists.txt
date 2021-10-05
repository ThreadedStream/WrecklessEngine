cmake_minimum_required(VERSION 3.10)

project(WrecklessEngine CXX)

file(GLOB_RECURSE WRECKLESS_ENGINE_HEADER_FILES WrecklessEngine/include/*.h)
file(GLOB_RECURSE WRECKLESS_ENGINE_SRC_FILES WrecklessEngine/src/*.cpp)

set(CMAKE_CXX_STANDARD 17)

set(TARGET_INCLUDE_DIRS WrecklessEngine/include/ WrecklessEngine/ Vendor/EnTT/ Vendor/Mono/include/mono-2.0)

add_executable(wreckless_engine ${WRECKLESS_ENGINE_HEADER_FILES} ${WRECKLESS_ENGINE_SRC_FILES})
target_include_directories(wreckless_engine PUBLIC ${TARGET_INCLUDE_DIRS})

#set(WRECKLESS_ENGINE_HEADER_FILES
#        include/Application.h
#        include/ApplicationEvent.h
#        include/Bindable.h
#        include/BindableCodex.h
#        include/Buttons.h
#        include/CameraRegistry.h
#        include/Color.h
#        include/CommonInclude.h
#        include/Components.h
#        include/ComponentsCSharp.h
#        include/ConditionalNoexcept.h
#        include/ConsoleAdapter.h
#        include/ConsoleClass.h
#        include/ConstantBuffers.h
#        include/Cube.h
#        include/Cubemap.h
#        include/D3D11Buffer.h
#        include/D3D11DepthStencilState.h
#        include/D3D11Device.h
#        include/D3D11InputLayout.h
#        include/D3D11Rasterizer.h
#        include/D3D11RenderContext.h
#        include/D3D11SamplerState.h
#        include/D3D11Shader.h
#        include/D3D11SwapChain.h
#        include/D3D11Texture.h
#        include/DDSTextureLoader.h
#        include/DebugConsoleCSharp.h
#        include/DepthStencil.h
#        include/Drawable.h
#        include/dxerr.h
#        include/DXGIInfoManager.h
#        include/DynamicConstant.h
#        include/EditorLayer.h
#        include/Entity.h
#        include/EntityCSharp.h
#        include/Event.h
#        include/FastNoise.h
#        include/FileDialog.h
#        include/FileHelper.h
#        include/FinalApplication.h
#        include/GamePad.h
#        include/GamePadCSharp.h
#        include/GamePadType.h
#        include/GlobalClock.h
#        include/GraphicsFormats.h
#        include/GraphicsThrowMacros.h
#        include/Hasher.h
#        include/HrException.h
#        include/IBuffer.h
#        include/IDepthStencilState.h
#        include/IDevice.h
#        include/IInputLayout.h
#        include/IMesh.h
#        include/ImGuiLayer.h
#        include/ImGuiLogger.h
#        include/IndexBuffer.h
#        include/IndexedTriangleList.h
#        include/InfoManager.h
#        include/InputLayout.h
#        include/InputOutputStream.h
#        include/IParameter.h
#        include/IRasterizer.h
#        include/IRenderContext.h
#        include/ISamplerState.h
#        include/IShader.h
#        include/ISwapChain.h
#        ITexture.h
#        IWindow.h
#        Keyboard.h
#        KeyboardCSharp.h
#        KeyCode.h
#        KeyEvent.h
#        Layer.h
#        LayerStack.h
#        LayoutCodex.h
#        Manipulators.h
#        Model.h
#        Mouse.h
#        MouseCSharp.h
#        MouseEvent.h
#        Noise.h
#        NoiseCSharp.h
#        OrthogonalCamera.h)


#set(WRECKLESS_ENGINE_SRC_FILES
#        src/Application.cpp
#        src/ApplicationEvent.cpp
#        src/Bindable.cpp
#        src/BindableCodex.cpp
#        src/Buttons.cpp
#        src/CameraRegistrycpph
#        src/Color.cpp
#        src/CommonInclude.cpp
#        src/Components.cpp
#        src/ComponentsCSharp.cpp
#        src/ConditionalNoexcept.cpp
#        src/ConsoleAdapter.cpp
#        src/ConsoleClass.cpp
#        src/ConstantBuffers.cpp
#        src/Cube.cpp
#        src/Cubemap.cpp
#        src/D3D11Buffer.cpp
#        src/D3D11DepthStencilState.cpp
#        src/D3D11Device.cpp
#        src/D3D11InputLayout.cpp
#        src/D3D11Rasterizer.cpp
#        src/D3D11RenderContext.cpp
#        src/D3D11SamplerState.cpp
#        src/D3D11Shader.cpp
#        src/D3D11SwapChain.cpp
#        src/D3D11Texture.cpp
#        src/DDSTextureLoader.cpp
#        src/DebugConsoleCSharp.cpp
#        src/DepthStencil.cpp
#        src/Drawable.cpp
#        src/dxerr.cpp
#        src/DXGIInfoManager.cpp
#        src/DynamicConstant.cpp
#        src/EditorLayer.cpp
#        src/Entity.cpp
#        src/EntityCSharp.cpp
#        src/Event.cpp
#        src/FastNoise.cpp
#        src/FileDialog.cpp
#        src/FileHelper.cpp
#        src/FinalApplication.cpp
#        src/GamePad.cpp
#        src/GamePadCSharp.cpp
#        src/GamePadType.cpp
#        src/GlobalClock.cpp )