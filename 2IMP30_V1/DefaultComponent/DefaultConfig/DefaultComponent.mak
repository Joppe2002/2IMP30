
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

SIMULINK_CONFIG=False
!IF "$(SIMULINK_CONFIG)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "OM_WITH_CLEANUP"
!ENDIF


!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC15x64$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x64 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\Program Files\IBM\Rhapsody\10.0.1\Share"
RHPROOT="C:\Program Files\IBM\Rhapsody\10.0.1"
FRAMEWORK_LIB_ROOT="C:\ProgramData\IBM\Rhapsody\10.0.1x64\UserShare"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  Standards_and_Regulations.obj \
  Information_Channels.obj \
  Cultural_and_Geological_Differences.obj \
  Satellite_Imagery.obj \
  Aircraft_Sensors.obj \
  Seabed_Sensors.obj \
  Underwater_Sensors.obj \
  Pressure_Sensor.obj \
  Flow_Direction_Detector.obj \
  Government_Networks.obj \
  SMS_Signaling.obj \
  Mobile_Apps.obj \
  News_Outlets.obj \
  Storm_Sensors.obj \
  Tsunami_Sensors.obj \
  User.obj \
  Stakeholders.obj \
  SMSWTD.obj \
  Data_Storage.obj \
  Tsunami_Prediction.obj \
  Storm_Prediction.obj \
  Wheather_Prediction.obj \
  Actionable_Information_Generator.obj \
  Prediction_Module.obj \
  Government.obj \
  Emergency_Responders.obj \
  Researchers.obj \
  Civilians.obj \
  SystemContext.obj \
  Architecture.obj \
  UseCases.obj \
  Behavior.obj \
  ProxyPortInterfaces.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






Standards_and_Regulations.obj : Standards_and_Regulations.cpp Standards_and_Regulations.h    SystemContext.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Standards_and_Regulations.obj" "Standards_and_Regulations.cpp" 



Information_Channels.obj : Information_Channels.cpp Information_Channels.h    SystemContext.h User.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Information_Channels.obj" "Information_Channels.cpp" 



Cultural_and_Geological_Differences.obj : Cultural_and_Geological_Differences.cpp Cultural_and_Geological_Differences.h    SystemContext.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Cultural_and_Geological_Differences.obj" "Cultural_and_Geological_Differences.cpp" 



Satellite_Imagery.obj : Satellite_Imagery.cpp Satellite_Imagery.h    SystemContext.h Storm_Sensors.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Satellite_Imagery.obj" "Satellite_Imagery.cpp" 



Aircraft_Sensors.obj : Aircraft_Sensors.cpp Aircraft_Sensors.h    SystemContext.h Storm_Sensors.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Aircraft_Sensors.obj" "Aircraft_Sensors.cpp" 



Seabed_Sensors.obj : Seabed_Sensors.cpp Seabed_Sensors.h    SystemContext.h Tsunami_Sensors.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Seabed_Sensors.obj" "Seabed_Sensors.cpp" 



Underwater_Sensors.obj : Underwater_Sensors.cpp Underwater_Sensors.h    SystemContext.h Tsunami_Sensors.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Underwater_Sensors.obj" "Underwater_Sensors.cpp" 



Pressure_Sensor.obj : Pressure_Sensor.cpp Pressure_Sensor.h    SystemContext.h Underwater_Sensors.h Tsunami_Sensors.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Pressure_Sensor.obj" "Pressure_Sensor.cpp" 



Flow_Direction_Detector.obj : Flow_Direction_Detector.cpp Flow_Direction_Detector.h    SystemContext.h Underwater_Sensors.h Tsunami_Sensors.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Flow_Direction_Detector.obj" "Flow_Direction_Detector.cpp" 



Government_Networks.obj : Government_Networks.cpp Government_Networks.h    SystemContext.h Information_Channels.h User.h SMSWTD.h int_warning_type_ProxyFlowPropertyInterface.h bool_pred_direction_ProxyFlowPropertyInterface.h float_pred_severity_ProxyFlowPropertyInterface.h float_pred_probability_ProxyFlowPropertyInterface.h float_pred_speed_ProxyFlowPropertyInterface.h float_storm_probability_ProxyFlowPropertyInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Government_Networks.obj" "Government_Networks.cpp" 



SMS_Signaling.obj : SMS_Signaling.cpp SMS_Signaling.h    SystemContext.h Information_Channels.h User.h SMSWTD.h int_warning_type_ProxyFlowPropertyInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SMS_Signaling.obj" "SMS_Signaling.cpp" 



Mobile_Apps.obj : Mobile_Apps.cpp Mobile_Apps.h    SystemContext.h Information_Channels.h User.h SMSWTD.h int_warning_type_ProxyFlowPropertyInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Mobile_Apps.obj" "Mobile_Apps.cpp" 



