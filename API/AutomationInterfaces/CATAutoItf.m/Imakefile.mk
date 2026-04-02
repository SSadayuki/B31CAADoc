BUILT_OBJECT_TYPE = SHARED LIBRARY

INCLUDED_MODULES = CATScriptItfBase CATScriptReferences

OS = intel_a
LINK_WITH = JS0GROUP AutomationInterfacesUUID SystemUUID JS0FM

OS = win_b
LINK_WITH = JS0GROUP AutomationInterfacesUUID SystemUUID JS0FM

OS = win_b64
LINK_WITH = JS0GROUP AutomationInterfacesUUID SystemUUID JS0FM

OS = intel_a64
LINK_WITH = JS0GROUP AutomationInterfacesUUID SystemUUID JS0FM

OS = win_a
LINK_WITH = JS0GROUP AutomationInterfacesUUID SystemUUID JS0FM

OS = SunOS
LINK_WITH = JS0GROUP AutomationInterfacesUUID SystemUUID JS0FM CATMainwin
#BUILD=NO

OS = AIX
LINK_WITH = JS0GROUP AutomationInterfacesUUID SystemUUID JS0FM CATMainwin
#BUILD=NO

OS = HP-UX
LINK_WITH = JS0GROUP AutomationInterfacesUUID SystemUUID JS0FM CATMainwin
#BUILD=NO

OS = IRIX
LINK_WITH = JS0GROUP AutomationInterfacesUUID SystemUUID JS0FM CATMainwin
#BUILD=NO

OS = Linux
LINK_WITH = JS0GROUP AutomationInterfacesUUID SystemUUID JS0FM CATMainwin
#BUILD=NO



