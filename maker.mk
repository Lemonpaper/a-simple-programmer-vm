ProjectName            :=prosys
ConfigurationName      :=Release
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/huanglin/Documents/Documents
ProjectPath            :=C:/Users/huanglin/Documents/Documents/prosys
IntermediateDirectory  :=../build-$(ConfigurationName)/prosys
OutDir                 :=../build-$(ConfigurationName)/prosys
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=huanglin
Date                   :=04/07/2020
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/Strawberry/c/bin/g++.exe
SharedObjectLinkerName :=C:/Strawberry/c/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=$(PreprocessorSwitch)NDEBUG 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/Strawberry/c/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/Strawberry/c/bin/ar.exe rcu
CXX      := C:/Strawberry/c/bin/g++.exe
CC       := C:/Strawberry/c/bin/gcc.exe
CXXFLAGS :=  -O2 -Wall $(Preprocessors)
CFLAGS   :=  -O2 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/Strawberry/c/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/prosys/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/prosys/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\prosys" mkdir "..\build-$(ConfigurationName)\prosys"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\prosys" mkdir "..\build-$(ConfigurationName)\prosys"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/prosys/.d:
	@if not exist "..\build-$(ConfigurationName)\prosys" mkdir "..\build-$(ConfigurationName)\prosys"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/prosys/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/prosys/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/huanglin/Documents/Documents/prosys/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/prosys/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/prosys/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/prosys/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/prosys/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/prosys/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/prosys//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


