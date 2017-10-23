﻿<?xml version="1.0" encoding="utf-8"?>
<Project DefaultTargets="Build" ToolsVersion="12.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ItemGroup Label="ProjectConfigurations">
    <ProjectConfiguration Include="Debug|Win32">
      <Configuration>Debug</Configuration>
      <Platform>Win32</Platform>
    </ProjectConfiguration>
    <ProjectConfiguration Include="Release|Win32">
      <Configuration>Release</Configuration>
      <Platform>Win32</Platform>
    </ProjectConfiguration>
    <ProjectConfiguration Include="MinSizeRel|Win32">
      <Configuration>MinSizeRel</Configuration>
      <Platform>Win32</Platform>
    </ProjectConfiguration>
    <ProjectConfiguration Include="RelWithDebInfo|Win32">
      <Configuration>RelWithDebInfo</Configuration>
      <Platform>Win32</Platform>
    </ProjectConfiguration>
  </ItemGroup>
  <PropertyGroup Label="Globals">
    <ProjectGUID>{E20EABFF-FD09-49A0-9083-A70C9500BD8B}</ProjectGUID>
    <Keyword>Win32Proj</Keyword>
    <Platform>Win32</Platform>
    <ProjectName>libcaffe</ProjectName>
  </PropertyGroup>
  <Import Project="$(VCTargetsPath)\Microsoft.Cpp.Default.props" />
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'" Label="Configuration">
    <ConfigurationType>StaticLibrary</ConfigurationType>
    <UseOfMfc>false</UseOfMfc>
    <CharacterSet>MultiByte</CharacterSet>
    <PlatformToolset>v120</PlatformToolset>
  </PropertyGroup>
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Release|Win32'" Label="Configuration">
    <ConfigurationType>StaticLibrary</ConfigurationType>
    <UseOfMfc>false</UseOfMfc>
    <CharacterSet>MultiByte</CharacterSet>
    <PlatformToolset>v120</PlatformToolset>
  </PropertyGroup>
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='MinSizeRel|Win32'" Label="Configuration">
    <ConfigurationType>StaticLibrary</ConfigurationType>
    <UseOfMfc>false</UseOfMfc>
    <CharacterSet>MultiByte</CharacterSet>
    <PlatformToolset>v120</PlatformToolset>
  </PropertyGroup>
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='RelWithDebInfo|Win32'" Label="Configuration">
    <ConfigurationType>StaticLibrary</ConfigurationType>
    <UseOfMfc>false</UseOfMfc>
    <CharacterSet>MultiByte</CharacterSet>
    <PlatformToolset>v120</PlatformToolset>
  </PropertyGroup>
  <Import Project="$(VCTargetsPath)\Microsoft.Cpp.props" />
  <ImportGroup Label="ExtensionSettings">
  </ImportGroup>
  <ImportGroup Label="PropertySheets">
    <Import Project="$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props" Condition="exists('$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props')" Label="LocalAppDataPlatform" />
  </ImportGroup>
  <PropertyGroup Label="UserMacros" />
  <PropertyGroup>
    <_ProjectFileVersion>10.0.20506.1</_ProjectFileVersion>
    <OutDir Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'">D:\bin\caffeEx\Debug\</OutDir>
    <IntDir Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'">libcaffe.dir\Debug\</IntDir>
    <TargetName Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'">libcaffe</TargetName>
    <TargetExt Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'">.lib</TargetExt>
    <OutDir Condition="'$(Configuration)|$(Platform)'=='Release|Win32'">D:\bin\caffeEx\Release\</OutDir>
    <IntDir Condition="'$(Configuration)|$(Platform)'=='Release|Win32'">libcaffe.dir\Release\</IntDir>
    <TargetName Condition="'$(Configuration)|$(Platform)'=='Release|Win32'">libcaffe</TargetName>
    <TargetExt Condition="'$(Configuration)|$(Platform)'=='Release|Win32'">.lib</TargetExt>
    <OutDir Condition="'$(Configuration)|$(Platform)'=='MinSizeRel|Win32'">D:\bin\caffeEx\MinSizeRel\</OutDir>
    <IntDir Condition="'$(Configuration)|$(Platform)'=='MinSizeRel|Win32'">libcaffe.dir\MinSizeRel\</IntDir>
    <TargetName Condition="'$(Configuration)|$(Platform)'=='MinSizeRel|Win32'">libcaffe</TargetName>
    <TargetExt Condition="'$(Configuration)|$(Platform)'=='MinSizeRel|Win32'">.lib</TargetExt>
    <OutDir Condition="'$(Configuration)|$(Platform)'=='RelWithDebInfo|Win32'">D:\bin\caffeEx\RelWithDebInfo\</OutDir>
    <IntDir Condition="'$(Configuration)|$(Platform)'=='RelWithDebInfo|Win32'">libcaffe.dir\RelWithDebInfo\</IntDir>
    <TargetName Condition="'$(Configuration)|$(Platform)'=='RelWithDebInfo|Win32'">libcaffe</TargetName>
    <TargetExt Condition="'$(Configuration)|$(Platform)'=='RelWithDebInfo|Win32'">.lib</TargetExt>
  </PropertyGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'">
    <ClCompile>
      <AdditionalIncludeDirectories>
       .\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include;
        .\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\openblas;
        .\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\google;
       .\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\gflags;
        .\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\glog;
        .\caffe\mini-caffe-example-master\mini-caffe\include;
        .\boost_1_57_0;%(AdditionalIncludeDirectories)</AdditionalIncludeDirectories>
      <AssemblerListingLocation>Debug/</AssemblerListingLocation>
      <BasicRuntimeChecks>EnableFastChecks</BasicRuntimeChecks>
      <CompileAs>CompileAsCpp</CompileAs>
      <DebugInformationFormat>ProgramDatabase</DebugInformationFormat>
      <ExceptionHandling>Sync</ExceptionHandling>
      <InlineFunctionExpansion>Disabled</InlineFunctionExpansion>
      <Optimization>Disabled</Optimization>
      <PrecompiledHeader>NotUsing</PrecompiledHeader>
      <RuntimeLibrary>MultiThreadedDebugDLL</RuntimeLibrary>
      <RuntimeTypeInfo>true</RuntimeTypeInfo>
      <WarningLevel>Level3</WarningLevel>
      <PreprocessorDefinitions>WIN32;_WINDOWS;_DEBUG;CPU_ONLY;USE_OPENCV;CMAKE_INTDIR="Debug";%(PreprocessorDefinitions)</PreprocessorDefinitions>
      <ObjectFileName>$(IntDir)</ObjectFileName>
    </ClCompile>
    <ResourceCompile>
      <PreprocessorDefinitions>WIN32;_WINDOWS;_DEBUG;CPU_ONLY;USE_OPENCV;CMAKE_INTDIR=\"Debug\";%(PreprocessorDefinitions)</PreprocessorDefinitions>
      <AdditionalIncludeDirectories>.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include;
				.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\openblas;
				.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\google;
