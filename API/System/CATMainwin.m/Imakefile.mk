#
# SHARED LIBRARY
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

OS = solaris_a
# Remove the default Fortran libs
FORTRAN_LIBS = 
# No link on CATMainwinInit (for delay load)

OS = HP-UX
# No link on CATMainwinInit (for delay load)

OS = aix_a
# No link on CATMainwinInit (for delay load)

OS = aix_a64
# No link on CATMainwinInit (for delay load)

OS = irix_a
# No link on CATMainwinInit (for delay load)

OS = irix_a64
# No link on CATMainwinInit (for delay load)

OS = intel_a
BUILD = NO

OS = win_b
BUILD = NO

OS = win_b64
BUILD = NO

OS = intel_a64
BUILD = NO

OS = win_a
BUILD = NO





