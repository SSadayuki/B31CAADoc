
BUILT_OBJECT_TYPE = TYPELIB

LINK_WITH = InfTypeLib

#
# The Type library is now delivered in CNext data module because it cannot 
# be built with DS IDLCompiler (which does not support interface that 
# directly derive from IDispatch and not CATBaseDispatch)
#
BUILD = NO

OS = intel_a64
BUILD = NO

OS = SunOS
BUILD = NO

OS = AIX
BUILD = NO

OS = HP-UX
BUILD = NO

OS = IRIX
BUILD = NO

OS = Linux
BUILD = NO