.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\gflags;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\glog;
.\caffe\mini-caffe-example-master\mini-caffe\include;.\boost_1_57_0;%(AdditionalIncludeDirectories)</AdditionalIncludeDirectories>
    </ResourceCompile>
    <Midl>
      <AdditionalIncludeDirectories>.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\openblas;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\google;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\gflags;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\glog;.\caffe\mini-caffe-example-master\mini-caffe\include;.\boost_1_57_0;%(AdditionalIncludeDirectories)</AdditionalIncludeDirectories>
      <OutputDirectory>$(IntDir)</OutputDirectory>
      <HeaderFileName>%(Filename).h</HeaderFileName>
      <TypeLibraryName>%(Filename).tlb</TypeLibraryName>
      <InterfaceIdentifierFileName>%(Filename)_i.c</InterfaceIdentifierFileName>
      <ProxyFileName>%(Filename)_p.c</ProxyFileName>
    </Midl>
  </ItemDefinitionGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Release|Win32'">
    <ClCompile>
      <AdditionalIncludeDirectories>.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\openblas;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\gflags;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\glog;
.\caffe\mini-caffe-example-master\mini-caffe\include;D:\boost_1_57_0;C:\opencv\include;%(AdditionalIncludeDirectories)</AdditionalIncludeDirectories>
      <AssemblerListingLocation>Release/</AssemblerListingLocation>
      <CompileAs>CompileAsCpp</CompileAs>
      <ExceptionHandling>Sync</ExceptionHandling>
      <InlineFunctionExpansion>AnySuitable</InlineFunctionExpansion>
      <Optimization>MaxSpeed</Optimization>
      <PrecompiledHeader>NotUsing</PrecompiledHeader>
      <RuntimeLibrary>MultiThreadedDLL</RuntimeLibrary>
      <RuntimeTypeInfo>true</RuntimeTypeInfo>
      <WarningLevel>Level3</WarningLevel>
      <PreprocessorDefinitions>WIN32;_WINDOWS;NDEBUG;CPU_ONLY;USE_OPENCV;CMAKE_INTDIR="Release";%(PreprocessorDefinitions)</PreprocessorDefinitions>
      <ObjectFileName>$(IntDir)</ObjectFileName>
      <DebugInformationFormat>
      </DebugInformationFormat>
    </ClCompile>
    <ResourceCompile>
      <PreprocessorDefinitions>WIN32;_WINDOWS;NDEBUG;CPU_ONLY;USE_OPENCV;CMAKE_INTDIR=\"Release\";%(PreprocessorDefinitions)</PreprocessorDefinitions>
      <AdditionalIncludeDirectories>.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\openblas;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\google;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\gflags;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\glog;.\caffe\mini-caffe-example-master\mini-caffe\include;F:\Ѹ������\boost_1_57_0;%(AdditionalIncludeDirectories)</AdditionalIncludeDirectories>
    </ResourceCompile>
    <Midl>
      <AdditionalIncludeDirectories>.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\openblas;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\google;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\gflags;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\glog;.\caffe\mini-caffe-example-master\mini-caffe\include;F:\Ѹ������\boost_1_57_0;%(AdditionalIncludeDirectories)</AdditionalIncludeDirectories>
      <OutputDirectory>$(IntDir)</OutputDirectory>
      <HeaderFileName>%(Filename).h</HeaderFileName>
      <TypeLibraryName>%(Filename).tlb</TypeLibraryName>
      <InterfaceIdentifierFileName>%(Filename)_i.c</InterfaceIdentifierFileName>
      <ProxyFileName>%(Filename)_p.c</ProxyFileName>
    </Midl>
    <Link>
      <AdditionalLibraryDirectories>E:\local\13\boost_1_57_0\lib32-msvc-12.0;%(AdditionalLibraryDirectories)</AdditionalLibraryDirectories>
    </Link>
  </ItemDefinitionGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='MinSizeRel|Win32'">
    <ClCompile>
      <AdditionalIncludeDirectories>.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\openblas;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\google;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\gflags;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\glog;.\caffe\mini-caffe-example-master\mini-caffe\include;F:\Ѹ������\boost_1_57_0;%(AdditionalIncludeDirectories)</AdditionalIncludeDirectories>
      <AssemblerListingLocation>MinSizeRel/</AssemblerListingLocation>
      <CompileAs>CompileAsCpp</CompileAs>
      <ExceptionHandling>Sync</ExceptionHandling>
      <InlineFunctionExpansion>OnlyExplicitInline</InlineFunctionExpansion>
      <Optimization>MinSpace</Optimization>
      <PrecompiledHeader>NotUsing</PrecompiledHeader>
      <RuntimeLibrary>MultiThreadedDLL</RuntimeLibrary>
      <RuntimeTypeInfo>true</RuntimeTypeInfo>
      <WarningLevel>Level3</WarningLevel>
      <PreprocessorDefinitions>WIN32;_WINDOWS;NDEBUG;CPU_ONLY;USE_OPENCV;CMAKE_INTDIR="MinSizeRel";%(PreprocessorDefinitions)</PreprocessorDefinitions>
      <ObjectFileName>$(IntDir)</ObjectFileName>
      <DebugInformationFormat>
      </DebugInformationFormat>
    </ClCompile>
    <ResourceCompile>
      <PreprocessorDefinitions>WIN32;_WINDOWS;NDEBUG;CPU_ONLY;USE_OPENCV;CMAKE_INTDIR=\"MinSizeRel\";%(PreprocessorDefinitions)</PreprocessorDefinitions>
      <AdditionalIncludeDirectories>.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\openblas;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\google;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\gflags;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\glog;.\caffe\mini-caffe-example-master\mini-caffe\include;F:\Ѹ������\boost_1_57_0;%(AdditionalIncludeDirectories)</AdditionalIncludeDirectories>
    </ResourceCompile>
    <Midl>
      <AdditionalIncludeDirectories>.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\openblas;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\google;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\gflags;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\glog;.\caffe\mini-caffe-example-master\mini-caffe\include;F:\Ѹ������\boost_1_57_0;%(AdditionalIncludeDirectories)</AdditionalIncludeDirectories>
      <OutputDirectory>$(IntDir)</OutputDirectory>
      <HeaderFileName>%(Filename).h</HeaderFileName>
      <TypeLibraryName>%(Filename).tlb</TypeLibraryName>
      <InterfaceIdentifierFileName>%(Filename)_i.c</InterfaceIdentifierFileName>
      <ProxyFileName>%(Filename)_p.c</ProxyFileName>
    </Midl>
  </ItemDefinitionGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='RelWithDebInfo|Win32'">
    <ClCompile>
      <AdditionalIncludeDirectories>.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\openblas;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\google;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\gflags;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\glog;.\caffe\mini-caffe-example-master\mini-caffe\include;F:\Ѹ������\boost_1_57_0;%(AdditionalIncludeDirectories)</AdditionalIncludeDirectories>
      <AssemblerListingLocation>RelWithDebInfo/</AssemblerListingLocation>
      <CompileAs>CompileAsCpp</CompileAs>
      <DebugInformationFormat>ProgramDatabase</DebugInformationFormat>
      <ExceptionHandling>Sync</ExceptionHandling>
      <InlineFunctionExpansion>OnlyExplicitInline</InlineFunctionExpansion>
      <Optimization>MaxSpeed</Optimization>
      <PrecompiledHeader>NotUsing</PrecompiledHeader>
      <RuntimeLibrary>MultiThreadedDLL</RuntimeLibrary>
      <RuntimeTypeInfo>true</RuntimeTypeInfo>
      <WarningLevel>Level3</WarningLevel>
      <PreprocessorDefinitions>WIN32;_WINDOWS;NDEBUG;CPU_ONLY;USE_OPENCV;CMAKE_INTDIR="RelWithDebInfo";%(PreprocessorDefinitions)</PreprocessorDefinitions>
      <ObjectFileName>$(IntDir)</ObjectFileName>
    </ClCompile>
    <ResourceCompile>
      <PreprocessorDefinitions>WIN32;_WINDOWS;NDEBUG;CPU_ONLY;USE_OPENCV;CMAKE_INTDIR=\"RelWithDebInfo\";%(PreprocessorDefinitions)</PreprocessorDefinitions>
      <AdditionalIncludeDirectories>.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\openblas;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\google;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\gflags;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\glog;.\caffe\mini-caffe-example-master\mini-caffe\include;F:\Ѹ������\boost_1_57_0;%(AdditionalIncludeDirectories)</AdditionalIncludeDirectories>
    </ResourceCompile>
    <Midl>
      <AdditionalIncludeDirectories>.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\openblas;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\google;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\gflags;.\caffe\mini-caffe-example-master\mini-caffe\3rdparty\include\glog;.\caffe\mini-caffe-example-master\mini-caffe\include;F:\Ѹ������\boost_1_57_0;%(AdditionalIncludeDirectories)</AdditionalIncludeDirectories>
      <OutputDirectory>$(IntDir)</OutputDirectory>
      <HeaderFileName>%(Filename).h</HeaderFileName>
      <TypeLibraryName>%(Filename).tlb</TypeLibraryName>
      <InterfaceIdentifierFileName>%(Filename)_i.c</InterfaceIdentifierFileName>
      <ProxyFileName>%(Filename)_p.c</ProxyFileName>
    </Midl>
  </ItemDefinitionGroup>
  <ItemGroup>
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\blob.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\caffe.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\common.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\data_reader.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\data_transformer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\filler.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\internal_thread.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layer_factory.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\net.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\parallel.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\sgd_solvers.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\solver.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\solver_factory.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\syncedmem.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\util\benchmark.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\util\blocking_queue.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\util\db.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\util\db_leveldb.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\util\db_lmdb.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\util\device_alternate.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\util\format.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\util\im2col.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\util\insert_splits.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\util\io.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\util\math_functions.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\util\mkl_alternate.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\util\rng.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\util\upgrade_proto.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\absval_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\accuracy_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\argmax_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\base_conv_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\base_data_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\batch_norm_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\batch_reindex_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\bias_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\bnll_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\concat_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\contrastive_loss_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\conv_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\data_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\deconv_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\dropout_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\dummy_data_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\eltwise_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\elu_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\embed_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\euclidean_loss_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\exp_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\filter_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\flatten_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\hinge_loss_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\im2col_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\image_data_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\infogain_loss_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\inner_product_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\log_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\loss_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\lrn_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\memory_data_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\multinomial_logistic_loss_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\mvn_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\neuron_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\pooling_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\power_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\prelu_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\python_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\reduction_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\relu_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\reshape_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\scale_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\sigmoid_cross_entropy_loss_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\sigmoid_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\silence_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\slice_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\softmax_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\softmax_loss_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\split_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\spp_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\tanh_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\threshold_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\tile_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\layers\window_data_layer.hpp" />
    <ClInclude Include=".\caffe\mini-caffe-example-master\mini-caffe\include\caffe\proto\caffe.pb.h" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\blob.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\common.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\data_reader.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\data_transformer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\internal_thread.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layer_factory.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\net.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\parallel.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\solver.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\syncedmem.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\absval_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\accuracy_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\argmax_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\base_conv_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\base_data_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\batch_norm_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\batch_reindex_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\bias_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\bnll_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\concat_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\contrastive_loss_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\conv_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\data_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\deconv_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\dropout_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\dummy_data_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\eltwise_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\elu_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\embed_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\euclidean_loss_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\exp_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\filter_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\flatten_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\hinge_loss_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\im2col_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\image_data_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\infogain_loss_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\inner_product_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\log_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\loss_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\lrn_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\memory_data_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\multinomial_logistic_loss_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\mvn_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\neuron_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\pooling_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\power_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\prelu_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\reduction_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\relu_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\reshape_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\scale_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\sigmoid_cross_entropy_loss_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\sigmoid_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\silence_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\slice_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\softmax_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\softmax_loss_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\split_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\spp_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\tanh_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\threshold_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\tile_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\layers\window_data_layer.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\util\benchmark.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\util\blocking_queue.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\util\cudnn.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\util\db.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\util\db_leveldb.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\util\db_lmdb.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\util\im2col.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\util\insert_splits.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\util\io.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\util\math_functions.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\util\signal_handler.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\util\upgrade_proto.cpp" />
    <ClCompile Include=".\caffe\mini-caffe-example-master\mini-caffe\src\caffe\proto\caffe.pb.cc" />
  </ItemGroup>
  <Import Project="$(VCTargetsPath)\Microsoft.Cpp.targets" />
  <ImportGroup Label="ExtensionTargets">
  </ImportGroup>
</Project>