News_Outlets.obj : News_Outlets.cpp News_Outlets.h    SystemContext.h Information_Channels.h User.h SMSWTD.h int_warning_type_ProxyFlowPropertyInterface.h bool_pred_direction_ProxyFlowPropertyInterface.h float_pred_severity_ProxyFlowPropertyInterface.h float_pred_probability_ProxyFlowPropertyInterface.h float_pred_speed_ProxyFlowPropertyInterface.h float_storm_probability_ProxyFlowPropertyInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"News_Outlets.obj" "News_Outlets.cpp" 



Storm_Sensors.obj : Storm_Sensors.cpp Storm_Sensors.h    SystemContext.h SMSWTD.h int_raw_wind_speed_ProxyFlowPropertyInterface.h bool_raw_wind_direction_ProxyFlowPropertyInterface.h int_raw_precipitation_amount_ProxyFlowPropertyInterface.h int_raw_precipitation_type_ProxyFlowPropertyInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Storm_Sensors.obj" "Storm_Sensors.cpp" 



Tsunami_Sensors.obj : Tsunami_Sensors.cpp Tsunami_Sensors.h    SystemContext.h SMSWTD.h int_raw_vibrations_distance_ProxyFlowPropertyInterface.h int_raw_vibrations_intensity_ProxyFlowPropertyInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Tsunami_Sensors.obj" "Tsunami_Sensors.cpp" 



User.obj : User.cpp User.h    SystemContext.h Information_Channels.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"User.obj" "User.cpp" 



Stakeholders.obj : Stakeholders.cpp Stakeholders.h    SystemContext.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Stakeholders.obj" "Stakeholders.cpp" 



SMSWTD.obj : SMSWTD.cpp SMSWTD.h    Architecture.h Stakeholders.h Information_Channels.h Standards_and_Regulations.h Cultural_and_Geological_Differences.h Prediction_Module.h Data_Storage.h Actionable_Information_Generator.h Tsunami_Sensors.h Storm_Sensors.h int_raw_wind_speed_ProxyFlowPropertyInterface.h bool_raw_wind_direction_ProxyFlowPropertyInterface.h int_raw_precipitation_amount_ProxyFlowPropertyInterface.h int_raw_precipitation_type_ProxyFlowPropertyInterface.h int_raw_vibrations_distance_ProxyFlowPropertyInterface.h int_raw_vibrations_intensity_ProxyFlowPropertyInterface.h int_warning_type_ProxyFlowPropertyInterface.h bool_pred_direction_ProxyFlowPropertyInterface.h float_pred_severity_ProxyFlowPropertyInterface.h float_pred_probability_ProxyFlowPropertyInterface.h float_pred_speed_ProxyFlowPropertyInterface.h float_storm_probability_ProxyFlowPropertyInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SMSWTD.obj" "SMSWTD.cpp" 



Data_Storage.obj : Data_Storage.cpp Data_Storage.h    Architecture.h Storm_Prediction.h Tsunami_Prediction.h Behavior.h int_raw_wind_speed_ProxyFlowPropertyInterface.h bool_raw_wind_direction_ProxyFlowPropertyInterface.h int_raw_precipitation_amount_ProxyFlowPropertyInterface.h int_raw_precipitation_type_ProxyFlowPropertyInterface.h int_raw_vibrations_distance_ProxyFlowPropertyInterface.h int_raw_vibrations_intensity_ProxyFlowPropertyInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Data_Storage.obj" "Data_Storage.cpp" 



Tsunami_Prediction.obj : Tsunami_Prediction.cpp Tsunami_Prediction.h    Architecture.h Data_Storage.h Actionable_Information_Generator.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Tsunami_Prediction.obj" "Tsunami_Prediction.cpp" 



Storm_Prediction.obj : Storm_Prediction.cpp Storm_Prediction.h    Architecture.h Data_Storage.h Actionable_Information_Generator.h bool_pred_direction_ProxyFlowPropertyInterface.h float_pred_severity_ProxyFlowPropertyInterface.h float_pred_probability_ProxyFlowPropertyInterface.h float_pred_speed_ProxyFlowPropertyInterface.h float_storm_probability_ProxyFlowPropertyInterface.h Behavior.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Storm_Prediction.obj" "Storm_Prediction.cpp" 



Wheather_Prediction.obj : Wheather_Prediction.cpp Wheather_Prediction.h    Architecture.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Wheather_Prediction.obj" "Wheather_Prediction.cpp" 



Actionable_Information_Generator.obj : Actionable_Information_Generator.cpp Actionable_Information_Generator.h    Architecture.h Storm_Prediction.h Tsunami_Prediction.h int_warning_type_ProxyFlowPropertyInterface.h Behavior.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Actionable_Information_Generator.obj" "Actionable_Information_Generator.cpp" 



Prediction_Module.obj : Prediction_Module.cpp Prediction_Module.h    Architecture.h Storm_Prediction.h Wheather_Prediction.h Tsunami_Prediction.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Prediction_Module.obj" "Prediction_Module.cpp" 



Government.obj : Government.cpp Government.h    UseCases.h Stakeholders.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Government.obj" "Government.cpp" 



Emergency_Responders.obj : Emergency_Responders.cpp Emergency_Responders.h    UseCases.h Stakeholders.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Emergency_Responders.obj" "Emergency_Responders.cpp" 



Researchers.obj : Researchers.cpp Researchers.h    UseCases.h Stakeholders.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Researchers.obj" "Researchers.cpp" 



Civilians.obj : Civilians.cpp Civilians.h    UseCases.h User.h Information_Channels.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Civilians.obj" "Civilians.cpp" 



SystemContext.obj : SystemContext.cpp SystemContext.h    Standards_and_Regulations.h Information_Channels.h Cultural_and_Geological_Differences.h Satellite_Imagery.h Aircraft_Sensors.h Seabed_Sensors.h Underwater_Sensors.h Pressure_Sensor.h Flow_Direction_Detector.h Government_Networks.h SMS_Signaling.h Mobile_Apps.h News_Outlets.h Storm_Sensors.h Tsunami_Sensors.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SystemContext.obj" "SystemContext.cpp" 



Architecture.obj : Architecture.cpp Architecture.h    SMSWTD.h Data_Storage.h Tsunami_Prediction.h Storm_Prediction.h Wheather_Prediction.h Actionable_Information_Generator.h Prediction_Module.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Architecture.obj" "Architecture.cpp" 



UseCases.obj : UseCases.cpp UseCases.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UseCases.obj" "UseCases.cpp" 



Behavior.obj : Behavior.cpp Behavior.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Behavior.obj" "Behavior.cpp" 



ProxyPortInterfaces.obj : ProxyPortInterfaces.cpp ProxyPortInterfaces.h    int_warning_type_ProxyFlowPropertyInterface.h bool_pred_direction_ProxyFlowPropertyInterface.h float_pred_severity_ProxyFlowPropertyInterface.h float_pred_probability_ProxyFlowPropertyInterface.h float_pred_speed_ProxyFlowPropertyInterface.h float_storm_probability_ProxyFlowPropertyInterface.h int_raw_wind_speed_ProxyFlowPropertyInterface.h bool_raw_wind_direction_ProxyFlowPropertyInterface.h int_raw_precipitation_amount_ProxyFlowPropertyInterface.h int_raw_precipitation_type_ProxyFlowPropertyInterface.h int_raw_vibrations_distance_ProxyFlowPropertyInterface.h int_raw_vibrations_intensity_ProxyFlowPropertyInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ProxyPortInterfaces.obj" "ProxyPortInterfaces.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist Standards_and_Regulations.obj erase Standards_and_Regulations.obj
	if exist Information_Channels.obj erase Information_Channels.obj
	if exist Cultural_and_Geological_Differences.obj erase Cultural_and_Geological_Differences.obj
	if exist Satellite_Imagery.obj erase Satellite_Imagery.obj
	if exist Aircraft_Sensors.obj erase Aircraft_Sensors.obj
	if exist Seabed_Sensors.obj erase Seabed_Sensors.obj
	if exist Underwater_Sensors.obj erase Underwater_Sensors.obj
	if exist Pressure_Sensor.obj erase Pressure_Sensor.obj
	if exist Flow_Direction_Detector.obj erase Flow_Direction_Detector.obj
	if exist Government_Networks.obj erase Government_Networks.obj
	if exist SMS_Signaling.obj erase SMS_Signaling.obj
	if exist Mobile_Apps.obj erase Mobile_Apps.obj
	if exist News_Outlets.obj erase News_Outlets.obj
	if exist Storm_Sensors.obj erase Storm_Sensors.obj
	if exist Tsunami_Sensors.obj erase Tsunami_Sensors.obj
	if exist User.obj erase User.obj
	if exist Stakeholders.obj erase Stakeholders.obj
	if exist SMSWTD.obj erase SMSWTD.obj
	if exist Data_Storage.obj erase Data_Storage.obj
	if exist Tsunami_Prediction.obj erase Tsunami_Prediction.obj
	if exist Storm_Prediction.obj erase Storm_Prediction.obj
	if exist Wheather_Prediction.obj erase Wheather_Prediction.obj
	if exist Actionable_Information_Generator.obj erase Actionable_Information_Generator.obj
	if exist Prediction_Module.obj erase Prediction_Module.obj
	if exist Government.obj erase Government.obj
	if exist Emergency_Responders.obj erase Emergency_Responders.obj
	if exist Researchers.obj erase Researchers.obj
	if exist Civilians.obj erase Civilians.obj
	if exist SystemContext.obj erase SystemContext.obj
	if exist Architecture.obj erase Architecture.obj
	if exist UseCases.obj erase UseCases.obj
	if exist Behavior.obj erase Behavior.obj
	if exist ProxyPortInterfaces.obj erase ProxyPortInterfaces.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
